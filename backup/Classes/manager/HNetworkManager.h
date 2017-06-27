//网络模块管理
#pragma once

#include "network/HNetDefine.h"



class HSocket;
class Message;
class LoginReq;
class HNetworkManager
{
public:
	static HNetworkManager* Instance();
	HNetworkManager();
	~HNetworkManager();
public:
	//创建一个线程 发送网络数据
	void start_thread_send();
	//创建一个线程 发送网络数据
	void start_thread_recv();
	//创建一个线程 发送心跳数据
	void start_thread_heart();
	//开始连接socket
	void start();
	//终止网络处理
	void end();
	
public:
	//发送数据
	int send_msg(Request req);
	//发送数据
	int send_msg(void* msg, const int& type, const int& id);
	//发送数据到lua
	void send_msg_to_lua(const int&type, const int& id, void*msg);

private:

	//线程 回调函数 接收网络数据
	void* HNetworkManager::thread_func_recv();

	//线程 回调函数 心跳网络数据
	void* HNetworkManager::thread_func_heart();

	//处理收到的数据
	void dispatch(Response* respone);

private:
	//request数据转化相对应的字节流
	char* convert_request_to_bytes(Request req);

	//解析收到的网络数据
	Response* decode_recv_msg();
	//获取msghead
	MsgHead get_recv_msg_head();
	//合成数据
	Request makeReq(Message* msg);
private:
	HSocket* m_socket_send;
	HSocket* m_socket_heart;

	bool m_b_stop_thread_recv;//线程控制变量 recv
	bool m_b_stop_thread_heart;//线程控制变量 heart

	//vector <Request> m_v_request;//已发送网络数据
	//vector <Response> m_v_response;//已接收网络数据
	
	static const int MAX_BUF_SIZE = 1024 * 64;
	static const int MAX_RECV_SIZE = 1024;

	char m_recv_buf[MAX_RECV_SIZE];
	int m_recv_pos;
};

