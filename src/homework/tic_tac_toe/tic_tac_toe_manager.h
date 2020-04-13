//h
#include "tic_tac_toe.h"
#include <iostream>
#ifndef MANAGER_H
#define MANAGER_H


class TicTacToeManager 
{
public:
	void save_game(const Game b);

	friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager & manager);

	void get_winner_total(int& o, int& w, int& t);

private:

	std::vector<Game>games{};
	int x_win{ 0 };
	int o_win{ 0 };
	int ties{ 0 };
	void update_winner_count(std::string winner);
};

#endif
