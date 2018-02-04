#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <random>

#include <chrono>

#include "grid.h"
#include "clock.h"

#include "ent_teste.h"

class Game
{
public:
	Game();
	void Init();
	void Draw();
	void Update();
private:
	Grid gamespace = Grid(BGChar); // create grid
	Clock clk;

	void gotoxy(short x, short y);

	static constexpr char BGChar = '.';

	//////////// GAME-SPECIFIC ///////////
	std::default_random_engine Generator;
	std::uniform_int_distribution<int> dist_x;
	std::uniform_int_distribution<int> dist_y;

	float timer;
	
	////////// TESTE ////////////
	TestEntity blob;
};