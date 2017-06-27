//������غ�
#pragma once

//��ʱ
const int NET_TIMEOUT = 8;

//MsgType  MsgLen  MsgId 
//�յ���������Ҫ����MsgType+MsgLen���ֽ�
const int MSG_HEAD_SIZE = 4;
const int MSG_TYPE_SIZE = 2;//��Ϣ����
const int MSG_BODY_SIZE = 2;//��Ϣ���� �ֽ���
const int MSG_ID_SIZE = 4;//��ʶλ32

const int MAX_MSG_SEND_SIZE = 1024;

/** ��Ϣ���Ͷ���  **/
const short MSG_TYPE_ACCESS = 0x01;
const short MSG_TYPE_HALL = 0x02;
const short MSG_TYPE_ROOM = 0x03;
const short MSG_TYPE_GAME = 0x04;
const short MSG_TYPE_CHAT = 0x05;
const short MSG_TYPE_HEART = 0x06;


/*��¼��ض���*/
const int MSG_ID_REGIST_REQ = 10;//ע������
const int MSG_ID_REGIST_RESP = 11;//ע����Ӧ
const int MSG_ID_LOGIN_REQ = 20;//��¼����
const int MSG_ID_LOGIN_RESP = 21;//��¼��Ӧ

//��Ϣͷ
struct MsgHead
{
	short type;
	short len;
};


struct Request {
	MsgHead head;
	int id;//��Ϣ��ʶ(32)
	char* body;//��Ϣ��(char[])

	//��ȡ�ֽ�������
	int get_total_len()
	{
		//��ʶλ 4�ֽ� ��Ϣ���� 4�ֽ�
		return head.len + MSG_TYPE_SIZE + MSG_BODY_SIZE;
	}
};

struct Response {
	MsgHead head;
	int id;//��Ϣ��ʶ(32)
	char* body;//��Ϣ��(char[])

	//��ȡ�ֽ�������
	int get_total_len()
	{
		//��ʶλ 4�ֽ� ��Ϣ���� 4�ֽ�
		return head.len + MSG_TYPE_SIZE + MSG_BODY_SIZE;
	}
};