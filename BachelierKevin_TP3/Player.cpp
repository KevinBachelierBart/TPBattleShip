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
    system("cls");
    m_instanceBoardBoat.Print();

    for (int boat = 0; boat <= 5; boat++) 
    {
        cout << "Deplace ton bateau #" << boat+1 
        << " avec WASD puis presse 'o' lorsque tu as fini" << endl;

        while (!m_boatPlaced)
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
                    //Max pourquoi je fais pas une fonction de cette logique ???? 

                    m_instanceBoardBoat.SetCase(m_boatI, m_boatJ, '~');//On met une vague 
                                                                       //dans la case actuelle

                    m_boatJ++;//On avance J

                    m_instanceBoardBoat.SetCase(m_boatI, m_boatJ, 'B');//On met un B 
                                                                       //dans la case actuelle

                    system("cls");

                    m_instanceBoardBoat.Print();

                }

                if (c == 'o')
                {
                    //Bateau placed
                    m_boatPlaced = true;
                }
            }
        }
    }


    

	
	
	
	
	//Place manuellement
}
