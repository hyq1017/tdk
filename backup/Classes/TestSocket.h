#pragma once

#include "cocos2d.h"
//#include "SocketCommon.h"


using namespace cocos2d;

#define LabelFontType "ArialMT"
#define LabelFontSize 30

class TestSocket:public CCLayer
{
public:
	static CCScene *scene();
	virtual bool init();
	CREATE_FUNC(TestSocket);
	virtual void onEnter();
	virtual void onExit();

	void HelloFun(CCObject* obj);
	void WorldFun(CCObject* obj);
	void TestSocket:: initTestSocket();
	int sendMessage( std::string body,std::string cmd );

};