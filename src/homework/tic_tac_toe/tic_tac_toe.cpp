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
	if (position >= 1 && position <= 9)
	{

	}
	else if (position < 1 || position > 9)
	{
		throw Error("Position must be 1-9");
	}
	else if(player == "")
	{
		throw Error("Must start game first.");
	}
	
	pegs[position - 1] = player;
	if (game_over() == false)
	{
		set_next_player();
	}

	/*
	check_column_win();
	check_row_win();
	check_diagonal_win();
	set_winner();
	*/
}

/*
void Game::display_board() const
{
	for (int i = 0; i < 9; i += 3)
	{
		cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
	}

}
*/
/*
std::string Game::get_winner()
{
	return player;
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
		winner = 'X';
	}
	else if (player == "O")
	{
		winner = 'O';
	}
}


std::ostream & operator<<(std::ostream & out, const Game & g)
{
	for (int i = 0; i < 9; i += 3)
	{
		out << g.pegs[i] << "|" << g.pegs[i + 1] << "|" << g.pegs[i + 2] << "\n";
	}
	return out;
	// TODO: insert return statement here
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
	// TODO: insert return statement here
}



