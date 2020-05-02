//h
#ifndef TTT3_H
#define TTT3_H
#include "tic_tac_toe.h"


class TicTacToe3 : public Game {

public:
	TicTacToe3(std::vector<string> p, string winner);
	TicTacToe3() : Game(3) {}

private:
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();

};

#endif // TTT_3