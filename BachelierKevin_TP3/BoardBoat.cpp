#include <iostream>
#include "BoardBoat.h"

using std::cout;
using std::endl;


//LOGIC BOARD 10x10
void BoardBoat::Init() //Creation d un tableau de 2 vectors
{
	for(int i = 0; i < 10; i++)
	{
		m_boardBoat.push_back(vector<char>());

		for (int j = 0; j < 10; j++) 
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
			if (m_boardBoat[i][j] == 'B')
				cout << "\033[38;5;208m";

			if (m_boardBoat[i][j] == '~')
				cout << "\033[34m";

			/*if (m_boardBoat[i][j] == 'O')
				cout << "\033[36m";*/


			cout << m_boardBoat[i][j];

			cout << "\033[0m";
			cout << " | ";


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

bool BoardBoat::IsValidCase(int iChecked, int jChecked)
{
	if(!IsInsideBoard(iChecked, jChecked))
	{
		return false;
	}

	return true;

	//if (m_boardBoat[iChecked][jChecked] != 'B')
	//{
	//	//cout << "Tu as checke" << iChecked << "|" << jChecked << " et elle est libre" << endl;
	//	return true;//Case is free
	//}

	//return false;
	
}

bool BoardBoat::IsInsideBoard(int iChecked, int jChecked)
{
	//check quand tu peux pas y aller
	if (iChecked > m_boardBoat.size() || iChecked < 0)// si iChecked >= m_boardBoat.size()
	{
		return false;//tu es a l'ext du board
	}
	if (jChecked > m_boardBoat[iChecked].size() || jChecked < 0)
	{
		return false;//tu es a l'ext du board
	}

	return true;

}
