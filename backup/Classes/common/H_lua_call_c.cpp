#include "common/H_lua_call_c.h"
#include "log/HLog.h"


//Singleton
static H_lua_call_c* _mCGameCommonLuaToCInstance = NULL;
H_lua_call_c::H_lua_call_c(void)
{

}

H_lua_call_c::~H_lua_call_c(void)
{
	delete _mCGameCommonLuaToCInstance;
	_mCGameCommonLuaToCInstance = NULL;
}

H_lua_call_c* H_lua_call_c::getInstance()
{
	if(!_mCGameCommonLuaToCInstance)
	{
		_mCGameCommonLuaToCInstance = new H_lua_call_c();
		_mCGameCommonLuaToCInstance->init_();
	}
	return _mCGameCommonLuaToCInstance;
}

bool H_lua_call_c::init_()
{
	return true;
}


//¥Ú”°»’÷æ
void H_lua_call_c::log(const int& type, const string& content)
{
	HStruct_Log l;
	l.t = type;
	l.content = content;
	HLog::log(l);
}
