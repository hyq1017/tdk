#pragma once
#include <string>
using namespace std;
//log ��������
struct HStruct_Log
{
	enum 
	{
		T_DEFAULT = 1,
		T_HALL,
		T_GAME,
		T_NET,
	};
	int t;//log type 
	string content;//��Ҫ��ӡ������
};
