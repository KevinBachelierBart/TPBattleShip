#pragma once
#include "BoardBoat.h"
#include "Player.h"

class Game
{
public:
	void Run();
	void Init();
	void PlayerChoice();
	void Gameplay();

private :
	//Tableau de ma classe Player
	Player m_instancePlayer;



	//Player choice
	char charPlayerTurn = ' ';
	bool playerTurn = false;

};

