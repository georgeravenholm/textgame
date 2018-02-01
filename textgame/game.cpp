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
}

void Game::Draw() const
{
	gamespace.Print();
	system("pause");
}

void Game::Update()
{
	gamespace.PutChar(dist_x(Generator), dist_y(Generator), '*');
}
