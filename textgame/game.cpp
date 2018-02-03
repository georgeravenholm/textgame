#include "stdafx.h"
#include "game.h"



Game::Game()
	:
	dist_x(0, 31), // init random sgits
	dist_y(0, 15)
{
}

void Game::Init()
{
	timer = clk.CurTime();
}

void Game::Update()
{
	clk.DeltaTime();

	if (clk.CurTime() - timer > 1.0f)
	{
		gamespace.PutChar(dist_x(Generator), dist_y(Generator), '*');
		gamespace.PutChar(Vec2{ 0.0f,0.0f }, '&');
		timer = clk.CurTime();
	}
}

void Game::Draw()
{
	gamespace.Print();
	std::cout << "curtime: " << clk.CurTime() << std::endl;
	std::cout << "deltatime: " << clk.DeltaTime() << std::endl;
	//system("pause");
}