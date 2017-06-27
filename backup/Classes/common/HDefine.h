#pragma once
#include <string>
using namespace std;
//log 参数类型
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
	string content;//需要打印的内容
};
