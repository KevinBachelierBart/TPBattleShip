#pragma once
#include "Board.h"

class Game
{
public:
	void Run();
	void Init();
	void Instruction();
	void Gameplay();

private :
	//Tableau de ma classe board
	Board m_classeBoard;//Pour print le board depuis Run()

	//Player choice
	char charPlayerTurn = ' ';
	bool playerTurn = false;

};

