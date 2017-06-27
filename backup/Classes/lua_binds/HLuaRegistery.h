#pragma once
//#pragma execution_character_set("utf-8")


#include "lua_binds/lua_my_class_auto.hpp"


inline int register_my_module_lua(lua_State* L)
{
	

	register_all_my_class(L);
	return 0;
}