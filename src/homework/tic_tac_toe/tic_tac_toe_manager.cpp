#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
#include <iostream>
using std::cout;

//Base(std::unique_ptr<Base> n)
//    : next(std::move(n)) {}
//cpp 
void TicTacToeManager::save_game(std::unique_ptr<Game> &b)
{
	update_winner_count(b->get_winner());
	games.push_back(std::move (b));

}

void TicTacToeManager::get_winner_total(int & x, int & o, int & t)
{
	o = o_win;
	x = x_win;
	t = ties;
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
	for (auto& game: manager.games)
	{
		out << *game << "\n";
		std::string w = game->get_winner();
		out << "\n";
		out << "the winner is: " << w << "\n"; 
	}

	out << "\n";
	out << "X has won, " << manager.x_win << "times." << "\n";
	out << "O has won, " << manager.o_win << "times." << "\n";
	out << manager.ties << " ties." << "\n";


	// TODO: insert return statement here
	return out;
}
