#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>

using std::cout; using std::cin;

int main()
{
	std::string option = "Y";
	TicTacToeManager manager;
	do
	{
		std::string first_player = "X";

		bool winner = true;
		int x;
		int o;
		int t;


		Game game;

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


/*
int main()
{
	Game game;
	std::string first_player;
	int position;
	char next;
	int init{};

	cout << "First player. Pick 'X' or 'O'"<< "\n";
	cin >> player;

	do
	{
		try
		{
			game.start_game(first_player);
			//init = 1;
			do
			{
				cout << "Mark the position(1-9) that you would like to take: " << "\n";
				cin >> position;
				try
				{
					game.mark_board(position);
					//game.display_board();

				}
				catch (Error markboard)
				{
					cout << markboard.get_message() << "\n";
					//init = 1;
				}

				cout << "next turn? Y to continue..." << "\n";
				cin >> next;

			} while (next == 'y' && next == 'Y');
		}
		catch (Error e)
		{
			cout << e.get_message() << "\n";
			cout << "First player. Pick 'X' or 'O'" << "\n";
			cin >> first_player;
			init = 0;
		}
	} while (first_player != "O" || first_player != "X");

	*/