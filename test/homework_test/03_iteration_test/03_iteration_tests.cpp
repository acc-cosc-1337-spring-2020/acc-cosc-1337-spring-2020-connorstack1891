#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"dna.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Check the content accuracy")
{
	REQUIRE(get_gc_content("ACGT") == .5);
}
TEST_CASE ("Test the reverse")
{
	REQUIRE(get_dna_complement("ACGT") == "ACGT");
}