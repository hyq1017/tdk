#include "manager/HNetworkManager.h"
#include "log/HLog.h"

#include "network/HSocket.h"
#include "protocol/AccessMsg.h"

#include "google/protobuf/message.h"
#include "CCLuaEngine.h"

static HNetworkManager* mInstance;

using namespace cocos2d;

//后期处理一下问题
//todo:切换网络 wifi--4g
//todo:超时
//todo:网络断了
//todo:同时收发数据的情况

HNetworkManager* HNetworkManager::Instance() {
	if (mInstance == nullptr) {
		mInstance = new HNetworkManager;

	}
	return mInstance;
}

HNetworkManager::HNetworkManager():
m_socket_send(nullptr),
//m_socket_recv(nullptr),
m_socket_heart(nullptr),
m_b_stop_thread_recv(true),
m_b_stop_thread_heart(true),
m_recv_pos(0)
{
}

HNetworkManager::~HNetworkManager()
{
}

//开始连接socket
void HNetworkManager::start()
{

	string host = "114.55.106.95"; //"114.55.106.95"; //"192.168.1.108";
	int port = 8089; //8089;//502;

	if (m_socket_send)
	{
		m_socket_send->close();
	}
	m_socket_send = new HSocket();
	m_socket_send->init(host, port);
	if (m_socket_send->connect())
	{
		HLog::log("m_socket_send error");
	}

	//启动新的线程 接收数据
	start_thread_recv();
}

//终止网络处理
void HNetworkManager::end()
{
	HLog::log("HNetworkManager::end");

	if (m_socket_send)
	{
		m_socket_send->close();
		m_socket_send = nullptr;
	}
	if (m_socket_heart)
	{
		m_socket_heart->close();
		m_socket_heart = nullptr;
	}
	m_b_stop_thread_recv = true;
	m_b_stop_thread_heart = true;
	m_recv_pos = 0;
	memset(m_recv_buf, 0, sizeof(m_recv_buf));
}

//创建一个线程 发送网络数据
void HNetworkManager::start_thread_recv()
{
	HLog::log("HNetworkManager::start_thread_recv");
	m_b_stop_thread_recv = false;
	auto t = std::thread(&HNetworkManager::thread_func_recv, this);
	t.detach();
	
}
//创建一个线程 发送心跳数据
void HNetworkManager::start_thread_heart()
{
	HLog::log("HNetworkManager::start_thread_heart");
}

//创建一个线程 发送send数据
void HNetworkManager::start_thread_send()
{
	HLog::log("HNetworkManager::start_thread_send");

}


//线程 回调函数 接收网络数据
//todo：考虑同时收发消息的情况
//todo：考虑收到的数据大于最大接收长度的情况
//todo：接收超时，接收失败
void* HNetworkManager::thread_func_recv()
{
	CCLOG("------------[thread_func_recv]--------------");
	fd_set readfds;
	struct timeval timeout = { 0, NET_TIMEOUT };
	int selectRet = 0;

	while (!m_b_stop_thread_recv && m_socket_send)
	{
		//解析数据
		Response* resp = mInstance->decode_recv_msg();
		if (resp) 
		{
			//分发数据
			dispatch(resp);
			//删除申请的内存
			delete resp->body;
			delete resp;
		}

		FD_ZERO(&readfds);
		FD_SET(m_socket_send->m_socket, &readfds);
#ifdef WIN32
		selectRet = select(0, &readfds, NULL, NULL, &timeout);
#else
		selectRet = select(sock + 1, &readfds, NULL, NULL, &timeout);
#endif
		//收取数据
		if (selectRet > 0)
		{
			int pos = mInstance->m_recv_pos;
			int read = m_socket_send->read(&(mInstance->m_recv_buf[pos]), MAX_RECV_SIZE);
			if (read > 0) 
			{
				mInstance->m_recv_pos += read;
				CCLOG("selcet recv:%f", selectRet);
			}
		}
		//休眠
		std::this_thread::sleep_for(std::chrono::milliseconds(2));
	}

	return 0;
}

