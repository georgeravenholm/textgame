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

void Game::Update()
{
	gamespace.PutChar(dist_x(Generator), dist_y(Generator), '*');

	gamespace.PutChar(Vec2{ 0.0f,0.0f }, '&');
}

void Game::Draw() const
{
	gamespace.Print();
	system("pause");
}