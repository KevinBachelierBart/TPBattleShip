#include <iostream>;
#include "Game.h"//Accede au 


using std::cout;
using std::endl;


void main()
{
	cout << "\033[38;5;208m";
	cout << "|------------------------------------------------------------------|" << endl;
	cout << "|                              BATTLESHIP                          |" << endl;
	cout << "|------------------------------------------------------------------|" << endl;
	cout << "|                            KEVIN BACHELIER                       |" << endl;
	cout << "|------------------------------------------------------------------|" << endl;

	cout << "\033[0m";

	cout << "\033[32m";
	cout << "|------------------------------------------------------------------|" << endl;
	cout << "| Battleship est un jeu ou chaque joueur place ses bateaux sur une |" << endl;
	cout << "|     grille et doit deviner ou se trouvent ceux de son adversaire |" << endl;
	cout << "|      en lançant des tirs.Le but est de couler tous les bateaux   |" << endl;
	cout << "|                           adverses pour gagner !                 |" << endl;
	cout << "|------------------------------------------------------------------|" << endl;
	cout << "\033[0m";
	cout << "" << endl;
	


	Game myGameClass;
	myGameClass.Run();
}
