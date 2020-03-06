#include "tic_tac_toe.h"
#include <iostream>

using std::cout; using std::cin;

int main() 
{

	Game game;
	std::string first_player;
	std::string error;
	int position;
	char next;
	int init{ 0 };

	cout << "First player. Pick 'X' or 'O'"<< "\n";
	cin >> first_player;
	do
	{
		try
		{
			game.start_game(first_player);
		}
		catch (Error e)
		{
			cout << e.get_message() << "\n";
			cout << "First player. Pick 'X' or 'O'" << "\n";
			cin >> first_player;
			init = 1;
		}
	} while (init != 0 && first_player != "O" || first_player != "X");

	do
	{
		cout << "Mark the position(1-9) that you would like to take: " << "\n";
		cin >> position;
		try
			{
			game.mark_board(position);

		}
		catch (Error mb)
		{
			cout << mb.get_message() << "\n";

		}
		cout << "next turn? Y to continue..." << "\n";
		cin >> next;
		
	} while (init == 0 && next == 'y' || next == 'Y' && first_player == "X" || first_player == "O");

	return 0;
}