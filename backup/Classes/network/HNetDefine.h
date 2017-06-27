//网络相关宏
#pragma once

//超时
const int NET_TIMEOUT = 8;

//MsgType  MsgLen  MsgId 
//收到数据起码要大于MsgType+MsgLen个字节
const int MSG_HEAD_SIZE = 4;
const int MSG_TYPE_SIZE = 2;//消息类型
const int MSG_BODY_SIZE = 2;//消息长度 字节数
const int MSG_ID_SIZE = 4;//标识位32

const int MAX_MSG_SEND_SIZE = 1024;

/** 消息类型定义  **/
const short MSG_TYPE_ACCESS = 0x01;
const short MSG_TYPE_HALL = 0x02;
const short MSG_TYPE_ROOM = 0x03;
const short MSG_TYPE_GAME = 0x04;
const short MSG_TYPE_CHAT = 0x05;
const short MSG_TYPE_HEART = 0x06;


/*登录相关定义*/
const int MSG_ID_REGIST_REQ = 10;//注册请求
const int MSG_ID_REGIST_RESP = 11;//注册响应
const int MSG_ID_LOGIN_REQ = 20;//登录请求
const int MSG_ID_LOGIN_RESP = 21;//登录响应

//消息头
struct MsgHead
{
	short type;
	short len;
};


struct Request {
	MsgHead head;
	int id;//消息标识(32)
	char* body;//消息体(char[])

	//获取字节流长度
	int get_total_len()
	{
		//标识位 4字节 消息长度 4字节
		return head.len + MSG_TYPE_SIZE + MSG_BODY_SIZE;
	}
};

struct Response {
	MsgHead head;
	int id;//消息标识(32)
	char* body;//消息体(char[])

	//获取字节流长度
	int get_total_len()
	{
		//标识位 4字节 消息长度 4字节
		return head.len + MSG_TYPE_SIZE + MSG_BODY_SIZE;
	}
};