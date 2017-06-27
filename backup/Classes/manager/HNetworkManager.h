//����ģ�����
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
	//����һ���߳� ������������
	void start_thread_send();
	//����һ���߳� ������������
	void start_thread_recv();
	//����һ���߳� ������������
	void start_thread_heart();
	//��ʼ����socket
	void start();
	//��ֹ���紦��
	void end();
	
public:
	//��������
	int send_msg(Request req);
	//��������
	int send_msg(void* msg, const int& type, const int& id);
	//�������ݵ�lua
	void send_msg_to_lua(const int&type, const int& id, void*msg);

private:

	//�߳� �ص����� ������������
	void* HNetworkManager::thread_func_recv();

	//�߳� �ص����� ������������
	void* HNetworkManager::thread_func_heart();

	//�����յ�������
	void dispatch(Response* respone);

private:
	//request����ת�����Ӧ���ֽ���
	char* convert_request_to_bytes(Request req);

	//�����յ�����������
	Response* decode_recv_msg();
	//��ȡmsghead
	MsgHead get_recv_msg_head();
	//�ϳ�����
	Request makeReq(Message* msg);
private:
	HSocket* m_socket_send;
	HSocket* m_socket_heart;

	bool m_b_stop_thread_recv;//�߳̿��Ʊ��� recv
	bool m_b_stop_thread_heart;//�߳̿��Ʊ��� heart

	//vector <Request> m_v_request;//�ѷ�����������
	//vector <Response> m_v_response;//�ѽ�����������
	
	static const int MAX_BUF_SIZE = 1024 * 64;
	static const int MAX_RECV_SIZE = 1024;

	char m_recv_buf[MAX_RECV_SIZE];
	int m_recv_pos;
};

