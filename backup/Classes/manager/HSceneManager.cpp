#include "manager/HSceneManager.h"
#include "log/HLog.h"

//Singleton
static HSceneManager* m_instance = nullptr;
HSceneManager::HSceneManager(void)
{
	m_instance = nullptr;
}

HSceneManager::~HSceneManager(void)
{
	delete m_instance;
	m_instance = nullptr;
}

HSceneManager* HSceneManager::Instance()
{
	if(!m_instance)
	{
		m_instance = new HSceneManager();
		m_instance->init();
	}
	return m_instance;
}

bool HSceneManager::init()
{
	return true;
}

void HSceneManager::switch_scene(const int& type)
{
	CCLOG("HSceneManager::switch_scene type:%d", type);

	Scene* scene = nullptr;
	switch (type)
	{
		case SCENE_LOGIN:
		{
		}break;
		case SCENE_HALL:
		{
		}break;
		case SCENE_GAME:
		{
		}break;
		default:
		{
		}
	}
	if (scene == nullptr)
	{
		HLog::log("scene is nullptr");
		return;
	}
	auto current_scene = Director::getInstance()->getRunningScene();
	if (current_scene)
	{
		Director::getInstance()->replaceScene(scene);
	}
	else
	{
		Director::getInstance()->runWithScene(scene);
	}
}



