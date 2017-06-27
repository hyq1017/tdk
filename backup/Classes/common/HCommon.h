#pragma once

#include <string>
using namespace std;

class HCommon
{
public:

public:
	HCommon() {}
	~HCommon() {}
	//toast 提示 自动 添加到 current scene上，提示后remove
	static void toast(const string& content);
	//重启脚本
	static void reload_script();
};

