#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test can't call mark board before game start.")
{
	Game g;
	REQUIRE_THROWS_AS(g.mark_board(1), Error);
}
TEST_CASE("Test start game accepts only X or O")
{
	Game g;
	REQUIRE_THROWS_AS(g.start_game("W"), Error);
}
TEST_CASE("Test set first player to X")
{
	Game g;
	g.start_game("X");
	REQUIRE(g.get_player() == "X");
}
TEST_CASE("Test set first player to O")
{
	Game g;
	g.start_game("O");
	REQUIRE(g.get_player() == "O");
}
TEST_CASE("Test start game with X flow")
{
	Game g;
	g.start_game("X");
	REQUIRE(g.get_player() == "X");
	g.mark_board(4);
	REQUIRE(g.get_player() == "O");
}
TEST_CASE("Test start game with O flow")
{
	Game g;
	g.start_game("O");
	REQUIRE(g.get_player() == "O");
	g.mark_board(2);
	REQUIRE(g.get_player() == "X");
}
TEST_CASE("Test game ends when board is full")
{
	Game g;
	g.start_game("X");
	for (int i = 1; i < 9; ++i)
	{
		g.mark_board(i);
		REQUIRE(g.game_over() == false);
	}

	g.mark_board(9);
	REQUIRE(g.game_over() == true);

}