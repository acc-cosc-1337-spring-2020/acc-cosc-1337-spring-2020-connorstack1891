//cpp
#include "tic_tac_toe.h"

void Game::start_game(std::string first_player)
{
	if (first_player == "X" || first_player == "O")
	{
		player = first_player;
	}
	else
	{
		throw Error("Invalid entry. Must be O or X");
		//std::string error = first_player;
	}
		
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
	else
	{
		throw Error("Must contain some value...");
	}
	
	return set_next_player();
}

std::string Game::get_player() const
{

	return std::string(player);//maybe wrong.
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

