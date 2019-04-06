// Earth.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include "Execute.h"

using namespace std;

int main()
{
	sf::Music music;
	music.openFromFile("music.ogg");
	music.setLoop(true);
	music.play();

	execute();

	return 0;
}