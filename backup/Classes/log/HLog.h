#pragma once
//log ��ӡ
//��ӡģ�黯 �����ӡ �ļ���ӡ
#include "common/HDefine.h"



class HLog
{
public:
	static HLog* Instance();
	//��ӡ����
	static void log(const char * content);
	//��ӡ���� ����t ����  ��־���� paraΪstruct�����պ���־��չ
	static void log(const HStruct_Log& para);
	//��ӡ����
	static void log(const int& type, const char * content);
	////��ӡsocket send��־
	//static void log_socket_send(const int& msgid, const char * content);
	////��ӡsocket recv��־
	//static void log_socket_recv(const int& msgid, const char * content);
	HLog();
	~HLog();

private:

};
