#pragma once

#include "cocos2d.h"
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
#include <windows.h>
#include <stdlib.h>
#pragma comment(lib, "Ws2_32.lib")
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_IOS || CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
typedef unsigned int          SOCKET;
#define INVALID_SOCKET  (SOCKET)(~0)
#define SOCKET_ERROR            (-1)
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <netdb.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/syscall.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <arpa/inet.h>
#endif

using namespace std;

enum socket_status
{
	H_NET_CONNECTED = 1,
	H_NET_CONNECTING = 2,
	H_NET_DIS_CONNECT = 3,	//主动关闭
	H_NET_CONNECT_FAIL = 4,	//连接失败
	H_NET_CONNECT_TIMEOUT = 5,	//连接超时
	H_NET_RECV_TIMEOUT = 6,	//接收超时
	H_NET_DIS_CONNECT_FORBG = 7,	//进入后台关闭
	H_NET_SHAKEHAND_FAIL = 8,	//握手失败
	H_NET_IO_CLOSE = 0,	//IO关闭
	H_NET_IO_ERROR = -1,		//IO错误
};

class HSocket
{
public:
	HSocket();
	~HSocket();
public:

	//创建socket
	bool init(const string& host, const int& port);
	//connect
	int connect();
	void close();
	int  read(char* _buff, int _len);
	int  write(char* _buff, int _len);

	SOCKET m_socket;
private:
	bool is_ipv6(const string& domainStr = "www.baidu.com");
	struct sockaddr* getSockaddr() const;
	int get_sock_len();
private:
	string m_ip;
	int m_port;

	struct sockaddr_in m_addr_v4;
	bool m_b_ipv6;
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
	struct sockaddr_in6 m_addr_v6;
#endif

};

