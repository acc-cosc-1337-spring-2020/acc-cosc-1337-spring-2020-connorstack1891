#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
#include <iostream>
using std::cout;


//cpp 
void TicTacToeManager::save_game(const Game b)
{
	games.push_back(b);
	update_winner_count(b.get_winner());
}

void TicTacToeManager::get_winner_total(int & x, int & o, int & t)
{
	cout << "\n";
	cout << "X has won, " << x_win << "times." << "\n";
	cout << "O has won, " << o_win << "times." << "\n";
	cout << ties << " ties." << "\n";
}

void TicTacToeManager::update_winner_count(std::string winner)
{
	if (winner == "X")
	{
		x_win += 1;
	}
	else if (winner == "O")
	{
		o_win += 1;
	}
	else if (winner != "X" || winner != "O")
	{
		ties+= 1;
	}
}

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & manager)
{
	for (int i = 0; i < 9; i += 3)
	{
	//	out << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
	}

	

	// TODO: insert return statement here
	return out;
}