//线程 回调函数 心跳网络数据
void* HNetworkManager::thread_func_heart()
{
	return (void*)0;
}

//发送数据
int HNetworkManager::send_msg(Request req)
{
	//request数据转化相对应的字节流
	char* data = convert_request_to_bytes(req);
	int ret = -1;
	if (m_socket_send)
	{
		//发送数据
		ret = m_socket_send->write(data, req.get_total_len());
	}

	//打印消息
	CCLOG("send_msg:%d", ret);

	//删除new的char[]
	delete[] data;
	return ret;
}

//发送数据
int HNetworkManager::send_msg(void* msg, const int& type, const int& id)
{
	Request req;
	req.head.type = MSG_TYPE_ACCESS;
	req.id = id;

	//switch(type)
	switch (id)
	{
		case MSG_ID_REGIST_REQ:
		{
			LoginReq* ptr = (LoginReq*)msg;
			const int byte_size = ptr->ByteSize();
			char *buff = new char[byte_size];
			ptr->SerializeToArray(buff, byte_size);
			req.head.len = byte_size + MSG_ID_SIZE;
			req.body = new char[byte_size];
			memcpy(req.body, buff, byte_size);

		}break;
		default:
		{
			delete msg;
			msg = nullptr;
			CCLOG("error case:%d :%d", type, id);
			return -1;
		}break;
	}

	//send
	this->send_msg(req);
	delete msg;
	msg = nullptr;
	LoginRsp rsp;
	rsp.set_result(1);
	//test
	if (true)
	{
		send_msg_to_lua(MSG_TYPE_ACCESS, MSG_ID_REGIST_RESP, (void*)&rsp);
	}
	
}

//合成数据
Request HNetworkManager::makeReq(Message* msg)
{
	Request req;
	return req;
}

//request数据转化相对应的字节流
//消息类别（8），消息长度（32），消息标识（32），消息内容（char[]）
char* HNetworkManager::convert_request_to_bytes(Request req) {
	int total_len = req.get_total_len();
	
	char *data = new char[total_len];
	memset(data, 0, total_len);
	
	//转换网络字节序列
	MsgHead m;
	m.len = htons(req.head.len);
	m.type = htons(req.head.type);
	//拷贝消息头
	memcpy(data, &(m), MSG_TYPE_SIZE + MSG_BODY_SIZE);

	//拷贝消息标识
	char tmp_id[MSG_ID_SIZE];
	memset(tmp_id, 0, MSG_ID_SIZE);
	struct t{
		int id;
	}t;
	t.id = htonl(req.id);
	memcpy(data + MSG_TYPE_SIZE + MSG_BODY_SIZE, &t, MSG_ID_SIZE);

	//拷贝消息体
	memcpy(data + MSG_TYPE_SIZE + MSG_ID_SIZE + MSG_BODY_SIZE, req.body, req.head.len);
	return data;
}


//解析收到的网络数据
Response* HNetworkManager::decode_recv_msg() 
{
	//收到的数据 长度收完才能继续
	if (m_recv_pos <= MSG_HEAD_SIZE)
	{
		return NULL;
	}
	//获取收到字节流的长度
	MsgHead msg_head = get_recv_msg_head();
	int bodylen = msg_head.len;
	if (m_recv_pos >= bodylen + MSG_HEAD_SIZE)
	{
		Response* resp = new Response;
		resp->head.len = bodylen;
		resp->head.type = msg_head.type;
		resp->body = new char[bodylen];
		
		//消息体
		memcpy(resp->body, m_recv_buf + MSG_HEAD_SIZE, bodylen);
		//消息标识
		memcpy(&resp->id, resp->body, MSG_ID_SIZE);

		resp->id = ntohl(resp->id);

		int remains = m_recv_pos - (bodylen + MSG_HEAD_SIZE);
		if (remains > 0) 
		{

			char* remain_buf = new char[remains];
			memcpy(remain_buf, &m_recv_buf[bodylen + MSG_HEAD_SIZE], remains);
			memset(m_recv_buf, 0, MAX_BUF_SIZE);
			memcpy(m_recv_buf, remain_buf, remains);
			m_recv_pos = remains;

			delete[]remain_buf;
		}
		else if (remains == 0) 
		{
			m_recv_pos = 0;
		}
		return resp;
	}

	return NULL;
}

