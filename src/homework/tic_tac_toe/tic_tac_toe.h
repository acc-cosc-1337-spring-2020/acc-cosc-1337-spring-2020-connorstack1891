#include <string>

class Game
{
public:
	void start_game(std::string first_player);

	void mark_board(int position);

	std::string get_player()const;


private:
	void set_next_player();

	std::string player;

};


class Error
{
public:
	Error(std::string msg) : message{ msg } {}

	std::string get_message()const { return message; }

private:
	std::string message;
};