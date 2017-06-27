#include "lua_binds/lua_my_class_auto.hpp"
#include "cocos2d.h"
#include "lua_binds/custom_bind.h"
#include "scripting/lua-bindings/manual/tolua_fix.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"

int lua_my_class_LoginReq_username(lua_State* tolua_S)
{
	int argc = 0;
	LoginReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "LoginReq", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (LoginReq*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_LoginReq_username'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_LoginReq_username'", nullptr);
			return 0;
		}
		const std::string& ret = cobj->username();
		lua_pushlstring(tolua_S, ret.c_str(), ret.length());
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LoginReq:username", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_LoginReq_username'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_LoginReq_set_username(lua_State* tolua_S)
{
	int argc = 0;
	LoginReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "LoginReq", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (LoginReq*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_LoginReq_set_username'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		std::string arg0;

		ok &= luaval_to_std_string(tolua_S, 2, &arg0, "LoginReq:set_username");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_LoginReq_set_username'", nullptr);
			return 0;
		}
		cobj->set_username(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LoginReq:set_username", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_LoginReq_set_username'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_LoginReq_set_opt2(lua_State* tolua_S)
{
	int argc = 0;
	LoginReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "LoginReq", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (LoginReq*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_LoginReq_set_opt2'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		std::string arg0;

		ok &= luaval_to_std_string(tolua_S, 2, &arg0, "LoginReq:set_opt2");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_LoginReq_set_opt2'", nullptr);
			return 0;
		}
		cobj->set_opt2(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LoginReq:set_opt2", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_LoginReq_set_opt2'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_LoginReq_ByteSize(lua_State* tolua_S)
{
	int argc = 0;
	LoginReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "LoginReq", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (LoginReq*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_LoginReq_ByteSize'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_LoginReq_ByteSize'", nullptr);
			return 0;
		}
		int ret = cobj->ByteSize();
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LoginReq:ByteSize", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_LoginReq_ByteSize'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_LoginReq_set_opt1(lua_State* tolua_S)
{
	int argc = 0;
	LoginReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "LoginReq", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (LoginReq*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_LoginReq_set_opt1'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		int arg0;

		ok &= luaval_to_int32(tolua_S, 2, (int *)&arg0, "LoginReq:set_opt1");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_LoginReq_set_opt1'", nullptr);
			return 0;
		}
		cobj->set_opt1(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LoginReq:set_opt1", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_LoginReq_set_opt1'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_LoginReq_opt1(lua_State* tolua_S)
{
	int argc = 0;
	LoginReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "LoginReq", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (LoginReq*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_LoginReq_opt1'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_LoginReq_opt1'", nullptr);
			return 0;
		}
		int ret = cobj->opt1();
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LoginReq:opt1", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_LoginReq_opt1'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_LoginReq_password(lua_State* tolua_S)
{
	int argc = 0;
	LoginReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "LoginReq", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (LoginReq*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_LoginReq_password'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_LoginReq_password'", nullptr);
			return 0;
		}
		const std::string& ret = cobj->password();
		lua_pushlstring(tolua_S, ret.c_str(), ret.length());
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LoginReq:password", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_LoginReq_password'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_LoginReq_set_password(lua_State* tolua_S)
{
	int argc = 0;
	LoginReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "LoginReq", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (LoginReq*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_LoginReq_set_password'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		std::string arg0;

		ok &= luaval_to_std_string(tolua_S, 2, &arg0, "LoginReq:set_password");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_LoginReq_set_password'", nullptr);
			return 0;
		}
		cobj->set_password(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LoginReq:set_password", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_LoginReq_set_password'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_LoginReq_opt2(lua_State* tolua_S)
{
	int argc = 0;
	LoginReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "LoginReq", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (LoginReq*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_LoginReq_opt2'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_LoginReq_opt2'", nullptr);
			return 0;
		}
		const std::string& ret = cobj->opt2();
		lua_pushlstring(tolua_S, ret.c_str(), ret.length());
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LoginReq:opt2", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_LoginReq_opt2'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_LoginReq_constructor(lua_State* tolua_S)
{
	int argc = 0;
	LoginReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif



	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_LoginReq_constructor'", nullptr);
			return 0;
		}
		cobj = new LoginReq();
		tolua_pushusertype(tolua_S, (void*)cobj, "LoginReq");
		tolua_register_gc(tolua_S, lua_gettop(tolua_S));
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LoginReq:LoginReq", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_LoginReq_constructor'.", &tolua_err);
#endif

	return 0;
}

static int lua_my_class_LoginReq_finalize(lua_State* tolua_S)
{
	printf("luabindings: finalizing LUA object (LoginReq)");
	return 0;
}

int lua_register_my_class_LoginReq(lua_State* tolua_S)
{
	tolua_usertype(tolua_S, "LoginReq");
	tolua_cclass(tolua_S, "LoginReq", "LoginReq", "hh.Message", nullptr);

	tolua_beginmodule(tolua_S, "LoginReq");
	tolua_function(tolua_S, "new", lua_my_class_LoginReq_constructor);
	tolua_function(tolua_S, "username", lua_my_class_LoginReq_username);
	tolua_function(tolua_S, "set_username", lua_my_class_LoginReq_set_username);
	tolua_function(tolua_S, "set_opt2", lua_my_class_LoginReq_set_opt2);
	tolua_function(tolua_S, "ByteSize", lua_my_class_LoginReq_ByteSize);
	tolua_function(tolua_S, "set_opt1", lua_my_class_LoginReq_set_opt1);
	tolua_function(tolua_S, "opt1", lua_my_class_LoginReq_opt1);
	tolua_function(tolua_S, "password", lua_my_class_LoginReq_password);
	tolua_function(tolua_S, "set_password", lua_my_class_LoginReq_set_password);
	tolua_function(tolua_S, "opt2", lua_my_class_LoginReq_opt2);
	tolua_endmodule(tolua_S);
	std::string typeName = typeid(LoginReq).name();
	g_luaType[typeName] = "LoginReq";
	g_typeCast["LoginReq"] = "LoginReq";
	return 1;
}

int lua_my_class_LoginRsp_set_opt2(lua_State* tolua_S)
{
	int argc = 0;
	LoginRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "LoginRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (LoginRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_LoginRsp_set_opt2'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		std::string arg0;

		ok &= luaval_to_std_string(tolua_S, 2, &arg0, "LoginRsp:set_opt2");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_LoginRsp_set_opt2'", nullptr);
			return 0;
		}
		cobj->set_opt2(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LoginRsp:set_opt2", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_LoginRsp_set_opt2'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_LoginRsp_ByteSize(lua_State* tolua_S)
{
	int argc = 0;
	LoginRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "LoginRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (LoginRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_LoginRsp_ByteSize'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_LoginRsp_ByteSize'", nullptr);
			return 0;
		}
		int ret = cobj->ByteSize();
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LoginRsp:ByteSize", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_LoginRsp_ByteSize'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_LoginRsp_set_result(lua_State* tolua_S)
{
	int argc = 0;
	LoginRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "LoginRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (LoginRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_LoginRsp_set_result'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		int arg0;

		ok &= luaval_to_int32(tolua_S, 2, (int *)&arg0, "LoginRsp:set_result");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_LoginRsp_set_result'", nullptr);
			return 0;
		}
		cobj->set_result(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LoginRsp:set_result", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_LoginRsp_set_result'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_LoginRsp_set_fail_result(lua_State* tolua_S)
{
	int argc = 0;
	LoginRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "LoginRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (LoginRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_LoginRsp_set_fail_result'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		std::string arg0;

		ok &= luaval_to_std_string(tolua_S, 2, &arg0, "LoginRsp:set_fail_result");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_LoginRsp_set_fail_result'", nullptr);
			return 0;
		}
		cobj->set_fail_result(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LoginRsp:set_fail_result", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_LoginRsp_set_fail_result'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_LoginRsp_result(lua_State* tolua_S)
{
	int argc = 0;
	LoginRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "LoginRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (LoginRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_LoginRsp_result'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_LoginRsp_result'", nullptr);
			return 0;
		}
		int ret = cobj->result();
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LoginRsp:result", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_LoginRsp_result'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_LoginRsp_fail_result(lua_State* tolua_S)
{
	int argc = 0;
	LoginRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "LoginRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (LoginRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_LoginRsp_fail_result'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_LoginRsp_fail_result'", nullptr);
			return 0;
		}
		const std::string& ret = cobj->fail_result();
		lua_pushlstring(tolua_S, ret.c_str(), ret.length());
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LoginRsp:fail_result", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_LoginRsp_fail_result'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_LoginRsp_opt2(lua_State* tolua_S)
{
	int argc = 0;
	LoginRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "LoginRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (LoginRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_LoginRsp_opt2'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_LoginRsp_opt2'", nullptr);
			return 0;
		}
		const std::string& ret = cobj->opt2();
		lua_pushlstring(tolua_S, ret.c_str(), ret.length());
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LoginRsp:opt2", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_LoginRsp_opt2'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_LoginRsp_constructor(lua_State* tolua_S)
{
	int argc = 0;
	LoginRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif



	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_LoginRsp_constructor'", nullptr);
			return 0;
		}
		cobj = new LoginRsp();
		tolua_pushusertype(tolua_S, (void*)cobj, "LoginRsp");
		tolua_register_gc(tolua_S, lua_gettop(tolua_S));
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LoginRsp:LoginRsp", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_LoginRsp_constructor'.", &tolua_err);
#endif

	return 0;
}

static int lua_my_class_LoginRsp_finalize(lua_State* tolua_S)
{
	printf("luabindings: finalizing LUA object (LoginRsp)");
	return 0;
}

int lua_register_my_class_LoginRsp(lua_State* tolua_S)
{
	tolua_usertype(tolua_S, "LoginRsp");
	tolua_cclass(tolua_S, "LoginRsp", "LoginRsp", "hh.Message", nullptr);

	tolua_beginmodule(tolua_S, "LoginRsp");
	tolua_function(tolua_S, "new", lua_my_class_LoginRsp_constructor);
	tolua_function(tolua_S, "set_opt2", lua_my_class_LoginRsp_set_opt2);
	tolua_function(tolua_S, "ByteSize", lua_my_class_LoginRsp_ByteSize);
	tolua_function(tolua_S, "set_result", lua_my_class_LoginRsp_set_result);
	tolua_function(tolua_S, "set_fail_result", lua_my_class_LoginRsp_set_fail_result);
	tolua_function(tolua_S, "result", lua_my_class_LoginRsp_result);
	tolua_function(tolua_S, "fail_result", lua_my_class_LoginRsp_fail_result);
	tolua_function(tolua_S, "opt2", lua_my_class_LoginRsp_opt2);
	tolua_endmodule(tolua_S);
	std::string typeName = typeid(LoginRsp).name();
	g_luaType[typeName] = "LoginRsp";
	g_typeCast["LoginRsp"] = "LoginRsp";
	return 1;
}

int lua_my_class_UserInfo_set_user_grade(lua_State* tolua_S)
{
	int argc = 0;
	UserInfo* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "UserInfo", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (UserInfo*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_UserInfo_set_user_grade'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		int arg0;

		ok &= luaval_to_int32(tolua_S, 2, (int *)&arg0, "UserInfo:set_user_grade");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_UserInfo_set_user_grade'", nullptr);
			return 0;
		}
		cobj->set_user_grade(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "UserInfo:set_user_grade", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_UserInfo_set_user_grade'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_UserInfo_gold_count(lua_State* tolua_S)
{
	int argc = 0;
	UserInfo* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "UserInfo", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (UserInfo*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_UserInfo_gold_count'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_UserInfo_gold_count'", nullptr);
			return 0;
		}
		int ret = cobj->gold_count();
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "UserInfo:gold_count", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_UserInfo_gold_count'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_UserInfo_set_opt2(lua_State* tolua_S)
{
	int argc = 0;
	UserInfo* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "UserInfo", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (UserInfo*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_UserInfo_set_opt2'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		std::string arg0;

		ok &= luaval_to_std_string(tolua_S, 2, &arg0, "UserInfo:set_opt2");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_UserInfo_set_opt2'", nullptr);
			return 0;
		}
		cobj->set_opt2(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "UserInfo:set_opt2", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_UserInfo_set_opt2'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_UserInfo_ByteSize(lua_State* tolua_S)
{
	int argc = 0;
	UserInfo* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "UserInfo", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (UserInfo*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_UserInfo_ByteSize'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_UserInfo_ByteSize'", nullptr);
			return 0;
		}
		int ret = cobj->ByteSize();
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "UserInfo:ByteSize", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_UserInfo_ByteSize'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_UserInfo_set_opt1(lua_State* tolua_S)
{
	int argc = 0;
	UserInfo* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "UserInfo", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (UserInfo*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_UserInfo_set_opt1'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		std::string arg0;

		ok &= luaval_to_std_string(tolua_S, 2, &arg0, "UserInfo:set_opt1");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_UserInfo_set_opt1'", nullptr);
			return 0;
		}
		cobj->set_opt1(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "UserInfo:set_opt1", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_UserInfo_set_opt1'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_UserInfo_user_type(lua_State* tolua_S)
{
	int argc = 0;
	UserInfo* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "UserInfo", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (UserInfo*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_UserInfo_user_type'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_UserInfo_user_type'", nullptr);
			return 0;
		}
		int ret = cobj->user_type();
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "UserInfo:user_type", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_UserInfo_user_type'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_UserInfo_set_user_type(lua_State* tolua_S)
{
	int argc = 0;
	UserInfo* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "UserInfo", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (UserInfo*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_UserInfo_set_user_type'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		int arg0;

		ok &= luaval_to_int32(tolua_S, 2, (int *)&arg0, "UserInfo:set_user_type");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_UserInfo_set_user_type'", nullptr);
			return 0;
		}
		cobj->set_user_type(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "UserInfo:set_user_type", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_UserInfo_set_user_type'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_UserInfo_user_grade(lua_State* tolua_S)
{
	int argc = 0;
	UserInfo* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "UserInfo", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (UserInfo*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_UserInfo_user_grade'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_UserInfo_user_grade'", nullptr);
			return 0;
		}
		int ret = cobj->user_grade();
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "UserInfo:user_grade", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_UserInfo_user_grade'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_UserInfo_opt2(lua_State* tolua_S)
{
	int argc = 0;
	UserInfo* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "UserInfo", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (UserInfo*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_UserInfo_opt2'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_UserInfo_opt2'", nullptr);
			return 0;
		}
		const std::string& ret = cobj->opt2();
		lua_pushlstring(tolua_S, ret.c_str(), ret.length());
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "UserInfo:opt2", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_UserInfo_opt2'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_UserInfo_opt1(lua_State* tolua_S)
{
	int argc = 0;
	UserInfo* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "UserInfo", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (UserInfo*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_UserInfo_opt1'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_UserInfo_opt1'", nullptr);
			return 0;
		}
		const std::string& ret = cobj->opt1();
		lua_pushlstring(tolua_S, ret.c_str(), ret.length());
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "UserInfo:opt1", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_UserInfo_opt1'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_UserInfo_set_gold_count(lua_State* tolua_S)
{
	int argc = 0;
	UserInfo* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "UserInfo", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (UserInfo*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_UserInfo_set_gold_count'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		int arg0;

		ok &= luaval_to_int32(tolua_S, 2, (int *)&arg0, "UserInfo:set_gold_count");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_UserInfo_set_gold_count'", nullptr);
			return 0;
		}
		cobj->set_gold_count(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "UserInfo:set_gold_count", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_UserInfo_set_gold_count'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_UserInfo_constructor(lua_State* tolua_S)
{
	int argc = 0;
	UserInfo* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif



	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_UserInfo_constructor'", nullptr);
			return 0;
		}
		cobj = new UserInfo();
		tolua_pushusertype(tolua_S, (void*)cobj, "UserInfo");
		tolua_register_gc(tolua_S, lua_gettop(tolua_S));
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "UserInfo:UserInfo", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_UserInfo_constructor'.", &tolua_err);
#endif

	return 0;
}

static int lua_my_class_UserInfo_finalize(lua_State* tolua_S)
{
	printf("luabindings: finalizing LUA object (UserInfo)");
	return 0;
}

int lua_register_my_class_UserInfo(lua_State* tolua_S)
{
	tolua_usertype(tolua_S, "UserInfo");
	tolua_cclass(tolua_S, "UserInfo", "UserInfo", "hh.Message", nullptr);

	tolua_beginmodule(tolua_S, "UserInfo");
	tolua_function(tolua_S, "new", lua_my_class_UserInfo_constructor);
	tolua_function(tolua_S, "set_user_grade", lua_my_class_UserInfo_set_user_grade);
	tolua_function(tolua_S, "gold_count", lua_my_class_UserInfo_gold_count);
	tolua_function(tolua_S, "set_opt2", lua_my_class_UserInfo_set_opt2);
	tolua_function(tolua_S, "ByteSize", lua_my_class_UserInfo_ByteSize);
	tolua_function(tolua_S, "set_opt1", lua_my_class_UserInfo_set_opt1);
	tolua_function(tolua_S, "user_type", lua_my_class_UserInfo_user_type);
	tolua_function(tolua_S, "set_user_type", lua_my_class_UserInfo_set_user_type);
	tolua_function(tolua_S, "user_grade", lua_my_class_UserInfo_user_grade);
	tolua_function(tolua_S, "opt2", lua_my_class_UserInfo_opt2);
	tolua_function(tolua_S, "opt1", lua_my_class_UserInfo_opt1);
	tolua_function(tolua_S, "set_gold_count", lua_my_class_UserInfo_set_gold_count);
	tolua_endmodule(tolua_S);
	std::string typeName = typeid(UserInfo).name();
	g_luaType[typeName] = "UserInfo";
	g_typeCast["UserInfo"] = "UserInfo";
	return 1;
}

int lua_my_class_HallBoard_board6(lua_State* tolua_S)
{
	int argc = 0;
	HallBoard* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "HallBoard", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (HallBoard*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_HallBoard_board6'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HallBoard_board6'", nullptr);
			return 0;
		}
		const std::string& ret = cobj->board6();
		lua_pushlstring(tolua_S, ret.c_str(), ret.length());
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "HallBoard:board6", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HallBoard_board6'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_HallBoard_board4(lua_State* tolua_S)
{
	int argc = 0;
	HallBoard* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "HallBoard", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (HallBoard*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_HallBoard_board4'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HallBoard_board4'", nullptr);
			return 0;
		}
		const std::string& ret = cobj->board4();
		lua_pushlstring(tolua_S, ret.c_str(), ret.length());
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "HallBoard:board4", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HallBoard_board4'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_HallBoard_board5(lua_State* tolua_S)
{
	int argc = 0;
	HallBoard* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "HallBoard", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (HallBoard*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_HallBoard_board5'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HallBoard_board5'", nullptr);
			return 0;
		}
		const std::string& ret = cobj->board5();
		lua_pushlstring(tolua_S, ret.c_str(), ret.length());
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "HallBoard:board5", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HallBoard_board5'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_HallBoard_board2(lua_State* tolua_S)
{
	int argc = 0;
	HallBoard* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "HallBoard", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (HallBoard*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_HallBoard_board2'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HallBoard_board2'", nullptr);
			return 0;
		}
		const std::string& ret = cobj->board2();
		lua_pushlstring(tolua_S, ret.c_str(), ret.length());
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "HallBoard:board2", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HallBoard_board2'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_HallBoard_board3(lua_State* tolua_S)
{
	int argc = 0;
	HallBoard* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "HallBoard", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (HallBoard*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_HallBoard_board3'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HallBoard_board3'", nullptr);
			return 0;
		}
		const std::string& ret = cobj->board3();
		lua_pushlstring(tolua_S, ret.c_str(), ret.length());
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "HallBoard:board3", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HallBoard_board3'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_HallBoard_board1(lua_State* tolua_S)
{
	int argc = 0;
	HallBoard* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "HallBoard", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (HallBoard*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_HallBoard_board1'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HallBoard_board1'", nullptr);
			return 0;
		}
		const std::string& ret = cobj->board1();
		lua_pushlstring(tolua_S, ret.c_str(), ret.length());
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "HallBoard:board1", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HallBoard_board1'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_HallBoard_ByteSize(lua_State* tolua_S)
{
	int argc = 0;
	HallBoard* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "HallBoard", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (HallBoard*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_HallBoard_ByteSize'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HallBoard_ByteSize'", nullptr);
			return 0;
		}
		int ret = cobj->ByteSize();
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "HallBoard:ByteSize", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HallBoard_ByteSize'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_HallBoard_set_board1(lua_State* tolua_S)
{
	int argc = 0;
	HallBoard* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "HallBoard", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (HallBoard*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_HallBoard_set_board1'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		std::string arg0;

		ok &= luaval_to_std_string(tolua_S, 2, &arg0, "HallBoard:set_board1");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HallBoard_set_board1'", nullptr);
			return 0;
		}
		cobj->set_board1(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "HallBoard:set_board1", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HallBoard_set_board1'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_HallBoard_set_board3(lua_State* tolua_S)
{
	int argc = 0;
	HallBoard* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "HallBoard", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (HallBoard*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_HallBoard_set_board3'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		std::string arg0;

		ok &= luaval_to_std_string(tolua_S, 2, &arg0, "HallBoard:set_board3");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HallBoard_set_board3'", nullptr);
			return 0;
		}
		cobj->set_board3(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "HallBoard:set_board3", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HallBoard_set_board3'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_HallBoard_set_board2(lua_State* tolua_S)
{
	int argc = 0;
	HallBoard* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "HallBoard", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (HallBoard*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_HallBoard_set_board2'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		std::string arg0;

		ok &= luaval_to_std_string(tolua_S, 2, &arg0, "HallBoard:set_board2");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HallBoard_set_board2'", nullptr);
			return 0;
		}
		cobj->set_board2(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "HallBoard:set_board2", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HallBoard_set_board2'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_HallBoard_set_board5(lua_State* tolua_S)
{
	int argc = 0;
	HallBoard* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "HallBoard", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (HallBoard*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_HallBoard_set_board5'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		std::string arg0;

		ok &= luaval_to_std_string(tolua_S, 2, &arg0, "HallBoard:set_board5");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HallBoard_set_board5'", nullptr);
			return 0;
		}
		cobj->set_board5(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "HallBoard:set_board5", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HallBoard_set_board5'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_HallBoard_set_board4(lua_State* tolua_S)
{
	int argc = 0;
	HallBoard* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "HallBoard", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (HallBoard*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_HallBoard_set_board4'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		std::string arg0;

		ok &= luaval_to_std_string(tolua_S, 2, &arg0, "HallBoard:set_board4");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HallBoard_set_board4'", nullptr);
			return 0;
		}
		cobj->set_board4(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "HallBoard:set_board4", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HallBoard_set_board4'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_HallBoard_set_board6(lua_State* tolua_S)
{
	int argc = 0;
	HallBoard* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "HallBoard", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (HallBoard*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_HallBoard_set_board6'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		std::string arg0;

		ok &= luaval_to_std_string(tolua_S, 2, &arg0, "HallBoard:set_board6");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HallBoard_set_board6'", nullptr);
			return 0;
		}
		cobj->set_board6(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "HallBoard:set_board6", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HallBoard_set_board6'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_HallBoard_constructor(lua_State* tolua_S)
{
	int argc = 0;
	HallBoard* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif



	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HallBoard_constructor'", nullptr);
			return 0;
		}
		cobj = new HallBoard();
		tolua_pushusertype(tolua_S, (void*)cobj, "HallBoard");
		tolua_register_gc(tolua_S, lua_gettop(tolua_S));
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "HallBoard:HallBoard", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HallBoard_constructor'.", &tolua_err);
#endif

	return 0;
}

static int lua_my_class_HallBoard_finalize(lua_State* tolua_S)
{
	printf("luabindings: finalizing LUA object (HallBoard)");
	return 0;
}

int lua_register_my_class_HallBoard(lua_State* tolua_S)
{
	tolua_usertype(tolua_S, "HallBoard");
	tolua_cclass(tolua_S, "HallBoard", "HallBoard", "hh.Message", nullptr);

	tolua_beginmodule(tolua_S, "HallBoard");
	tolua_function(tolua_S, "new", lua_my_class_HallBoard_constructor);
	tolua_function(tolua_S, "board6", lua_my_class_HallBoard_board6);
	tolua_function(tolua_S, "board4", lua_my_class_HallBoard_board4);
	tolua_function(tolua_S, "board5", lua_my_class_HallBoard_board5);
	tolua_function(tolua_S, "board2", lua_my_class_HallBoard_board2);
	tolua_function(tolua_S, "board3", lua_my_class_HallBoard_board3);
	tolua_function(tolua_S, "board1", lua_my_class_HallBoard_board1);
	tolua_function(tolua_S, "ByteSize", lua_my_class_HallBoard_ByteSize);
	tolua_function(tolua_S, "set_board1", lua_my_class_HallBoard_set_board1);
	tolua_function(tolua_S, "set_board3", lua_my_class_HallBoard_set_board3);
	tolua_function(tolua_S, "set_board2", lua_my_class_HallBoard_set_board2);
	tolua_function(tolua_S, "set_board5", lua_my_class_HallBoard_set_board5);
	tolua_function(tolua_S, "set_board4", lua_my_class_HallBoard_set_board4);
	tolua_function(tolua_S, "set_board6", lua_my_class_HallBoard_set_board6);
	tolua_endmodule(tolua_S);
	std::string typeName = typeid(HallBoard).name();
	g_luaType[typeName] = "HallBoard";
	g_typeCast["HallBoard"] = "HallBoard";
	return 1;
}

int lua_my_class_CreateRoomReq_set_member_cnt(lua_State* tolua_S)
{
	int argc = 0;
	CreateRoomReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "CreateRoomReq", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (CreateRoomReq*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_CreateRoomReq_set_member_cnt'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		int arg0;

		ok &= luaval_to_int32(tolua_S, 2, (int *)&arg0, "CreateRoomReq:set_member_cnt");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_CreateRoomReq_set_member_cnt'", nullptr);
			return 0;
		}
		cobj->set_member_cnt(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "CreateRoomReq:set_member_cnt", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_CreateRoomReq_set_member_cnt'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_CreateRoomReq_set_room_type(lua_State* tolua_S)
{
	int argc = 0;
	CreateRoomReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "CreateRoomReq", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (CreateRoomReq*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_CreateRoomReq_set_room_type'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		int arg0;

		ok &= luaval_to_int32(tolua_S, 2, (int *)&arg0, "CreateRoomReq:set_room_type");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_CreateRoomReq_set_room_type'", nullptr);
			return 0;
		}
		cobj->set_room_type(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "CreateRoomReq:set_room_type", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_CreateRoomReq_set_room_type'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_CreateRoomReq_ByteSize(lua_State* tolua_S)
{
	int argc = 0;
	CreateRoomReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "CreateRoomReq", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (CreateRoomReq*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_CreateRoomReq_ByteSize'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_CreateRoomReq_ByteSize'", nullptr);
			return 0;
		}
		int ret = cobj->ByteSize();
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "CreateRoomReq:ByteSize", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_CreateRoomReq_ByteSize'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_CreateRoomReq_member_cnt(lua_State* tolua_S)
{
	int argc = 0;
	CreateRoomReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "CreateRoomReq", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (CreateRoomReq*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_CreateRoomReq_member_cnt'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_CreateRoomReq_member_cnt'", nullptr);
			return 0;
		}
		int ret = cobj->member_cnt();
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "CreateRoomReq:member_cnt", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_CreateRoomReq_member_cnt'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_CreateRoomReq_set_opt2(lua_State* tolua_S)
{
	int argc = 0;
	CreateRoomReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "CreateRoomReq", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (CreateRoomReq*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_CreateRoomReq_set_opt2'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		std::string arg0;

		ok &= luaval_to_std_string(tolua_S, 2, &arg0, "CreateRoomReq:set_opt2");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_CreateRoomReq_set_opt2'", nullptr);
			return 0;
		}
		cobj->set_opt2(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "CreateRoomReq:set_opt2", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_CreateRoomReq_set_opt2'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_CreateRoomReq_room_type(lua_State* tolua_S)
{
	int argc = 0;
	CreateRoomReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "CreateRoomReq", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (CreateRoomReq*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_CreateRoomReq_room_type'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_CreateRoomReq_room_type'", nullptr);
			return 0;
		}
		int ret = cobj->room_type();
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "CreateRoomReq:room_type", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_CreateRoomReq_room_type'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_CreateRoomReq_opt2(lua_State* tolua_S)
{
	int argc = 0;
	CreateRoomReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "CreateRoomReq", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (CreateRoomReq*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_CreateRoomReq_opt2'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_CreateRoomReq_opt2'", nullptr);
			return 0;
		}
		const std::string& ret = cobj->opt2();
		lua_pushlstring(tolua_S, ret.c_str(), ret.length());
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "CreateRoomReq:opt2", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_CreateRoomReq_opt2'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_CreateRoomReq_constructor(lua_State* tolua_S)
{
	int argc = 0;
	CreateRoomReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif



	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_CreateRoomReq_constructor'", nullptr);
			return 0;
		}
		cobj = new CreateRoomReq();
		tolua_pushusertype(tolua_S, (void*)cobj, "CreateRoomReq");
		tolua_register_gc(tolua_S, lua_gettop(tolua_S));
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "CreateRoomReq:CreateRoomReq", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_CreateRoomReq_constructor'.", &tolua_err);
#endif

	return 0;
}

static int lua_my_class_CreateRoomReq_finalize(lua_State* tolua_S)
{
	printf("luabindings: finalizing LUA object (CreateRoomReq)");
	return 0;
}

int lua_register_my_class_CreateRoomReq(lua_State* tolua_S)
{
	tolua_usertype(tolua_S, "CreateRoomReq");
	tolua_cclass(tolua_S, "CreateRoomReq", "CreateRoomReq", "hh.Message", nullptr);

	tolua_beginmodule(tolua_S, "CreateRoomReq");
	tolua_function(tolua_S, "new", lua_my_class_CreateRoomReq_constructor);
	tolua_function(tolua_S, "set_member_cnt", lua_my_class_CreateRoomReq_set_member_cnt);
	tolua_function(tolua_S, "set_room_type", lua_my_class_CreateRoomReq_set_room_type);
	tolua_function(tolua_S, "ByteSize", lua_my_class_CreateRoomReq_ByteSize);
	tolua_function(tolua_S, "member_cnt", lua_my_class_CreateRoomReq_member_cnt);
	tolua_function(tolua_S, "set_opt2", lua_my_class_CreateRoomReq_set_opt2);
	tolua_function(tolua_S, "room_type", lua_my_class_CreateRoomReq_room_type);
	tolua_function(tolua_S, "opt2", lua_my_class_CreateRoomReq_opt2);
	tolua_endmodule(tolua_S);
	std::string typeName = typeid(CreateRoomReq).name();
	g_luaType[typeName] = "CreateRoomReq";
	g_typeCast["CreateRoomReq"] = "CreateRoomReq";
	return 1;
}

int lua_my_class_CreateRoomRsp_ByteSize(lua_State* tolua_S)
{
	int argc = 0;
	CreateRoomRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "CreateRoomRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (CreateRoomRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_CreateRoomRsp_ByteSize'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_CreateRoomRsp_ByteSize'", nullptr);
			return 0;
		}
		int ret = cobj->ByteSize();
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "CreateRoomRsp:ByteSize", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_CreateRoomRsp_ByteSize'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_CreateRoomRsp_set_fail_string(lua_State* tolua_S)
{
	int argc = 0;
	CreateRoomRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "CreateRoomRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (CreateRoomRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_CreateRoomRsp_set_fail_string'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		std::string arg0;

		ok &= luaval_to_std_string(tolua_S, 2, &arg0, "CreateRoomRsp:set_fail_string");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_CreateRoomRsp_set_fail_string'", nullptr);
			return 0;
		}
		cobj->set_fail_string(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "CreateRoomRsp:set_fail_string", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_CreateRoomRsp_set_fail_string'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_CreateRoomRsp_set_result(lua_State* tolua_S)
{
	int argc = 0;
	CreateRoomRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "CreateRoomRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (CreateRoomRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_CreateRoomRsp_set_result'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		int arg0;

		ok &= luaval_to_int32(tolua_S, 2, (int *)&arg0, "CreateRoomRsp:set_result");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_CreateRoomRsp_set_result'", nullptr);
			return 0;
		}
		cobj->set_result(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "CreateRoomRsp:set_result", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_CreateRoomRsp_set_result'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_CreateRoomRsp_room_id(lua_State* tolua_S)
{
	int argc = 0;
	CreateRoomRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "CreateRoomRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (CreateRoomRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_CreateRoomRsp_room_id'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_CreateRoomRsp_room_id'", nullptr);
			return 0;
		}
		int ret = cobj->room_id();
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "CreateRoomRsp:room_id", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_CreateRoomRsp_room_id'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_CreateRoomRsp_set_room_id(lua_State* tolua_S)
{
	int argc = 0;
	CreateRoomRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "CreateRoomRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (CreateRoomRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_CreateRoomRsp_set_room_id'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		int arg0;

		ok &= luaval_to_int32(tolua_S, 2, (int *)&arg0, "CreateRoomRsp:set_room_id");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_CreateRoomRsp_set_room_id'", nullptr);
			return 0;
		}
		cobj->set_room_id(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "CreateRoomRsp:set_room_id", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_CreateRoomRsp_set_room_id'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_CreateRoomRsp_fail_string(lua_State* tolua_S)
{
	int argc = 0;
	CreateRoomRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "CreateRoomRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (CreateRoomRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_CreateRoomRsp_fail_string'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_CreateRoomRsp_fail_string'", nullptr);
			return 0;
		}
		const std::string& ret = cobj->fail_string();
		lua_pushlstring(tolua_S, ret.c_str(), ret.length());
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "CreateRoomRsp:fail_string", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_CreateRoomRsp_fail_string'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_CreateRoomRsp_result(lua_State* tolua_S)
{
	int argc = 0;
	CreateRoomRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "CreateRoomRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (CreateRoomRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_CreateRoomRsp_result'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_CreateRoomRsp_result'", nullptr);
			return 0;
		}
		int ret = cobj->result();
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "CreateRoomRsp:result", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_CreateRoomRsp_result'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_CreateRoomRsp_constructor(lua_State* tolua_S)
{
	int argc = 0;
	CreateRoomRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif



	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_CreateRoomRsp_constructor'", nullptr);
			return 0;
		}
		cobj = new CreateRoomRsp();
		tolua_pushusertype(tolua_S, (void*)cobj, "CreateRoomRsp");
		tolua_register_gc(tolua_S, lua_gettop(tolua_S));
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "CreateRoomRsp:CreateRoomRsp", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_CreateRoomRsp_constructor'.", &tolua_err);
#endif

	return 0;
}

static int lua_my_class_CreateRoomRsp_finalize(lua_State* tolua_S)
{
	printf("luabindings: finalizing LUA object (CreateRoomRsp)");
	return 0;
}

int lua_register_my_class_CreateRoomRsp(lua_State* tolua_S)
{
	tolua_usertype(tolua_S, "CreateRoomRsp");
	tolua_cclass(tolua_S, "CreateRoomRsp", "CreateRoomRsp", "hh.Message", nullptr);

	tolua_beginmodule(tolua_S, "CreateRoomRsp");
	tolua_function(tolua_S, "new", lua_my_class_CreateRoomRsp_constructor);
	tolua_function(tolua_S, "ByteSize", lua_my_class_CreateRoomRsp_ByteSize);
	tolua_function(tolua_S, "set_fail_string", lua_my_class_CreateRoomRsp_set_fail_string);
	tolua_function(tolua_S, "set_result", lua_my_class_CreateRoomRsp_set_result);
	tolua_function(tolua_S, "room_id", lua_my_class_CreateRoomRsp_room_id);
	tolua_function(tolua_S, "set_room_id", lua_my_class_CreateRoomRsp_set_room_id);
	tolua_function(tolua_S, "fail_string", lua_my_class_CreateRoomRsp_fail_string);
	tolua_function(tolua_S, "result", lua_my_class_CreateRoomRsp_result);
	tolua_endmodule(tolua_S);
	std::string typeName = typeid(CreateRoomRsp).name();
	g_luaType[typeName] = "CreateRoomRsp";
	g_typeCast["CreateRoomRsp"] = "CreateRoomRsp";
	return 1;
}

int lua_my_class_InRoomReq_ByteSize(lua_State* tolua_S)
{
	int argc = 0;
	InRoomReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "InRoomReq", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (InRoomReq*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_InRoomReq_ByteSize'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_InRoomReq_ByteSize'", nullptr);
			return 0;
		}
		int ret = cobj->ByteSize();
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "InRoomReq:ByteSize", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_InRoomReq_ByteSize'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_InRoomReq_set_opt1(lua_State* tolua_S)
{
	int argc = 0;
	InRoomReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "InRoomReq", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (InRoomReq*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_InRoomReq_set_opt1'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		std::string arg0;

		ok &= luaval_to_std_string(tolua_S, 2, &arg0, "InRoomReq:set_opt1");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_InRoomReq_set_opt1'", nullptr);
			return 0;
		}
		cobj->set_opt1(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "InRoomReq:set_opt1", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_InRoomReq_set_opt1'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_InRoomReq_room_id(lua_State* tolua_S)
{
	int argc = 0;
	InRoomReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "InRoomReq", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (InRoomReq*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_InRoomReq_room_id'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_InRoomReq_room_id'", nullptr);
			return 0;
		}
		int ret = cobj->room_id();
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "InRoomReq:room_id", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_InRoomReq_room_id'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_InRoomReq_set_room_id(lua_State* tolua_S)
{
	int argc = 0;
	InRoomReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "InRoomReq", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (InRoomReq*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_InRoomReq_set_room_id'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		int arg0;

		ok &= luaval_to_int32(tolua_S, 2, (int *)&arg0, "InRoomReq:set_room_id");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_InRoomReq_set_room_id'", nullptr);
			return 0;
		}
		cobj->set_room_id(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "InRoomReq:set_room_id", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_InRoomReq_set_room_id'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_InRoomReq_opt1(lua_State* tolua_S)
{
	int argc = 0;
	InRoomReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "InRoomReq", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (InRoomReq*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_InRoomReq_opt1'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_InRoomReq_opt1'", nullptr);
			return 0;
		}
		const std::string& ret = cobj->opt1();
		lua_pushlstring(tolua_S, ret.c_str(), ret.length());
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "InRoomReq:opt1", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_InRoomReq_opt1'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_InRoomReq_constructor(lua_State* tolua_S)
{
	int argc = 0;
	InRoomReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif



	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_InRoomReq_constructor'", nullptr);
			return 0;
		}
		cobj = new InRoomReq();
		tolua_pushusertype(tolua_S, (void*)cobj, "InRoomReq");
		tolua_register_gc(tolua_S, lua_gettop(tolua_S));
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "InRoomReq:InRoomReq", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_InRoomReq_constructor'.", &tolua_err);
#endif

	return 0;
}

static int lua_my_class_InRoomReq_finalize(lua_State* tolua_S)
{
	printf("luabindings: finalizing LUA object (InRoomReq)");
	return 0;
}

int lua_register_my_class_InRoomReq(lua_State* tolua_S)
{
	tolua_usertype(tolua_S, "InRoomReq");
	tolua_cclass(tolua_S, "InRoomReq", "InRoomReq", "hh.Message", nullptr);

	tolua_beginmodule(tolua_S, "InRoomReq");
	tolua_function(tolua_S, "new", lua_my_class_InRoomReq_constructor);
	tolua_function(tolua_S, "ByteSize", lua_my_class_InRoomReq_ByteSize);
	tolua_function(tolua_S, "set_opt1", lua_my_class_InRoomReq_set_opt1);
	tolua_function(tolua_S, "room_id", lua_my_class_InRoomReq_room_id);
	tolua_function(tolua_S, "set_room_id", lua_my_class_InRoomReq_set_room_id);
	tolua_function(tolua_S, "opt1", lua_my_class_InRoomReq_opt1);
	tolua_endmodule(tolua_S);
	std::string typeName = typeid(InRoomReq).name();
	g_luaType[typeName] = "InRoomReq";
	g_typeCast["InRoomReq"] = "InRoomReq";
	return 1;
}

int lua_my_class_InRoomRsp_ByteSize(lua_State* tolua_S)
{
	int argc = 0;
	InRoomRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "InRoomRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (InRoomRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_InRoomRsp_ByteSize'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_InRoomRsp_ByteSize'", nullptr);
			return 0;
		}
		int ret = cobj->ByteSize();
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "InRoomRsp:ByteSize", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_InRoomRsp_ByteSize'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_InRoomRsp_set_fail_string(lua_State* tolua_S)
{
	int argc = 0;
	InRoomRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "InRoomRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (InRoomRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_InRoomRsp_set_fail_string'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		std::string arg0;

		ok &= luaval_to_std_string(tolua_S, 2, &arg0, "InRoomRsp:set_fail_string");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_InRoomRsp_set_fail_string'", nullptr);
			return 0;
		}
		cobj->set_fail_string(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "InRoomRsp:set_fail_string", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_InRoomRsp_set_fail_string'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_InRoomRsp_set_result(lua_State* tolua_S)
{
	int argc = 0;
	InRoomRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "InRoomRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (InRoomRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_InRoomRsp_set_result'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		int arg0;

		ok &= luaval_to_int32(tolua_S, 2, (int *)&arg0, "InRoomRsp:set_result");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_InRoomRsp_set_result'", nullptr);
			return 0;
		}
		cobj->set_result(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "InRoomRsp:set_result", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_InRoomRsp_set_result'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_InRoomRsp_room_id(lua_State* tolua_S)
{
	int argc = 0;
	InRoomRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "InRoomRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (InRoomRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_InRoomRsp_room_id'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_InRoomRsp_room_id'", nullptr);
			return 0;
		}
		int ret = cobj->room_id();
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "InRoomRsp:room_id", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_InRoomRsp_room_id'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_InRoomRsp_set_room_id(lua_State* tolua_S)
{
	int argc = 0;
	InRoomRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "InRoomRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (InRoomRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_InRoomRsp_set_room_id'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		int arg0;

		ok &= luaval_to_int32(tolua_S, 2, (int *)&arg0, "InRoomRsp:set_room_id");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_InRoomRsp_set_room_id'", nullptr);
			return 0;
		}
		cobj->set_room_id(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "InRoomRsp:set_room_id", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_InRoomRsp_set_room_id'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_InRoomRsp_fail_string(lua_State* tolua_S)
{
	int argc = 0;
	InRoomRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "InRoomRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (InRoomRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_InRoomRsp_fail_string'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_InRoomRsp_fail_string'", nullptr);
			return 0;
		}
		const std::string& ret = cobj->fail_string();
		lua_pushlstring(tolua_S, ret.c_str(), ret.length());
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "InRoomRsp:fail_string", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_InRoomRsp_fail_string'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_InRoomRsp_result(lua_State* tolua_S)
{
	int argc = 0;
	InRoomRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "InRoomRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (InRoomRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_InRoomRsp_result'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_InRoomRsp_result'", nullptr);
			return 0;
		}
		int ret = cobj->result();
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "InRoomRsp:result", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_InRoomRsp_result'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_InRoomRsp_constructor(lua_State* tolua_S)
{
	int argc = 0;
	InRoomRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif



	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_InRoomRsp_constructor'", nullptr);
			return 0;
		}
		cobj = new InRoomRsp();
		tolua_pushusertype(tolua_S, (void*)cobj, "InRoomRsp");
		tolua_register_gc(tolua_S, lua_gettop(tolua_S));
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "InRoomRsp:InRoomRsp", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_InRoomRsp_constructor'.", &tolua_err);
#endif

	return 0;
}

static int lua_my_class_InRoomRsp_finalize(lua_State* tolua_S)
{
	printf("luabindings: finalizing LUA object (InRoomRsp)");
	return 0;
}

int lua_register_my_class_InRoomRsp(lua_State* tolua_S)
{
	tolua_usertype(tolua_S, "InRoomRsp");
	tolua_cclass(tolua_S, "InRoomRsp", "InRoomRsp", "hh.Message", nullptr);

	tolua_beginmodule(tolua_S, "InRoomRsp");
	tolua_function(tolua_S, "new", lua_my_class_InRoomRsp_constructor);
	tolua_function(tolua_S, "ByteSize", lua_my_class_InRoomRsp_ByteSize);
	tolua_function(tolua_S, "set_fail_string", lua_my_class_InRoomRsp_set_fail_string);
	tolua_function(tolua_S, "set_result", lua_my_class_InRoomRsp_set_result);
	tolua_function(tolua_S, "room_id", lua_my_class_InRoomRsp_room_id);
	tolua_function(tolua_S, "set_room_id", lua_my_class_InRoomRsp_set_room_id);
	tolua_function(tolua_S, "fail_string", lua_my_class_InRoomRsp_fail_string);
	tolua_function(tolua_S, "result", lua_my_class_InRoomRsp_result);
	tolua_endmodule(tolua_S);
	std::string typeName = typeid(InRoomRsp).name();
	g_luaType[typeName] = "InRoomRsp";
	g_typeCast["InRoomRsp"] = "InRoomRsp";
	return 1;
}

int lua_my_class_OutRoomReq_ByteSize(lua_State* tolua_S)
{
	int argc = 0;
	OutRoomReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "OutRoomReq", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (OutRoomReq*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_OutRoomReq_ByteSize'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_OutRoomReq_ByteSize'", nullptr);
			return 0;
		}
		int ret = cobj->ByteSize();
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "OutRoomReq:ByteSize", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_OutRoomReq_ByteSize'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_OutRoomReq_set_opt1(lua_State* tolua_S)
{
	int argc = 0;
	OutRoomReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "OutRoomReq", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (OutRoomReq*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_OutRoomReq_set_opt1'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		std::string arg0;

		ok &= luaval_to_std_string(tolua_S, 2, &arg0, "OutRoomReq:set_opt1");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_OutRoomReq_set_opt1'", nullptr);
			return 0;
		}
		cobj->set_opt1(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "OutRoomReq:set_opt1", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_OutRoomReq_set_opt1'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_OutRoomReq_room_id(lua_State* tolua_S)
{
	int argc = 0;
	OutRoomReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "OutRoomReq", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (OutRoomReq*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_OutRoomReq_room_id'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_OutRoomReq_room_id'", nullptr);
			return 0;
		}
		int ret = cobj->room_id();
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "OutRoomReq:room_id", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_OutRoomReq_room_id'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_OutRoomReq_set_room_id(lua_State* tolua_S)
{
	int argc = 0;
	OutRoomReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "OutRoomReq", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (OutRoomReq*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_OutRoomReq_set_room_id'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		int arg0;

		ok &= luaval_to_int32(tolua_S, 2, (int *)&arg0, "OutRoomReq:set_room_id");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_OutRoomReq_set_room_id'", nullptr);
			return 0;
		}
		cobj->set_room_id(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "OutRoomReq:set_room_id", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_OutRoomReq_set_room_id'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_OutRoomReq_opt1(lua_State* tolua_S)
{
	int argc = 0;
	OutRoomReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "OutRoomReq", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (OutRoomReq*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_OutRoomReq_opt1'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_OutRoomReq_opt1'", nullptr);
			return 0;
		}
		const std::string& ret = cobj->opt1();
		lua_pushlstring(tolua_S, ret.c_str(), ret.length());
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "OutRoomReq:opt1", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_OutRoomReq_opt1'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_OutRoomReq_constructor(lua_State* tolua_S)
{
	int argc = 0;
	OutRoomReq* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif



	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_OutRoomReq_constructor'", nullptr);
			return 0;
		}
		cobj = new OutRoomReq();
		tolua_pushusertype(tolua_S, (void*)cobj, "OutRoomReq");
		tolua_register_gc(tolua_S, lua_gettop(tolua_S));
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "OutRoomReq:OutRoomReq", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_OutRoomReq_constructor'.", &tolua_err);
#endif

	return 0;
}

static int lua_my_class_OutRoomReq_finalize(lua_State* tolua_S)
{
	printf("luabindings: finalizing LUA object (OutRoomReq)");
	return 0;
}

int lua_register_my_class_OutRoomReq(lua_State* tolua_S)
{
	tolua_usertype(tolua_S, "OutRoomReq");
	tolua_cclass(tolua_S, "OutRoomReq", "OutRoomReq", "hh.Message", nullptr);

	tolua_beginmodule(tolua_S, "OutRoomReq");
	tolua_function(tolua_S, "new", lua_my_class_OutRoomReq_constructor);
	tolua_function(tolua_S, "ByteSize", lua_my_class_OutRoomReq_ByteSize);
	tolua_function(tolua_S, "set_opt1", lua_my_class_OutRoomReq_set_opt1);
	tolua_function(tolua_S, "room_id", lua_my_class_OutRoomReq_room_id);
	tolua_function(tolua_S, "set_room_id", lua_my_class_OutRoomReq_set_room_id);
	tolua_function(tolua_S, "opt1", lua_my_class_OutRoomReq_opt1);
	tolua_endmodule(tolua_S);
	std::string typeName = typeid(OutRoomReq).name();
	g_luaType[typeName] = "OutRoomReq";
	g_typeCast["OutRoomReq"] = "OutRoomReq";
	return 1;
}

int lua_my_class_OutRoomRsp_ByteSize(lua_State* tolua_S)
{
	int argc = 0;
	OutRoomRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "OutRoomRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (OutRoomRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_OutRoomRsp_ByteSize'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_OutRoomRsp_ByteSize'", nullptr);
			return 0;
		}
		int ret = cobj->ByteSize();
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "OutRoomRsp:ByteSize", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_OutRoomRsp_ByteSize'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_OutRoomRsp_set_fail_string(lua_State* tolua_S)
{
	int argc = 0;
	OutRoomRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "OutRoomRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (OutRoomRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_OutRoomRsp_set_fail_string'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		std::string arg0;

		ok &= luaval_to_std_string(tolua_S, 2, &arg0, "OutRoomRsp:set_fail_string");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_OutRoomRsp_set_fail_string'", nullptr);
			return 0;
		}
		cobj->set_fail_string(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "OutRoomRsp:set_fail_string", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_OutRoomRsp_set_fail_string'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_OutRoomRsp_set_result(lua_State* tolua_S)
{
	int argc = 0;
	OutRoomRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "OutRoomRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (OutRoomRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_OutRoomRsp_set_result'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		int arg0;

		ok &= luaval_to_int32(tolua_S, 2, (int *)&arg0, "OutRoomRsp:set_result");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_OutRoomRsp_set_result'", nullptr);
			return 0;
		}
		cobj->set_result(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "OutRoomRsp:set_result", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_OutRoomRsp_set_result'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_OutRoomRsp_room_id(lua_State* tolua_S)
{
	int argc = 0;
	OutRoomRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "OutRoomRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (OutRoomRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_OutRoomRsp_room_id'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_OutRoomRsp_room_id'", nullptr);
			return 0;
		}
		int ret = cobj->room_id();
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "OutRoomRsp:room_id", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_OutRoomRsp_room_id'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_OutRoomRsp_set_room_id(lua_State* tolua_S)
{
	int argc = 0;
	OutRoomRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "OutRoomRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (OutRoomRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_OutRoomRsp_set_room_id'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		int arg0;

		ok &= luaval_to_int32(tolua_S, 2, (int *)&arg0, "OutRoomRsp:set_room_id");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_OutRoomRsp_set_room_id'", nullptr);
			return 0;
		}
		cobj->set_room_id(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "OutRoomRsp:set_room_id", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_OutRoomRsp_set_room_id'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_OutRoomRsp_fail_string(lua_State* tolua_S)
{
	int argc = 0;
	OutRoomRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "OutRoomRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (OutRoomRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_OutRoomRsp_fail_string'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_OutRoomRsp_fail_string'", nullptr);
			return 0;
		}
		const std::string& ret = cobj->fail_string();
		lua_pushlstring(tolua_S, ret.c_str(), ret.length());
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "OutRoomRsp:fail_string", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_OutRoomRsp_fail_string'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_OutRoomRsp_result(lua_State* tolua_S)
{
	int argc = 0;
	OutRoomRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "OutRoomRsp", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (OutRoomRsp*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_OutRoomRsp_result'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_OutRoomRsp_result'", nullptr);
			return 0;
		}
		int ret = cobj->result();
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "OutRoomRsp:result", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_OutRoomRsp_result'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_OutRoomRsp_constructor(lua_State* tolua_S)
{
	int argc = 0;
	OutRoomRsp* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif



	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_OutRoomRsp_constructor'", nullptr);
			return 0;
		}
		cobj = new OutRoomRsp();
		tolua_pushusertype(tolua_S, (void*)cobj, "OutRoomRsp");
		tolua_register_gc(tolua_S, lua_gettop(tolua_S));
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "OutRoomRsp:OutRoomRsp", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_OutRoomRsp_constructor'.", &tolua_err);
#endif

	return 0;
}

static int lua_my_class_OutRoomRsp_finalize(lua_State* tolua_S)
{
	printf("luabindings: finalizing LUA object (OutRoomRsp)");
	return 0;
}

int lua_register_my_class_OutRoomRsp(lua_State* tolua_S)
{
	tolua_usertype(tolua_S, "OutRoomRsp");
	tolua_cclass(tolua_S, "OutRoomRsp", "OutRoomRsp", "hh.Message", nullptr);

	tolua_beginmodule(tolua_S, "OutRoomRsp");
	tolua_function(tolua_S, "new", lua_my_class_OutRoomRsp_constructor);
	tolua_function(tolua_S, "ByteSize", lua_my_class_OutRoomRsp_ByteSize);
	tolua_function(tolua_S, "set_fail_string", lua_my_class_OutRoomRsp_set_fail_string);
	tolua_function(tolua_S, "set_result", lua_my_class_OutRoomRsp_set_result);
	tolua_function(tolua_S, "room_id", lua_my_class_OutRoomRsp_room_id);
	tolua_function(tolua_S, "set_room_id", lua_my_class_OutRoomRsp_set_room_id);
	tolua_function(tolua_S, "fail_string", lua_my_class_OutRoomRsp_fail_string);
	tolua_function(tolua_S, "result", lua_my_class_OutRoomRsp_result);
	tolua_endmodule(tolua_S);
	std::string typeName = typeid(OutRoomRsp).name();
	g_luaType[typeName] = "OutRoomRsp";
	g_typeCast["OutRoomRsp"] = "OutRoomRsp";
	return 1;
}

int lua_my_class_RoomInfo_set_opt2(lua_State* tolua_S)
{
	int argc = 0;
	RoomInfo* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "RoomInfo", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (RoomInfo*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_RoomInfo_set_opt2'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		std::string arg0;

		ok &= luaval_to_std_string(tolua_S, 2, &arg0, "RoomInfo:set_opt2");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_RoomInfo_set_opt2'", nullptr);
			return 0;
		}
		cobj->set_opt2(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "RoomInfo:set_opt2", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_RoomInfo_set_opt2'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_RoomInfo_ByteSize(lua_State* tolua_S)
{
	int argc = 0;
	RoomInfo* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "RoomInfo", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (RoomInfo*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_RoomInfo_ByteSize'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_RoomInfo_ByteSize'", nullptr);
			return 0;
		}
		int ret = cobj->ByteSize();
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "RoomInfo:ByteSize", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_RoomInfo_ByteSize'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_RoomInfo_set_opt1(lua_State* tolua_S)
{
	int argc = 0;
	RoomInfo* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "RoomInfo", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (RoomInfo*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_RoomInfo_set_opt1'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		std::string arg0;

		ok &= luaval_to_std_string(tolua_S, 2, &arg0, "RoomInfo:set_opt1");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_RoomInfo_set_opt1'", nullptr);
			return 0;
		}
		cobj->set_opt1(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "RoomInfo:set_opt1", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_RoomInfo_set_opt1'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_RoomInfo_room_id(lua_State* tolua_S)
{
	int argc = 0;
	RoomInfo* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "RoomInfo", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (RoomInfo*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_RoomInfo_room_id'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_RoomInfo_room_id'", nullptr);
			return 0;
		}
		int ret = cobj->room_id();
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "RoomInfo:room_id", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_RoomInfo_room_id'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_RoomInfo_set_room_id(lua_State* tolua_S)
{
	int argc = 0;
	RoomInfo* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "RoomInfo", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (RoomInfo*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_RoomInfo_set_room_id'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		int arg0;

		ok &= luaval_to_int32(tolua_S, 2, (int *)&arg0, "RoomInfo:set_room_id");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_RoomInfo_set_room_id'", nullptr);
			return 0;
		}
		cobj->set_room_id(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "RoomInfo:set_room_id", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_RoomInfo_set_room_id'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_RoomInfo_opt1(lua_State* tolua_S)
{
	int argc = 0;
	RoomInfo* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "RoomInfo", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (RoomInfo*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_RoomInfo_opt1'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_RoomInfo_opt1'", nullptr);
			return 0;
		}
		const std::string& ret = cobj->opt1();
		lua_pushlstring(tolua_S, ret.c_str(), ret.length());
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "RoomInfo:opt1", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_RoomInfo_opt1'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_RoomInfo_opt2(lua_State* tolua_S)
{
	int argc = 0;
	RoomInfo* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "RoomInfo", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (RoomInfo*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_RoomInfo_opt2'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_RoomInfo_opt2'", nullptr);
			return 0;
		}
		const std::string& ret = cobj->opt2();
		lua_pushlstring(tolua_S, ret.c_str(), ret.length());
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "RoomInfo:opt2", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_RoomInfo_opt2'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_RoomInfo_constructor(lua_State* tolua_S)
{
	int argc = 0;
	RoomInfo* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif



	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_RoomInfo_constructor'", nullptr);
			return 0;
		}
		cobj = new RoomInfo();
		tolua_pushusertype(tolua_S, (void*)cobj, "RoomInfo");
		tolua_register_gc(tolua_S, lua_gettop(tolua_S));
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "RoomInfo:RoomInfo", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_RoomInfo_constructor'.", &tolua_err);
#endif

	return 0;
}

static int lua_my_class_RoomInfo_finalize(lua_State* tolua_S)
{
	printf("luabindings: finalizing LUA object (RoomInfo)");
	return 0;
}

int lua_register_my_class_RoomInfo(lua_State* tolua_S)
{
	tolua_usertype(tolua_S, "RoomInfo");
	tolua_cclass(tolua_S, "RoomInfo", "RoomInfo", "hh.Message", nullptr);

	tolua_beginmodule(tolua_S, "RoomInfo");
	tolua_function(tolua_S, "new", lua_my_class_RoomInfo_constructor);
	tolua_function(tolua_S, "set_opt2", lua_my_class_RoomInfo_set_opt2);
	tolua_function(tolua_S, "ByteSize", lua_my_class_RoomInfo_ByteSize);
	tolua_function(tolua_S, "set_opt1", lua_my_class_RoomInfo_set_opt1);
	tolua_function(tolua_S, "room_id", lua_my_class_RoomInfo_room_id);
	tolua_function(tolua_S, "set_room_id", lua_my_class_RoomInfo_set_room_id);
	tolua_function(tolua_S, "opt1", lua_my_class_RoomInfo_opt1);
	tolua_function(tolua_S, "opt2", lua_my_class_RoomInfo_opt2);
	tolua_endmodule(tolua_S);
	std::string typeName = typeid(RoomInfo).name();
	g_luaType[typeName] = "RoomInfo";
	g_typeCast["RoomInfo"] = "RoomInfo";
	return 1;
}

int lua_my_class_HNetworkManager_end(lua_State* tolua_S)
{
	int argc = 0;
	HNetworkManager* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "HNetworkManager", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (HNetworkManager*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_HNetworkManager_end'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HNetworkManager_end'", nullptr);
			return 0;
		}
		cobj->end();
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "HNetworkManager:end", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HNetworkManager_end'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_HNetworkManager_start_thread_send(lua_State* tolua_S)
{
	int argc = 0;
	HNetworkManager* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "HNetworkManager", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (HNetworkManager*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_HNetworkManager_start_thread_send'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HNetworkManager_start_thread_send'", nullptr);
			return 0;
		}
		cobj->start_thread_send();
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "HNetworkManager:start_thread_send", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HNetworkManager_start_thread_send'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_HNetworkManager_start_thread_recv(lua_State* tolua_S)
{
	int argc = 0;
	HNetworkManager* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "HNetworkManager", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (HNetworkManager*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_HNetworkManager_start_thread_recv'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HNetworkManager_start_thread_recv'", nullptr);
			return 0;
		}
		cobj->start_thread_recv();
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "HNetworkManager:start_thread_recv", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HNetworkManager_start_thread_recv'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_HNetworkManager_start(lua_State* tolua_S)
{
	int argc = 0;
	HNetworkManager* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "HNetworkManager", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (HNetworkManager*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_HNetworkManager_start'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HNetworkManager_start'", nullptr);
			return 0;
		}
		cobj->start();
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "HNetworkManager:start", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HNetworkManager_start'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_HNetworkManager_start_thread_heart(lua_State* tolua_S)
{
	int argc = 0;
	HNetworkManager* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "HNetworkManager", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (HNetworkManager*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_HNetworkManager_start_thread_heart'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HNetworkManager_start_thread_heart'", nullptr);
			return 0;
		}
		cobj->start_thread_heart();
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "HNetworkManager:start_thread_heart", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HNetworkManager_start_thread_heart'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_HNetworkManager_send_msg(lua_State* tolua_S)
{
	int argc = 0;
	HNetworkManager* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "HNetworkManager", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (HNetworkManager*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_my_class_HNetworkManager_send_msg'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 3)
	{
		void* arg0;
		int arg1;
		int arg2;

		ok = true;
		arg0 = (void*)(tolua_tousertype(tolua_S, 2, 0));

		ok &= luaval_to_int32(tolua_S, 3, (int *)&arg1, "HNetworkManager:send_msg");

		ok &= luaval_to_int32(tolua_S, 4, (int *)&arg2, "HNetworkManager:send_msg");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HNetworkManager_send_msg'", nullptr);
			return 0;
		}
		int ret = cobj->send_msg(arg0, arg1, arg2);
		tolua_pushnumber(tolua_S, (lua_Number)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "HNetworkManager:send_msg", argc, 3);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HNetworkManager_send_msg'.", &tolua_err);
#endif

	return 0;
}
int lua_my_class_HNetworkManager_Instance(lua_State* tolua_S)
{
	int argc = 0;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertable(tolua_S, 1, "HNetworkManager", 0, &tolua_err)) goto tolua_lerror;
#endif

	argc = lua_gettop(tolua_S) - 1;

	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HNetworkManager_Instance'", nullptr);
			return 0;
		}
		HNetworkManager* ret = HNetworkManager::Instance();
		object_to_luaval<HNetworkManager>(tolua_S, "HNetworkManager", (HNetworkManager*)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "HNetworkManager:Instance", argc, 0);
	return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HNetworkManager_Instance'.", &tolua_err);
#endif
	return 0;
}
int lua_my_class_HNetworkManager_constructor(lua_State* tolua_S)
{
	int argc = 0;
	HNetworkManager* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif



	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HNetworkManager_constructor'", nullptr);
			return 0;
		}
		cobj = new HNetworkManager();
		tolua_pushusertype(tolua_S, (void*)cobj, "HNetworkManager");
		tolua_register_gc(tolua_S, lua_gettop(tolua_S));
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "HNetworkManager:HNetworkManager", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HNetworkManager_constructor'.", &tolua_err);
#endif

	return 0;
}

static int lua_my_class_HNetworkManager_finalize(lua_State* tolua_S)
{
	printf("luabindings: finalizing LUA object (HNetworkManager)");
	return 0;
}

int lua_register_my_class_HNetworkManager(lua_State* tolua_S)
{
	tolua_usertype(tolua_S, "HNetworkManager");
	tolua_cclass(tolua_S, "HNetworkManager", "HNetworkManager", "", nullptr);

	tolua_beginmodule(tolua_S, "HNetworkManager");
	tolua_function(tolua_S, "new", lua_my_class_HNetworkManager_constructor);
	tolua_function(tolua_S, "end", lua_my_class_HNetworkManager_end);
	tolua_function(tolua_S, "start_thread_send", lua_my_class_HNetworkManager_start_thread_send);
	tolua_function(tolua_S, "start_thread_recv", lua_my_class_HNetworkManager_start_thread_recv);
	tolua_function(tolua_S, "start", lua_my_class_HNetworkManager_start);
	tolua_function(tolua_S, "start_thread_heart", lua_my_class_HNetworkManager_start_thread_heart);
	tolua_function(tolua_S, "send_msg", lua_my_class_HNetworkManager_send_msg);
	tolua_function(tolua_S, "Instance", lua_my_class_HNetworkManager_Instance);
	tolua_endmodule(tolua_S);
	std::string typeName = typeid(HNetworkManager).name();
	g_luaType[typeName] = "HNetworkManager";
	g_typeCast["HNetworkManager"] = "HNetworkManager";
	return 1;
}

int lua_my_class_HLog_Instance(lua_State* tolua_S)
{
	int argc = 0;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertable(tolua_S, 1, "HLog", 0, &tolua_err)) goto tolua_lerror;
#endif

	argc = lua_gettop(tolua_S) - 1;

	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HLog_Instance'", nullptr);
			return 0;
		}
		HLog* ret = HLog::Instance();
		object_to_luaval<HLog>(tolua_S, "HLog", (HLog*)ret);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "HLog:Instance", argc, 0);
	return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HLog_Instance'.", &tolua_err);
#endif
	return 0;
}
int lua_my_class_HLog_log(lua_State* tolua_S)
{
	int argc = 0;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertable(tolua_S, 1, "HLog", 0, &tolua_err)) goto tolua_lerror;
#endif

	argc = lua_gettop(tolua_S) - 1;

	if (argc == 2)
	{
		int arg0;
		const char* arg1;
		ok &= luaval_to_int32(tolua_S, 2, (int *)&arg0, "HLog:log");
		std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "HLog:log"); arg1 = arg1_tmp.c_str();
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HLog_log'", nullptr);
			return 0;
		}
		HLog::log(arg0, arg1);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "HLog:log", argc, 2);
	return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HLog_log'.", &tolua_err);
#endif
	return 0;
}
int lua_my_class_HLog_constructor(lua_State* tolua_S)
{
	int argc = 0;
	HLog* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif



	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HLog_constructor'", nullptr);
			return 0;
		}
		cobj = new HLog();
		tolua_pushusertype(tolua_S, (void*)cobj, "HLog");
		tolua_register_gc(tolua_S, lua_gettop(tolua_S));
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "HLog:HLog", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HLog_constructor'.", &tolua_err);
#endif

	return 0;
}

static int lua_my_class_HLog_finalize(lua_State* tolua_S)
{
	printf("luabindings: finalizing LUA object (HLog)");
	return 0;
}

int lua_register_my_class_HLog(lua_State* tolua_S)
{
	tolua_usertype(tolua_S, "HLog");
	tolua_cclass(tolua_S, "HLog", "HLog", "", nullptr);

	tolua_beginmodule(tolua_S, "HLog");
	tolua_function(tolua_S, "new", lua_my_class_HLog_constructor);
	tolua_function(tolua_S, "Instance", lua_my_class_HLog_Instance);
	tolua_function(tolua_S, "log", lua_my_class_HLog_log);
	tolua_endmodule(tolua_S);
	std::string typeName = typeid(HLog).name();
	g_luaType[typeName] = "HLog";
	g_typeCast["HLog"] = "HLog";
	return 1;
}

int lua_my_class_HCommon_toast(lua_State* tolua_S)
{
	int argc = 0;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertable(tolua_S, 1, "HCommon", 0, &tolua_err)) goto tolua_lerror;
#endif

	argc = lua_gettop(tolua_S) - 1;

	if (argc == 1)
	{
		std::string arg0;
		ok &= luaval_to_std_string(tolua_S, 2, &arg0, "HCommon:toast");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HCommon_toast'", nullptr);
			return 0;
		}
		HCommon::toast(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "HCommon:toast", argc, 1);
	return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HCommon_toast'.", &tolua_err);
#endif
	return 0;
}
int lua_my_class_HCommon_reload_script(lua_State* tolua_S)
{
	int argc = 0;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertable(tolua_S, 1, "HCommon", 0, &tolua_err)) goto tolua_lerror;
#endif

	argc = lua_gettop(tolua_S) - 1;

	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HCommon_reload_script'", nullptr);
			return 0;
		}
		HCommon::reload_script();
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "HCommon:reload_script", argc, 0);
	return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HCommon_reload_script'.", &tolua_err);
#endif
	return 0;
}
int lua_my_class_HCommon_constructor(lua_State* tolua_S)
{
	int argc = 0;
	HCommon* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif



	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_my_class_HCommon_constructor'", nullptr);
			return 0;
		}
		cobj = new HCommon();
		tolua_pushusertype(tolua_S, (void*)cobj, "HCommon");
		tolua_register_gc(tolua_S, lua_gettop(tolua_S));
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "HCommon:HCommon", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
	tolua_error(tolua_S, "#ferror in function 'lua_my_class_HCommon_constructor'.", &tolua_err);
#endif

	return 0;
}

static int lua_my_class_HCommon_finalize(lua_State* tolua_S)
{
	printf("luabindings: finalizing LUA object (HCommon)");
	return 0;
}

int lua_register_my_class_HCommon(lua_State* tolua_S)
{
	tolua_usertype(tolua_S, "HCommon");
	tolua_cclass(tolua_S, "HCommon", "HCommon", "", nullptr);

	tolua_beginmodule(tolua_S, "HCommon");
	tolua_function(tolua_S, "new", lua_my_class_HCommon_constructor);
	tolua_function(tolua_S, "toast", lua_my_class_HCommon_toast);
	tolua_function(tolua_S, "reload_script", lua_my_class_HCommon_reload_script);
	tolua_endmodule(tolua_S);
	std::string typeName = typeid(HCommon).name();
	g_luaType[typeName] = "HCommon";
	g_typeCast["HCommon"] = "HCommon";
	return 1;
}
TOLUA_API int register_all_my_class(lua_State* tolua_S)
{
	tolua_open(tolua_S);

	tolua_module(tolua_S, "hh", 0);
	tolua_beginmodule(tolua_S, "hh");

	lua_register_my_class_HNetworkManager(tolua_S);
	lua_register_my_class_LoginReq(tolua_S);
	lua_register_my_class_LoginRsp(tolua_S);
	lua_register_my_class_RoomInfo(tolua_S);
	lua_register_my_class_CreateRoomReq(tolua_S);
	lua_register_my_class_InRoomReq(tolua_S);
	lua_register_my_class_HCommon(tolua_S);
	lua_register_my_class_HallBoard(tolua_S);
	lua_register_my_class_OutRoomReq(tolua_S);
	lua_register_my_class_HLog(tolua_S);
	lua_register_my_class_UserInfo(tolua_S);
	lua_register_my_class_OutRoomRsp(tolua_S);
	lua_register_my_class_CreateRoomRsp(tolua_S);
	lua_register_my_class_InRoomRsp(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

