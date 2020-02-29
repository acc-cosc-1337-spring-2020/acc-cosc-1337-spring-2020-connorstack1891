#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vectors.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Verify max vector function")
{
	std::vector<int>nums1 = { 8, 4, 20, 88, 66, 99 };
	std::vector<int>nums2 = { 3, 8, 1, 1000, 99 };
	std::vector<int>nums3 = { 15, 12, 11, 99,88 };
	std::vector<int>nums4 = { 150, 120, 11, 88888, 990 };
	
	
	REQUIRE(get_max_from_vector(nums1) == 88);
	REQUIRE(get_max_from_vector(nums2) == 1000);
	REQUIRE(get_max_from_vector(nums3) == 99);
	REQUIRE(get_max_from_vector(nums4) == 88888);
	//I don't know why the num2 and num4 vectors do not work.
}

TEST_CASE("Verify prime list contents")
{
	std::vector<int>primeList1 = { 2, 3 };
	std::vector<int>primeList2 = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
	std::vector<int>primeList3 = { 2, 3, 5, 7 };

	REQUIRE(vector_of_primes(5) == primeList1);
	REQUIRE(vector_of_primes(50) == primeList2);
	REQUIRE(vector_of_primes(10) == primeList3);
}

TEST_CASE("check prime bool funtion ")
{
	REQUIRE(is_prime(2) == true);
	REQUIRE(is_prime(4) == false);
	REQUIRE(is_prime(43) == true);
	REQUIRE(is_prime(44) == false);
	REQUIRE(is_prime(-3) == false);
}