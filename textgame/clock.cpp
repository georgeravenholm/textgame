#include "stdafx.h"
#include "clock.h"

using std::chrono::steady_clock;

Clock::Clock()
{
	startoftime,deltatime = steady_clock::now();
}

float Clock::CurTime()
{
	auto now = steady_clock::now();
	std::chrono::duration<float> duration = now - startoftime;
	return duration.count();
}

float Clock::DeltaTime()
{
	auto now = steady_clock::now();
	std::chrono::duration<float> duration = now - deltatime;
	deltatime = now;
	return duration.count();
}
