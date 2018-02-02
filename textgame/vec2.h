#pragma once

struct Vec2
{
	float x;
	float y;

	bool operator ==(const Vec2& b) const
	{
		return x == b.x && y == b.y;
	}

	Vec2 operator +(const Vec2& b) const
	{
		return Vec2{ x + b.x,y + b.y };
	}

	Vec2 operator -(const Vec2& b) const
	{
		return Vec2{ x - b.x,y - b.y };
	}

	Vec2 operator *(const Vec2& b) const
	{
		return Vec2{ x * b.x,y * b.y };
	}

	void operator += (const Vec2& b)
	{
		x += b.x;
		y += b.y;
	}

	void operator -= (const Vec2& b)
	{
		x -= b.x;
		y -= b.y;
	}

	Vec2 Abs()
	{
		Vec2 temploc = Vec2{ x,y };
		if (temploc.x < 0) { temploc.x = -temploc.x; }
		if (temploc.y < 0) { temploc.y = -temploc.y; }
		return temploc;
	}

	Vec2 Component(const float f)
	{
		x *= f;
		y *= f;
	}


};