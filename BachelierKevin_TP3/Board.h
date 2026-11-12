#pragma once
#include <vector>

using std::vector;

class Board
{
public :
	void Init();
	void Print();

private:
	//Tableau
	vector<vector<char>> m_board;



};

