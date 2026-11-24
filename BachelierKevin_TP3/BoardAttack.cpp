#include <iostream>
#include "BoardAttack.h"

using std::cout;
using std::endl;

//LOGIC BOARD 10x10
void BoardAttack::Init() //Creation d un tableau de 2 vectors
{
	for (int i = 0; i < 11; i++)
	{
		m_boardAttack.push_back(vector<char>());

		for (int j = 0; j < 11; j++)
		{
			m_boardAttack[i].push_back(' ');
		}
	}
}

void BoardAttack::Print()//Ce tableau se printera pas sans le Init 
{
	cout << "==================ATTACK BOARD======================" << endl;
	for (int j = 0; j < m_boardAttack.size(); j++)
	{
		cout << " " << j << "  ";
	}
	cout << endl;
	for (int i = 0; i < m_boardAttack.size(); i++)
	{
		cout << "| ";
		for (int j = 0; j < m_boardAttack[i].size(); j++)
		{
			cout << m_boardAttack[i][j] << " | ";

		}
		cout << endl << "|-------------------------------------------|" << endl;
	}
}
