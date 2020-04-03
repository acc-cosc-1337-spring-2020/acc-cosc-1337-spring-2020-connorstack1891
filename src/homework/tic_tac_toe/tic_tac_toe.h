#include <string>
#include <vector>
#include <iostream>


class Game
{
public:
	bool game_over();

	void start_game(std::string first_player);

	void mark_board(int position);

	std::string get_player()const { return player; }

	void display_board()const;
	
	std::string get_winner();



private:

	void set_next_player();

	bool check_board_full();

	void clear_board();

	std::string player;

	std::vector < std::string> pegs{ 9, " " };

	bool check_column_win();

	bool check_row_win();

	bool check_diagonal_win();

	void set_winner();

	std::string winner;
};


class Error
{
public:
	Error(std::string msg) : message{ msg } {}

	std::string get_message()const { return message; }

private:
	std::string message;
};