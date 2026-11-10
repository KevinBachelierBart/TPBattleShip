#pragma once
#include <vector>

using std::vector;

class Board
{
public :
	void Init();

private:
	vector<vector<char>> m_board;
};

