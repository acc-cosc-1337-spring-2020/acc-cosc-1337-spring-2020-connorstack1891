//h
#include "tic_tac_toe.h"

class TicTacToeData : public Game
{
public:
	void save_games(const std::vector<std::unique_ptr<Game>>&games);
	std::vector<std::unique_ptr<Game>>get_games();
private:
	int data;
};