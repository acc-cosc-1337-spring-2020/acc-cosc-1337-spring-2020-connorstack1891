#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Letter Converter")
{
	REQUIRE(get_grade_points(4) == "A");
	REQUIRE(get_grade_points(3) == "B");
	REQUIRE(get_grade_points(2) == "C");
	REQUIRE(get_grade_points(1) == "D");
	REQUIRE(get_grade_points(0) == "F");
}
{
	REQUIRE(calculate_gpa(3, 12) == 4)
	REQUIRE(calculate_gpa(3, 9) == 3)
	REQUIRE(calculate_gpa(3, 6) == 2)
	REQUIRE(calculate_gpa(3, 3) == 1)
	REQUIRE(calculate_gpa(3, 0) == 0)
}