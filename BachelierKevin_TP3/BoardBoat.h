#pragma once
#include <vector>

using std::vector;

class BoardBoat
{
public :
	void Init();
	void Print();
	void SetCase(int i, int j, char token);

private:
	//Tableau
	vector<vector<char>> m_boardBoat;



};

