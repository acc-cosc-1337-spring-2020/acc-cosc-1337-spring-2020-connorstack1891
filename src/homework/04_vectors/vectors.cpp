#include "vectors.h"
#include <iostream>

using std::cout;

/*
Write a value return function get_max_from_vector with a const reference 
vector of intsparameter that returns the max value in a vector

@param numbers is a const reference to a vector of integers
@return the max value in the vector
*/

int get_max_from_vector(const std::vector<int> &nums)
{
	int i = nums[0];
	int largest = nums[i];
	for (int i = 0; i < 6 ; ++i)
		if (nums[i] > largest)
		{
			largest = nums[i];
		}
	return largest;
}

/*
Write a function named is_prime with an integer parameter that
given a number returns true if prime or false if not prime

@param number: Any whole number
@return: bool if prime False if not
*/

bool is_prime(int number)
{
	bool flag = true;
	for (int i = 2; i <= number / 2; ++i)
	{
		if (number % i == 0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}


/*
Write a a function named vector_of_primes with an integer parameter
that given a number returns all the prime numbers up to the number

Example given number 10 returns a vector with elements 2,3,5,7,

@param int integer value
@return vector of ints containing prime values up to a value

Make sure to use the is_prime function to determine if current 
number is prime.
*/
int vector_of_primes(int number)
{

	return 0;
}