// textgame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "grid.h"

#include <iostream>

int main()
{
	Grid gamespace('.');
	gamespace.Print();

	std::cout << "BREAK" << std::endl;

	gamespace.PutChar(10, 10, 'x');
	gamespace.Print();

#ifdef _DEBUG
	system("pause"); 
#endif
    return 0;
}

