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
    system("cls");
	//----------------------------------------------------------------------------------------
	cout << "\033[36m"; cout << "****** Tu es actuellement dans Player::PlaceBoats() ********"; cout << "\033[0m"; cout << "" << endl;
	//----------------------------------------------------------------------------------------
    m_instanceBoardBoat.Print();

    for (int boat = 0; boat <= 5; boat++)//Boucle permettant le decompte des bateaux 
    {
        //Creer un bateau de x taille sur le board a (0;0)
        for (int sizeBoat = 0; sizeBoat < m_BoatsArray[boat]; sizeBoat++) 
        {
            m_instanceBoardBoat.SetCase(0, sizeBoat, 'B');
        }
        system("cls");
        m_instanceBoardBoat.Print();

        cout << "Deplace ton bateau B #" << boat+1 
        << " avec WASD puis presse 'o' lorsque tu as fini" << endl;
        cout << "~ = Case libre" << endl;
        cout << "B = Bateau" << endl;

        m_boatPlaced = false;
        

        while (!m_boatPlaced)
        {
            int dirI = 0;
            int dirJ = 0;
            int projectedI = m_boatI;
            int projectedJ = m_boatJ;

            if (_kbhit()) // _kbhit() = detect si y'a unw touche appuyee sur le clavier
            {
                char c = _getch();
                if (c == 'w') // _getch() = prend le character qui a été appuyé sur le clavier
                {
                    /*for (int sizeBoat = 0; sizeBoat < m_BoatsArray[boat]; sizeBoat++)
                    {
                        m_instanceBoardBoat.SetCase(m_boatI, m_boatJ + sizeBoat, '~');
                        //On met une vague sur chaque case du bateau
                    }

                    m_boatI--;

                    for (int sizeBoat = 0; sizeBoat < m_BoatsArray[boat]; sizeBoat++)
                    {
                        m_instanceBoardBoat.SetCase(m_boatI, m_boatJ + sizeBoat, 'B');
                        //On met un B sur chaque case du bateau
                    }

                    system("cls");
                    m_instanceBoardBoat.Print();*/
                    //MoveBoatInsideBoard(boat, -1, 0);
                    projectedI--;
                    dirI = -1;
                }
                if (c == 'a')
                {
                    /*for (int sizeBoat = 0; sizeBoat < m_BoatsArray[boat]; sizeBoat++)
                    {
                        m_instanceBoardBoat.SetCase(m_boatI, m_boatJ + sizeBoat, '~');
                        //On met une vague sur chaque case du bateau
                    }

                    m_boatJ--;

                    for (int sizeBoat = 0; sizeBoat < m_BoatsArray[boat]; sizeBoat++)
                    {
                        m_instanceBoardBoat.SetCase(m_boatI, m_boatJ + sizeBoat, 'B');
                        //On met un B sur chaque case du bateau

                    }
                    system("cls");
                    m_instanceBoardBoat.Print();
                    */
                    //Check si tu es contre la border
                    projectedJ--;
                    dirJ = -1;
                }
                if (c == 's')
                {
                    /*
                    for (int sizeBoat = 0; sizeBoat < m_BoatsArray[boat]; sizeBoat++)
                    {
                        m_instanceBoardBoat.SetCase(m_boatI, m_boatJ + sizeBoat, '~');
                        //On met une vague sur chaque case du bateau
                    }

                    m_boatI++;

                    for (int sizeBoat = 0; sizeBoat < m_BoatsArray[boat]; sizeBoat++)
                    {
                        m_instanceBoardBoat.SetCase(m_boatI, m_boatJ + sizeBoat, 'B');
                        //On met un B sur chaque case du bateau

                    system("cls");
                    m_instanceBoardBoat.Print();
                    }*/
                    projectedI++;
                    dirI = +1;
                    //if vertical ajouter longueur bateau
                    //MoveBoatInsideBoard(boat, 1, 0);
                }
                if (c == 'd')
                {
                   //MoveBoatInsideBoard(boat, 0, +1);
                    projectedJ += m_BoatsArray[boat]+1;
                    dirJ = +1;
                }

                if (m_instanceBoardBoat.IsValidCase(projectedI, projectedJ))
                {
                    MoveBoatInsideBoard(boat, dirI, dirJ);
                }

                if (c == 'o')
                {
                    //Bateau placed
                    m_boatPlaced = true;
                    m_instanceBoardBoat.SaveBoatLocation(m_boatI, m_boatJ, m_boatI, m_boatJ);
                    m_boatI = 0;
                    m_boatJ = 0;

                }
            }
        }
    }
}



void Player::MoveBoatInsideBoard(int currentPlacingBoat, int dirI, int dirJ)
{
    for (int sizeBoat = 0; sizeBoat < m_BoatsArray[currentPlacingBoat]; sizeBoat++)
    {
        m_instanceBoardBoat.SetCase(m_boatI, m_boatJ + sizeBoat, '~');
        //On met une vague sur chaque case du bateau
    }

    m_boatI += dirI;
    m_boatJ += dirJ;

    for (int sizeBoat = 0; sizeBoat < m_BoatsArray[currentPlacingBoat]; sizeBoat++)
    {
        m_instanceBoardBoat.SetCase(m_boatI, m_boatJ + sizeBoat, 'B');
        //On met un B sur chaque case du bateau
    }

    system("cls");
    m_instanceBoardBoat.Print();
}



