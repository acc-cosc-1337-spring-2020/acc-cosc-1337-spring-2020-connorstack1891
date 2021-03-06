//h
#include "tic_tac_toe.h"
//include <iostream>
#ifndef MANAGER_H
#define MANAGER_H
#include <memory>
#include "tic_tac_toe_data.h"


class TicTacToeManager 
{
public:
	TicTacToeManager() = default;

	void save_game(std::unique_ptr<Game> &b);

	friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager & manager);

	void get_winner_total(int& o, int& w, int& t);

	//~TicTacToeManager();

private:

	std::vector<std::unique_ptr<Game>>games{}; 
	
	int x_win{ 0 };
	int o_win{ 0 };
	int ties{ 0 };
	void update_winner_count(std::string winner);
	
};

#endif

//std::vector<std::reference_wrapper<Game>> games;