#include <iostream>
#include "Board.h"

using std::cout;
using std::endl;


//LOGIC BOARD 10x10
void Board::Init() //Creation d un tableau de 2 vectors
{
	for(int i = 0; i < 11; i++)
	{
		m_board.push_back(vector<char>());

		for (int j = 0; j < 11; j++) 
		{
			m_board[i].push_back(' ');
		}
	}
	
	//m_board
}

void Board::Print()//Ce tableau se printera pas sans le Init 
{

	cout << "==============================================" << endl;
	for (int j = 0; j < m_board.size(); j++)
	{
		cout << " " << j << "  ";
	}
	cout << endl;
	for (int i = 0; i < m_board.size(); i++) 
	{
		cout << "| ";
		for (int j = 0; j < m_board[i].size(); j++)
		{
			cout << m_board[i][j] << " | ";

		}
		cout << endl << "|-------------------------------------------|" << endl;
	}

}

