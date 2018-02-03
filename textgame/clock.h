#pragma once

#include <chrono>

class Clock
{
public:
	Clock();
	float CurTime();
	float DeltaTime();
private:
	std::chrono::time_point<std::chrono::steady_clock> startoftime;
	std::chrono::time_point<std::chrono::steady_clock> deltatime;
	
};