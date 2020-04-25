//cpp
#include "tic_tac_toe.h"
#include <iostream>
using std::cout;


bool Game::game_over()
{
	if (check_column_win() == true || check_diagonal_win() == true || check_row_win() == true)
	{
		set_winner();
		return true;
	}
	else if (check_board_full() == true)
	{
		winner = 'c';
		return true;
	}
	else
	{
		return false;
	}
}

void Game::start_game(std::string first_player)
{
	if (first_player == "X" || first_player == "O")
	{
		player = first_player;
		
	}
	else
	{
		throw Error("Invalid entry. Must be O or X");
	}

	//clear_board();
		
}

void Game::mark_board(int position)
{
	if (position < 1 || position > 9 && pegs.size() == 9)
	{
		throw Error("Position must be 1-9");
	}
	if (position < 1 || position > 16 && pegs.size() == 16)
	{
		throw Error("Position must be 1-16");
	}
	else if(player == "")
	{
		throw Error("Must start game first.");
	}
	
	pegs[position - 1] = player;
	set_next_player();
}

void Game::set_next_player()
{
	if (player == "O")
	{
		player = "X";
	}
	else if (player == "X")
	{
		player = "O";
	}
}

bool Game::check_board_full()
{
	for (std::size_t i=0; i < pegs.size(); i++)
	{
		if (pegs[i] == " ")
		{
			return false;
		}
	}
	return true;
}


void Game::clear_board()
{
	for (auto &peg : pegs)
	{
		peg = " ";
	}
}

bool Game::check_row_win()
{
	
	return false;
}

bool Game::check_column_win()
{
	
	return false;
}

bool Game::check_diagonal_win()
{
	
	return false;
}

void Game::set_winner()
{
	if (player == "X")
	{
		winner = "O";
	}
	else 
	{
		winner = "X";
	}
}


std::ostream & operator<<(std::ostream & out, const Game & t)
{
	for (std::size_t i = 0; i < t.pegs.size(); i += sqrt(t.pegs.size()))
	{
		out << t.pegs[i] << "|" << t.pegs[i + 1] << "|" << t.pegs[i + 2];

		if (t.pegs.size() == 16)
		{
			out << "|" << t.pegs[i + 3];
		}

		out << "\n";
	}
	return out;
	
}

std::istream & operator>>(std::istream & in, Game & g)
{
	try
	{
		int position;
		cout << "\n" << "Mark the position(1-9) that you would like to take: " << "\n";
		in >> position;
		cout << "\n";
		g.mark_board(position);
		cout << "\n";
	}
	catch (Error err)
	{
		cout << err.get_message() << "\n";
	}
	return in;
	
}



