#pragma once
#include <vector>

using std::vector;

class BoardBoat
{
public :
	void Init();
	void Print();
	//2eme print pour coordonnes bateau car la logique
	//du superposage va etre un souci
	void SetCase(int i, int j, char token);
	void SaveBoatLocation(int i1, int j1, int i2, int j2);
	bool IsValidCase(int iChecked, int jChecked);


private:
	bool IsInsideBoard(int iChecked, int jChecked);
	
	//Tableau
	vector<vector<char>> m_boardBoat;


	
};

