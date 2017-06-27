#include "common/H_c_call_lua.h"
#include "cocos2d.h"
#include "scripting/lua-bindings/manual/CCLuaEngine.h"

USING_NS_CC;

//Singleton
static H_c_call_lua* _mCGameCommonCToLuaInstance = NULL;
H_c_call_lua::H_c_call_lua(void)
{
	_mCGameCommonCToLuaInstance = NULL;
}

H_c_call_lua::~H_c_call_lua(void)
{
	delete _mCGameCommonCToLuaInstance;
	_mCGameCommonCToLuaInstance = NULL;
}

H_c_call_lua* H_c_call_lua::Instance()
{
	if(!_mCGameCommonCToLuaInstance)
	{
		_mCGameCommonCToLuaInstance = new H_c_call_lua();
		_mCGameCommonCToLuaInstance->init();
	}
	return _mCGameCommonCToLuaInstance;
}

bool H_c_call_lua::init()
{
	return true;
}


void H_c_call_lua::NotifyLua( const string &msgBoby )
{



	////设置文件路径
	//const string luaFile = "src/HandleMsg.lua";
	////获取lua环境栈 lua_State = luaState.open();
	//lua_State *state = LuaEngine::getInstance()->getLuaStack()->getLuaState();
	////添加lua文件引用 执行lua_dofile操作
	//LuaEngine::getInstance()->getLuaStack()->executeScriptFile(luaFile.c_str());
	////设置C++要调用的Lua函数名称
	//lua_getglobal(state,"HandleClientMsg");
	////判断C++要调用的Lua函数是否被放置在栈顶,true为正确
	////bool b = lua_isfunction(state, -1);
	////config parame
	//lua_pushstring(state,msgBoby.c_str());
	////call Lua function
	//lua_pcall(state,1,0,0);

}
