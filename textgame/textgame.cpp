// textgame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

#include "game.h"

int main()
{
	Game videogame;

	videogame.Init();

	for (;;)
	{
		system("cls");
		videogame.Update();
		videogame.Draw();
	}
	
#ifdef _DEBUG
	system("pause"); 
#endif
    return 0;
}

