#include <iostream>


#include "Game.h"

using std::cout;
using std::cin;
using std::endl;

void Game::Run()
{
	//----------------------------------------------------------------------------------------
	cout << "\033[36m";
	cout << "****** Tu es actuellement dans Game:: Gameplay() ********";
	cout << "\033[0m";
	cout << "" << endl;
	//----------------------------------------------------------------------------------------

	Init();
	

	cout << "Veux-tu jouer en premier ? ";
	cout << "\033[1;31m" << "o/n " << "\033[0m" << endl;
	cin >> charPlayerTurn;

	charPlayerTurn == 'o' ? playerTurn = true : playerTurn = false;
	//----------------------------------------------------------------------------------------
	cout << "\033[34m" << "playerTurn = " << playerTurn << "\033[0m";
	cout << "" << endl;
	//----------------------------------------------------------------------------------------

}

void Game::Init()
{
	//----------------------------------------------------------------------------------------
	cout << "\033[36m";
	cout << "****** Tu es actuellement dans Game:: Init() ********";
	cout << "\033[0m";
	cout << "" << endl;
	//----------------------------------------------------------------------------------------
	
	system("pause");
}