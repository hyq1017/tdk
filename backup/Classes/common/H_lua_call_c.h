#pragma once

#include "cocos2d.h"
#include "common/HDefine.h"

USING_NS_CC;



class H_lua_call_c : public Ref
{

public:

	H_lua_call_c(void);
	~H_lua_call_c(void);

	//Singleton
	static H_lua_call_c* getInstance();

	//init lua_State 
	bool init_();
	//��ӡ��־
	void log(const int& type, const string& content);
	
private:

	//messages notify sta ��Ϣ�ַ�״̬
	int _notifyState;

};

