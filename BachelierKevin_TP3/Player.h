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
	//Fonctions
	void MoveBoatInsideBoard(int currentPlacingBoat, int dirI, int dirJ);
	void CheckBordersBoard(int currentPlacingBoat);

	//Instances
	BoardBoat m_instanceBoardBoat;
	BoardAttack m_instanceBoardAttack;

	//Variables
	bool m_boatPlaced = false;
	int m_boatI = 0;//Position i
	int m_boatJ = 0;//position j

	//MyBoats
	// currentPlacing boat{0,1,2,3,4}
	int m_BoatsArray[5] = {5,4,3,3,2};
};

