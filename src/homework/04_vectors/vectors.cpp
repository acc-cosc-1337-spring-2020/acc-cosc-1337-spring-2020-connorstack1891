#include "vectors.h"
#include <iostream>
#include <vector>

using std::cout;

/*
Write a value return function get_max_from_vector with a const reference 
vector of intsparameter that returns the max value in a vector

@param numbers is a const reference to a vector of integers
@return the max value in the vector
*/

int get_max_from_vector(const std::vector<int> &nums)
{
	int max = nums[0];
	
	for (int i = 0; i < nums.size() - 1 ; ++i)
		if (nums[i] > max)
		{
			max = nums[i];
		}
		
	return max;
}

/*
Write a function named is_prime with an integer parameter that
given a number returns true if prime or false if not prime

@param number: Any whole number
@return: bool if prime False if not
*/

bool is_prime(int number)
{
	if (number > 0)
	{
		bool flag = true;
		for (int i = 2; i < number - 1 / 2; ++i)

		{
			if (number % i == 0)
			{
				flag = false;
				break;
			}
		}
		return flag;
	}
	else if (number <= 0)
	{
		return false;
	}
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
std::vector<int> vector_of_primes(int number)
{
	if (number > 0)
	{
		std::vector<int>primeList = {};

		for (int i = 2; i < number; ++i)
		{
			if (is_prime(i) == true)
			{
				primeList.push_back(i);
			}
		}
		return primeList;
	}
	else if (number <= 0)
	{
		cout << "ERROR...";
	}
}