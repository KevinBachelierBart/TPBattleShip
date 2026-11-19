#pragma once
#include <vector>
using std::vector;

class BoardAttack
{
public:
	void Init();
	void Print();

private:
	vector<vector<char>> m_boardAttack;

};

