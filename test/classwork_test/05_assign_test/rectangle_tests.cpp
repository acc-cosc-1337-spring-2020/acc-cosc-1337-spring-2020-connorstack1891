#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"
#include "rectangle.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test area of rectangle 1")
{
	WannaBeSquare area(4, 5);
	REQUIRE(area.get_area() == 20);
}
TEST_CASE("Test area of rectangle 2")
{
	WannaBeSquare area(10, 10);
	REQUIRE(area.get_area() == 100);

}
TEST_CASE("Test area of rectangle 3")
{
	WannaBeSquare area(100, 10);
	REQUIRE(area.get_area() == 1000);
}