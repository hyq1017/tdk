#pragma once
/*
c++µ÷ÓÃlua
*/

#include <string>

extern "C"
{
	#include "lua.h"

}


using namespace std;
class H_c_call_lua
{

public:

	H_c_call_lua(void);
	~H_c_call_lua(void);

	//Singleton
	static H_c_call_lua* Instance();

	//init lua_State 
	bool init();

	//notify messages to Lua
	void NotifyLua(const string &msgBoby);

	
};

