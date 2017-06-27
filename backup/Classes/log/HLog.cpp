#include "log/HLog.h"
#include "cocos2d.h"


static HLog* mInstance;

HLog* HLog::Instance() {
	if (mInstance == nullptr) {
		mInstance = new HLog;

	}
	return mInstance;
}



HLog::HLog()
{
}

HLog::~HLog()
{
}

//打印日志
void HLog::log(const char * content)
{
	HStruct_Log l;
	l.t = l.T_DEFAULT;
	l.content = content;
	HLog::log(l);
}

//打印日志
void HLog::log(const HStruct_Log& para)
{
	int type = para.t;
	string content = para.content;
	CCLOG(content.c_str());
}
void HLog::log(const int& type, const char * content)
{
	HStruct_Log l;
	l.t = type;
	l.content = content;
	HLog::log(l);
}

//void HLog::log_socket_send(const int& msgid, const char * content)
//{
//
//}
//
//void HLog::log_socket_recv(const int& msgid, const char * content)
//{
//
//}