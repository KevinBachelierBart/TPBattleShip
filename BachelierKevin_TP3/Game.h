#pragma once
#include "Board.h"

class Game
{
public:
	void Run();
	void Init();

private :
	//Tableau
	Board m_board;

	//Player choice
	char charPlayerTurn = ' ';
	bool playerTurn = false;

};

