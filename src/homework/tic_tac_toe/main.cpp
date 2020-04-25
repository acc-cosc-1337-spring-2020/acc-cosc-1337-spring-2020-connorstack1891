#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <iostream>

using std::cout; using std::cin;

int main()
{
	
	std::string option = "Y";
	TicTacToeManager manager;
	TicTacToe3();
	TicTacToe4();

	do
	{
		std::string first_player = "X";

		bool winner = true;
		int x;
		int o;
		int t;

		int type;
		cout << "Select type of game. 3 for a 3x3 board, 4 for a 4x4 board.  " << "\n";
		cin >> type;

		Game game(type);

		while (!(first_player == "X" || first_player == "O" || first_player == "x" || first_player == "o"));
		{
			try
			{
				cout << "Player one enter 'X' or 'O': ";
				cin >> first_player;
				game.start_game(first_player);
			}
			catch (Error e)
			{
				cout << e.get_message() << "\n";
			}
		}
		do {
			cin >> game;
			cout << game;

			winner = game.game_over();

		} while (winner == false);


		manager.save_game(game);
		cout << "\n";
		cout << game;
		cout << "\n";
		manager.get_winner_total(x, o, t);
		cout << "\n";
		cout << "The winner is " << game.get_winner() << "\n";

		cout << "Y to continue: " << "\n";
		cin >> option;
		cout << "\n";
	} while (option == "Y" || option == "y");

	cout << manager;

	return 0;
}


if game_type == 3
{
	game.pushback(game)
}
else if game_type == 4
{
	games.push_back
}