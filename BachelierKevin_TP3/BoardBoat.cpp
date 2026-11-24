#include <iostream>
#include "BoardBoat.h"

using std::cout;
using std::endl;


//LOGIC BOARD 10x10
void BoardBoat::Init() //Creation d un tableau de 2 vectors
{
	for(int i = 0; i < 11; i++)
	{
		m_boardBoat.push_back(vector<char>());

		for (int j = 0; j < 11; j++) 
		{
			m_boardBoat[i].push_back('~');
		}
	}
	

}

void BoardBoat::Print()//Ce tableau se printera pas sans le Init 
{
	cout << "====================BOATS BOARD======================" << endl;
	for (int j = 0; j < m_boardBoat.size(); j++)
	{
		cout << " " << j << "  ";
	}
	cout << endl;
	for (int i = 0; i < m_boardBoat.size(); i++)
	{
		cout << "| ";
		for (int j = 0; j < m_boardBoat[i].size(); j++)
		{
			cout << m_boardBoat[i][j] << " | ";

		}
		cout << endl << "|-------------------------------------------|" << endl;
	}
}

void BoardBoat::SetCase(int i, int j, char token)//Depose un token dans le tableau
{
	m_boardBoat[i][j] = token;
}

void BoardBoat::SaveBoatLocation(int iStart, int jStart, int iEnd, int jEnd)
{
	if(iStart == iEnd)//Boat is horizontal
	{
		for (int j = jStart; j <= jEnd; j++)
		{
			m_boardBoat[iStart][j] = 'B';
		}
	}
	else//Boat is vertical
	{
		for (int i = iStart; i <= iEnd; i++)
		{
			m_boardBoat[i][jStart] = 'B';
		}
	
	}
}


