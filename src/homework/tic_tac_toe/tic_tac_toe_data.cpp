#include "tic_tac_toe_data.h"
#include <fstream>	
#include <iostream>
using namespace std;
//cpp

void TicTacToeData::save_games(const std::vector<std::unique_ptr<Game>>& games)
{
	ofstream file("TicTacToe.txt");
	for (auto p : pegs)
	{
		file << p;
	} 
	file << endl;
	file << get_winner();
	file << endl;
	file.close();
}

std::vector<std::unique_ptr<Game>> TicTacToeData::get_games()
{
	std::vector<std::unique_ptr<Game>>boards;
	ifstream vectorFile("TicTacToe.txt");
	vector<string>pegs;
	vectorFile.close();
	return std::vector<std::unique_ptr<Game>>();
}