//获取收到字节流的总长度
MsgHead HNetworkManager::get_recv_msg_head()
{
	MsgHead m;
	const int HEAD_SIZE = MSG_TYPE_SIZE + MSG_BODY_SIZE;
	char buf[HEAD_SIZE];
	
	//获取消息头
	memcpy(buf, mInstance->m_recv_buf, HEAD_SIZE);
	memcpy(&m, buf, HEAD_SIZE);

	//转换网络字节序列
	m.len = ntohs(m.len);
	m.type = ntohs(m.type);

	return m;
}



//处理收到的数据
void HNetworkManager::dispatch(Response* respone)
{
	CCLOG("[dispatch start]");
	
	//switch(respone->head.type)

	//消息id
	switch (respone->id)
	{
	case MSG_ID_REGIST_RESP:
	{
		const int body_size = respone->head.len - MSG_ID_SIZE;
		char *tmp = new char[body_size];
		memset(tmp, 0, body_size);
		memcpy(tmp, respone->body + MSG_ID_SIZE, body_size);
		LoginRsp rsp;
		rsp.ParseFromArray(tmp, body_size);

		CCLOG("||||||||||[recv %d]||||||||||\n%s||||||||||[recv %d]||||||||||\n", 
			 respone->id, rsp.DebugString().c_str(), respone->id);
	}break;
	case MSG_ID_LOGIN_RESP://登录返回
	{

	}break;
	default:
		break;
	}
	CCLOG("[dispatch end]");
}

//c++的网络数据-->lua
void HNetworkManager::send_msg_to_lua(const int&type, const int& id, void*msg)
{
	CCLOG("HNetworkManager::send_msg_to_lua:type%d id:%d", type, id);

	auto engine = LuaEngine::getInstance();
	LuaStack* stack = engine->getLuaStack();
	lua_State* L = stack->getLuaState();
	
	//获取lua接收数据的文件
	int ret = engine->executeScriptFile("src/global/global.lua");
	if (ret > 0)
	{
		CCLOG("load lua file error!! ret:%d\n", ret);
		return;
	}
	int traceback = 0;
	lua_getglobal(L, "__G__TRACKBACK__");
	//获取lua中接收数据的table
	lua_getglobal(L, "network_manager"); 
	if (!lua_istable(L, -1))
	{
		// error
		CCLOG(" error :It's not a table!!");
		return;
	}
	//lua中接收数据的函数
	lua_getfield(L, -1, "recv_msg");
	if (!lua_isfunction(L, -1))
	{
		// error
		CCLOG(" error :It's not a function!!");
		return;
	}
	//数据入栈
	lua_pushnumber(L, (int)type);
	lua_pushnumber(L, (int)id);
	lua_pushlightuserdata(L, msg);
	//调用传送数据函数recv_msg
	int error = lua_pcall(L, 3, 1, traceback);                  /* L: ... [G] ret */
	if (error)
	{
		if (traceback == 0)
		{
			CCLOG("[LUA ERROR] %s", lua_tostring(L, -1));        /* L: ... error */
			lua_pop(L, 1); // remove error message from stack
		}
		else                                                     /* L: ... G error */
		{
			lua_pop(L, 2); // remove __G__TRACKBACK__ and error message from stack
		}
		return ;
	}
	CCLOG("test:send");
}