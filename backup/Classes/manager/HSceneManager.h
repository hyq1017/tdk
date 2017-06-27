#pragma once
/*
����������
*/

#include "cocos2d.h"

using namespace cocos2d;
using namespace std;

class HSceneManager
{
public:
	enum {
		SCENE_HALL = 1,
		SCENE_LOGIN = 2,
		SCENE_GAME = 3,
	};
public:

	HSceneManager(void);
	~HSceneManager(void);
	static HSceneManager* Instance();
public:
	//��ת ����
	void switch_scene(const int& type);
	
private:
	bool init();
};

