#pragma once

#include <string>
using namespace std;

class HCommon
{
public:

public:
	HCommon() {}
	~HCommon() {}
	//toast ��ʾ �Զ� ��ӵ� current scene�ϣ���ʾ��remove
	static void toast(const string& content);
	//�����ű�
	static void reload_script();
};

