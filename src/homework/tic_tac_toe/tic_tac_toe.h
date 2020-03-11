#include <string>
#include <vector>
#include <iostream>


class Game
{
public:
	void start_game(std::string first_player);

	void mark_board(int position);

	std::string get_player()const;

	bool game_over();

	void display_board()const;

private:
	void set_next_player();

	std::string player;

	std::vector < std::string> pegs{ 9, " " };

	bool check_board_full();

	void clear_board();
};


class Error
{
public:
	Error(std::string msg) : message{ msg } {}

	std::string get_message()const { return message; }

private:
	std::string message;
};