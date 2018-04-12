#include <iostream>
#include <ctime>
#include <cstdlib>

#include "Game.h"
#include "Squad.h"

Game::Game()
{
}

Game::~Game()
{
}

void Game::Run()
{
	srand(time(NULL));
	do
	{
		system("cls");
		std::cout << "Voici les choix disponibles:\n" <<
			"   -1 : Quitter le jeu\n" << 
			" Entrer votre choix: ";
		int choix = 0;
		std::cin >> choix;

		switch (choix)
		{
		case -1:
			return;
		}
	} while (true);
}
