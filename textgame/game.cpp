#include "stdafx.h"
#include "game.h"
#include <windows.h>


Game::Game()
	:
	Generator(time(NULL)),
	dist_x(10, 31), // init random sgits
	dist_y(0, 15)
{
	// place traps
	for (int i = 0; i < NO_TRAPS; ++i)
		traps[i].SetPos(dist_x(Generator), dist_y(Generator));
}

void Game::Init()
{
	timer = clk.CurTime();

	
}

void Game::Update()
{
	float dt = clk.DeltaTime();
	gamespace.PutChar(Vec2{ 0.0f,0.0f }, '&');
	if (clk.CurTime() - timer > 1.0f)
	{
		gamespace.PutChar(dist_x(Generator), dist_y(Generator), '*');
		timer = clk.CurTime();
	}

	
}

void Game::Draw()
{
	//system("cls");
	gotoxy(0, 0);

	// traps
	for (int i = 0; i < NO_TRAPS; ++i)
		traps[i].Draw(gamespace);

	//std::cout << std::flush;
	gamespace.Print();
	std::cout << "curtime: " << clk.CurTime() << std::endl;
	std::cout << "deltatime: " << clk.DeltaTime() << std::endl;
	gamespace.Fill(BGChar);
	//system("pause");
}

void Game::gotoxy(short x, short y) {
	COORD pos = { x, y };
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(output, pos);
}