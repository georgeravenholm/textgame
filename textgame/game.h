#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <random>

#include <chrono>

#include "grid.h"
#include "clock.h"

class Game
{
public:
	Game();
	void Init();
	void Draw();
	void Update();
private:
	Grid gamespace = Grid('.'); // create grid
	Clock clk;
	

	//////////// GAME-SPECIFIC ///////////
	std::default_random_engine Generator;
	std::uniform_int_distribution<int> dist_x;
	std::uniform_int_distribution<int> dist_y;

	float timer;
};