#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <random>

#include <chrono>

#include <ctime>

#include "grid.h"
#include "clock.h"

#include "ent_teste.h"
#include "ent_trap.h"

#define NO_TRAPS 12

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
	
	////////// big ol game sgit ////////////
	EntTrap traps[NO_TRAPS];
};