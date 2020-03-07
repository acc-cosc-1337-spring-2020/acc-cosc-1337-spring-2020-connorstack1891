#include "tic_tac_toe.h"
#include <iostream>

using std::cout; using std::cin;

int main() 
{

	Game game;
	std::string first_player;
	int position;
	char next;
	int init{};
	
	cout << "First player. Pick 'X' or 'O'"<< "\n";
	cin >> first_player;
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

				}
				catch (Error mb)
				{
					cout << mb.get_message() << "\n";
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
	//while (init != 0 first_player != "O" || first_player != "X");
	

	/* I COULDNT GET THESE TWO WHILE LOOPS TO WORK WITH EACH OTHER SO I STUFFED IT INSIDE THE OTHER ONE. THIS IS PROBABLY NOT THE BEST WAY...
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
			init = 1;
		}
		cout << "next turn? Y to continue..." << "\n";
		cin >> next;

	} while ( next == 'y' || next == 'Y');
	*/
	return 0;
}