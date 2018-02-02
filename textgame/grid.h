#pragma once

#include <iostream>
#include <assert.h>
#include "vec2.h"

class Grid
{
public:
	Grid(char default_char); // constructor
	Grid() { Fill('-'); }; // Default constructor: default to using dashes for blank

	void Print() const;
	void Fill(char c);
	void PutChar( const int x, const int y, const char c );
	void PutChar( const Vec2& pos, const char c);

private:
	static constexpr int w = 32; // sized grid
	static constexpr int h = 16; 

	// table of sg i t s!
	char universe[w][h];
};