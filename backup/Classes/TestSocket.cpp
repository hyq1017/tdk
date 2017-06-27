#include "TestSocket.h"
#include "manager/HNetworkManager.h"
#include "protocol/AccessMsg.h"
#include "common/HCommon.h"

CCScene* TestSocket::scene()
{
	CCScene *scene = NULL;
	do 
	{
		scene = CCScene::create();
		CC_BREAK_IF(!scene);

		CCLayer *pLayer = TestSocket::create();
		CC_BREAK_IF(!pLayer);
		scene -> addChild(pLayer);
	} while (0);
	return scene;
}

bool TestSocket::init()
{
	bool bRet = false;
	do 
	{
		CC_BREAK_IF(!CCLayer::init());
		
		initTestSocket();

		return true;
	} while (0);
	return bRet;
}

void TestSocket:: initTestSocket()
{
	CCSize size = CCDirector::sharedDirector()->getVisibleSize();

	CCSprite *sp = CCSprite::create("HelloWorld.png");
	sp -> setPosition(Vec2(size.width/2,size.height/2));
	addChild(sp);

	CCLabelTTF*labelHello = CCLabelTTF::create("send a", LabelFontType, LabelFontSize);
	labelHello->setColor(Color3B::BLUE);
	CCLabelTTF*labelWorld = CCLabelTTF::create("send b", LabelFontType, LabelFontSize);
	labelWorld->setColor(Color3B::BLUE);
	CCMenuItemLabel* itemHello = CCMenuItemLabel::create(labelHello, this, menu_selector(TestSocket::HelloFun));
	CCMenuItemLabel* itemWorld = CCMenuItemLabel::create(labelWorld, this, menu_selector(TestSocket::WorldFun));
	itemHello -> setPosition(Vec2(70, 200));
	itemWorld -> setPosition(Vec2(400, 200));

	CCMenu *menu = CCMenu::create();
	menu -> setPosition(Vec2(0, 0));
	menu->addChild(itemHello);
	menu->addChild(itemWorld);
	addChild(menu);

	HNetworkManager::Instance()->start();
}

void TestSocket::HelloFun(CCObject* obj)
{

	LoginReq req_login;
	req_login.set_username("sb 3");
	req_login.set_password("123");
	const int byte_size = req_login.ByteSize();
	char *buff = new char[byte_size];
	req_login.SerializeToArray(buff, byte_size);

	Request req;
	req.head.type = MSG_TYPE_ACCESS;
	req.head.len = byte_size + MSG_ID_SIZE;
	req.id = MSG_ID_REGIST_REQ;
	req.body = new char[byte_size];
	memcpy(req.body, buff, byte_size);

	HNetworkManager::Instance()->send_msg(req);

	delete[] buff;
}

void TestSocket::WorldFun(CCObject* obj)
{
	HCommon::toast("hello");
	HNetworkManager::Instance()->end();
	HNetworkManager::Instance()->start();
}

void TestSocket::onEnter()
{
	CCLayer::onEnter();
}
void TestSocket::onExit()
{
	CCLayer::onExit();
}

int TestSocket::sendMessage( std::string body,std::string cmd )
{
	CCLOG("sendMessage");
	return 0;

}