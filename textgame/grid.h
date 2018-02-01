#pragma once

class Grid
{
public:
	void Print() const;
	void PutChar( const char c );

private:
	static constexpr int w = 128; // 64x128 grid
	static constexpr int h = 64; // 64x128 grid

	// table of sg i t s!
	char universe[w][h];
};