//h
#ifndef TTT4_H
#define TTT4_H
#include "tic_tac_toe.h"

class TicTacToe4 : public Game {

public:
	TicTacToe4(std::vector<string> p, string winner);
	TicTacToe4() : Game(4) {}



private:
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();

};

#endif // TTT_4