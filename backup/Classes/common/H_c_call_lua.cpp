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



	////�����ļ�·��
	//const string luaFile = "src/HandleMsg.lua";
	////��ȡlua����ջ lua_State = luaState.open();
	//lua_State *state = LuaEngine::getInstance()->getLuaStack()->getLuaState();
	////���lua�ļ����� ִ��lua_dofile����
	//LuaEngine::getInstance()->getLuaStack()->executeScriptFile(luaFile.c_str());
	////����C++Ҫ���õ�Lua��������
	//lua_getglobal(state,"HandleClientMsg");
	////�ж�C++Ҫ���õ�Lua�����Ƿ񱻷�����ջ��,trueΪ��ȷ
	////bool b = lua_isfunction(state, -1);
	////config parame
	//lua_pushstring(state,msgBoby.c_str());
	////call Lua function
	//lua_pcall(state,1,0,0);

}
