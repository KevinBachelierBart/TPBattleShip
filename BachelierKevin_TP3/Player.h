#pragma once
#include "BoardBoat.h"
#include "BoardAttack.h"

class Player
{
public :
	void InitPlayerBoard();
	void PrintBoards();
	void PlaceBoats();
	//Void Attack();
	// bool void HitAt(); Blesser Hurt


private :

	BoardBoat m_instanceBoardBoat;
	BoardAttack m_instanceBoardAttack;

	bool m_boatPlaced = false;
	int m_boatI = 0;
	int m_boatJ = 0;


};

