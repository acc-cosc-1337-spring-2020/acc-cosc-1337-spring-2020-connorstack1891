//cpp
#include "tic_tac_toe.h"
#include <iostream>
using std::cout;


bool Game::game_over()
{
	return check_board_full();
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

	clear_board();
		
}

void Game::mark_board(int position)
{
	if (position >= 1 && position <= 9)
	{

	}
	else if (position < 1 || position > 9)
	{
		throw Error("Position must be 1-9");
	}
	if(player == "")
	{
		throw Error("Must start game first.");
	}
	
	pegs[position - 1] = player;

	return set_next_player();
}

void Game::display_board() const
{
	for (int i = 0; i < 9; i += 3)
	{
		cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
	}
}

std::string Game::get_winner()
{
	//std::string winner = winner();
	return std::string();
}

/*
std::string Game::get_player() const
{
	//return std::string(player);
}*/

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

bool Game::check_column_win()
{
	return false;
}

bool Game::check_row_win()
{
	return false;
}

bool Game::check_diagonal_win()
{
	return false;
}

void Game::set_winner()
{
}

