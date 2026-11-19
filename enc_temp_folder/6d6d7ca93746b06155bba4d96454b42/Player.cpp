#include "Player.h"
#include <iostream>
#include "conio.h"
using namespace std;

using std::cout;
using std::cin;
using std::endl;

void Player::InitPlayerBoard() 
{
	m_instanceBoardBoat.Init();
	m_instanceBoardAttack.Init();

    m_instanceBoardBoat.SetCase(m_boatI, m_boatJ,'B');
}

void Player::PrintBoards() 
{
	m_instanceBoardAttack.Print();
	m_instanceBoardBoat.Print();
}

void Player::PlaceBoats() 
{
	//----------------------------------------------------------------------------------------
	cout << "\033[36m"; cout << "****** Tu es actuellement dans Player::PlaceBoats() ********"; cout << "\033[0m"; cout << "" << endl;
	//----------------------------------------------------------------------------------------
	cout << "Deplace ton bateau" << endl;
	
    while (true)
    {
        if (_kbhit()) // _kbhit() = detect si ya un touche appyuyer sur le clavier
        {
            char c = _getch();
            if (c == 'w') // _getch() = prend le charactere qui a été appuyé sur le clavier
            {
                cout << "w" << endl;
            }
            if (c == 'a')
            {
                cout << "a" << endl;
            }
            if (c == 's')
            {
                cout << "s" << endl;
            }
            if (c == 'd')
            {
                m_instanceBoardBoat.SetCase(m_boatI, m_boatJ, '~');
                
                m_boatJ++;

                m_instanceBoardBoat.SetCase(m_boatI, m_boatJ, 'B');
                
                system("cls");
                
                m_instanceBoardBoat.Print();

            }
        }
    }

	
	
	
	
	//Place manuellement
}
