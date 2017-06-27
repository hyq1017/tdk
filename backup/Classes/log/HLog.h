#pragma once
//log 打印
//打印模块化 缓存打印 文件打印
#include "common/HDefine.h"



class HLog
{
public:
	static HLog* Instance();
	//打印日至
	static void log(const char * content);
	//打印日至 类型t 控制  日志开关 para为struct方便日后日志扩展
	static void log(const HStruct_Log& para);
	//打印日至
	static void log(const int& type, const char * content);
	////打印socket send日志
	//static void log_socket_send(const int& msgid, const char * content);
	////打印socket recv日志
	//static void log_socket_recv(const int& msgid, const char * content);
	HLog();
	~HLog();

private:

};
