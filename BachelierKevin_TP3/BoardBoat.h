#pragma once
#include <vector>

using std::vector;

class BoardBoat
{
public :
	void Init();
	void Print();
	void SetCase(int i, int j, char token);
	void SaveBoatLocation(int i1, int j1, int i2, int j2);


private:
	//Tableau
	vector<vector<char>> m_boardBoat;



};

