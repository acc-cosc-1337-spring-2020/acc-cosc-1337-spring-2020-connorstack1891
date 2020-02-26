#include"vectors.h"
#include<vector>
#include<iostream>
using std::cout;
using std::cin;
/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	std::vector<int>nums = { 8, 4, 20, 88, 66, 99 };
	int init = 0;
	char cont = 'y';

	do
	{
		cout << "Enter 1 for 'Get Max' from vector and 2 for 'Get primes': " << "\n";
		cin >> init;
			if (init == 1)
			{
				get_max_from_vector(nums);
				cout << get_max_from_vector(nums) << "\n";
			}
			else if (init == 2)
			{

			}

	} while (init == 0 || cont == 'y');

	return 0;
}