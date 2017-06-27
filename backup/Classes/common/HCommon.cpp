#include "common/HCommon.h"
#include "cocos2d.h"
#include "CCLuaEngine.h"


using namespace cocos2d;

#define LabelFontType "ArialMT"
#define LabelFontSize 30


//toast 提示
void HCommon::toast(const string& content)
{
	//获取当前场景
	auto current_scene = Director::getInstance()->getRunningScene();
	if (current_scene == nullptr)
	{
		return;
	}
	auto img = Sprite::create("common/img_bg_toast.png");
	if (img)
	{
		auto winsize = Director::getInstance()->getWinSize();
		img->setPosition(Vec2(winsize.width/2, winsize.height/2));
		auto contentsize = img->getContentSize();
		auto label = LabelTTF::create(content, LabelFontType, LabelFontSize);
		label->setColor(Color3B::WHITE);
		label->setPosition(Vec2(contentsize.width/2, contentsize.height/2));
		img->addChild(label);

		current_scene->addChild(img);
		//2s后remove
		auto seq = Sequence::create(DelayTime::create(2.0f),
									CallFunc::create([img]() {
										img->removeFromParentAndCleanup(true);
									}),
									nullptr);
		img->runAction(seq);
	}


}

//重启脚本
void HCommon::reload_script()
{
	CCLOG("[HCommon::reload_script]");

	auto engine = LuaEngine::getInstance();
	if (engine->executeScriptFile("src/main.lua"))
	{
		CCLOG("HCommon::reload_script error!!!");
	}
}