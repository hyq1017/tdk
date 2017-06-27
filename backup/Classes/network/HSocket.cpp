#include "network/HSocket.h"
#include "log/HLog.h"

HSocket::HSocket():
m_socket(INVALID_SOCKET)
{

}

HSocket::~HSocket()
{
}

bool HSocket::init(const string& host, const int & port)
{
	m_ip = host;
	m_port = port;

#if( CC_TARGET_PLATFORM == CC_PLATFORM_WIN32 )
	static bool bStartup = false;
	if (!bStartup)
	{
		bStartup = true;
		WSADATA wsaData;
		WSAStartup(MAKEWORD(2, 0), &wsaData);
	}
#endif


#if( CC_TARGET_PLATFORM == CC_PLATFORM_IOS )
	if (m_b_ipv6)
	{
		bzero(&m_addr_v6, sizeof(addr_v6));
		m_addr_v6.sin6_family = AF_INET6;
		m_addr_v6.sin6_port = htons(port);
		inet_pton(AF_INET6, ip, &m_addr_v6.sin6_addr);
	}
	else
	{
		m_addr_v4.sin_family = AF_INET;
		m_addr_v4.sin_addr.s_addr = inet_addr(ip);
		m_addr_v4.sin_port = htons(port);
		memset(addr_v4.sin_zero, 0, 8);
	}
#else
	m_addr_v4.sin_family = AF_INET;
	m_addr_v4.sin_addr.s_addr = inet_addr(m_ip.c_str());
	m_addr_v4.sin_port = htons(port);
	memset(m_addr_v4.sin_zero, 0, 8);
#endif


	
	this->close();
	m_b_ipv6 = is_ipv6();
	m_socket = socket((m_b_ipv6 ? AF_INET6 : AF_INET), SOCK_STREAM, IPPROTO_TCP);

	if (m_socket == INVALID_SOCKET)
	{
		HLog::log("create socket failed");
		return false;
	}

#if( CC_TARGET_PLATFORM == CC_PLATFORM_WIN32 )
	unsigned long ul = 1;
	int nRet = ioctlsocket(m_socket, FIONBIO, (unsigned long*)&ul);
#elif( CC_TARGET_PLATFORM == CC_PLATFORM_IOS || CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID )
	int nFlags = fcntl(m_socket, F_GETFL, 0);
	int nRet = fcntl(m_socket, F_SETFL, nFlags | O_NONBLOCK);
#endif
	if (nRet == SOCKET_ERROR)
	{
		HLog::log("set unblocking failed");
		this->close();
		return false;
	}

	int nNoDelay = 1;
	if (setsockopt(m_socket, IPPROTO_TCP, TCP_NODELAY, (char*)&nNoDelay, sizeof(nNoDelay)) == SOCKET_ERROR)
	{
		HLog::log("set nodelay failed");
		this->close();
		return false;
	}


	return true;
}

void HSocket::close()
{
	if (m_socket != INVALID_SOCKET)
	{
#if( CC_TARGET_PLATFORM == CC_PLATFORM_WIN32 )
		closesocket(m_socket);
#elif( CC_TARGET_PLATFORM == CC_PLATFORM_IOS || CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID )
		close(m_socket);
#endif
		m_socket = INVALID_SOCKET;
	}
}

//connect
int HSocket::connect()
{

	if (m_socket == INVALID_SOCKET)
	{
		if (!this->init(m_ip, m_port)) 
		{
			return -1;
		}
			
	}

	int nRet = ::connect(m_socket, getSockaddr(), get_sock_len());
	CCLOG("HSocket::connect:%d", nRet);
	if (nRet == 0)
	{
		return nRet;
	}

#if( CC_TARGET_PLATFORM == CC_PLATFORM_WIN32 )
	int nError = WSAGetLastError();
	CCLOG("HSocket::connect:%d", nError);
	return nError == WSAEWOULDBLOCK;
#elif( CC_TARGET_PLATFORM == CC_PLATFORM_IOS || CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID )
	//CCLOG("HSocket::connect:%d", errno);
	return true;//(m_socket == SOCKET_ERROR && errno == EINPROGRESS);
#endif
}


int HSocket::read(char* _buff, int _len)
{
	if (m_socket == INVALID_SOCKET)
	{
		return H_NET_IO_ERROR;
	}
		
	return ::recv(m_socket, _buff, _len, 0);
}

int HSocket::write(char* _buff, int _len)
{
	if (m_socket == INVALID_SOCKET)
	{
		return H_NET_IO_ERROR;
	}
#if( CC_TARGET_PLATFORM == CC_PLATFORM_WIN32 || CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID )
	return ::send(m_socket, _buff, _len, 0);
#elif( CC_TARGET_PLATFORM == CC_PLATFORM_IOS )
	return ::send(m_socket, _buff, _len, SO_NOSIGPIPE);
#endif
}

bool HSocket::is_ipv6(const string& domainStr)
{
	bool isIPV6Net = false;
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
	struct addrinfo *result = nullptr, *curr;
	int ret = getaddrinfo(domainStr.c_str(), nullptr, nullptr, &result);
	if (ret == 0)
	{
		for (curr = result; curr != nullptr; curr = curr->ai_next)
		{
			switch (curr->ai_family)
			{
			case AF_INET6:
			{
				isIPV6Net = true;
				break;
			}
			default:
				break;
			}
		}
	}
	if (result)
	{
		freeaddrinfo(result);
	}
#endif
	return isIPV6Net;
}

struct sockaddr* HSocket::getSockaddr() const
{
#if( CC_TARGET_PLATFORM == CC_PLATFORM_IOS )
	return m_b_ipv6 ? (struct sockaddr*)&m_addr_v6 : (struct sockaddr*)&m_addr_v4;
#else
	return (struct sockaddr*)&m_addr_v4;
#endif
}

int HSocket::get_sock_len()
{
#if( CC_TARGET_PLATFORM == CC_PLATFORM_IOS )
	return m_b_ipv6 ? sizeof(sockaddr_in6) : sizeof(sockaddr_in);
#else
	return sizeof(sockaddr_in);
#endif
}


