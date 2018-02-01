#include "stdafx.h"
#include "grid.h"

Grid::Grid(char default_char)
{
	Fill(default_char);
}

void Grid::Print() const // Print out all the chars in sexe grid
{
	for (int y = 0; y < h; ++y)
	{
		for (int x = 0; x < w; ++x)
		{
			std::cout << universe[x][y];
		}
		std::cout << std::endl; // newlines after each row
	}
}

void Grid::Fill(char c) // fills the whole grid with a character
{
	for (int y = 0; y < h; ++y)
		for (int x = 0; x < w; ++x)
		{
			PutChar(x, y, c);
		}
}

void Grid::PutChar(const int x, const int y, const char c)
{
	assert(x < w); // keep chars in line dude
	assert(y < h);
	universe[x][y] = c;
}
