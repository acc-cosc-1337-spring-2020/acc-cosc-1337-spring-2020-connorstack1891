//
#include<iostream>
#include "arr_functions.h"
//define iterate_array and loop through with ++ increment
using namespace std;

void iterate_array(int * hours, const int SIZE)
{
	for (int i = 0; i < SIZE; ++i)
	{
		cout << hours[i] << "\n";
	}
}
