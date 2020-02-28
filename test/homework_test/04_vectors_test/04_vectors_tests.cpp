#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vectors.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Verify max vector function")
{
	std::vector<int>nums = { 8, 4, 20, 88, 66, 99 };
	get_max_from_vector(nums);

	REQUIRE(get_max_from_vector(nums) == 88);
}

TEST_CASE("Verify prime list contents")
{
	std::vector<int>primeList1 = { 2, 3 };
	std::vector<int>primeList2 = { 2, 3, 5 };
	std::vector<int>primeList3 = { 2, 3, 5, 7 };

	REQUIRE(vector_of_primes(5) == primeList1);
	REQUIRE(vector_of_primes(7) == primeList2);
	REQUIRE(vector_of_primes(9) == primeList3);
}

TEST_CASE("check prime bool funtion ")
{
	REQUIRE(is_prime(4) == false);
	REQUIRE(is_prime(5) == true);
	REQUIRE(is_prime(100) == false);
	REQUIRE(is_prime(-3) == false);
}