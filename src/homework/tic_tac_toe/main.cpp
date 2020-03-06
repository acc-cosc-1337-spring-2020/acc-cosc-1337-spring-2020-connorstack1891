#include "tic_tac_toe.h"
#include <iostream>

using std::cout; using std::cin;

int main() 
{
	Game game;
	std::string first_player;
	cout << "First player. Pick 'X' or 'O'";
	cin >> first_player;
	game.start_game(first_player);

	

	

	return 0;
}