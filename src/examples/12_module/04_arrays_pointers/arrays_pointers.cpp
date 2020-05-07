//cpp
#include<iostream>
#include "arrays_pointers.h"
using namespace std;

void array_pointer()
{
	const int SIZE = 5;

	int hours[SIZE] = { 0, 10, 20, 30, 40 };
	int * hours_ptr = hours;

	cout << *hours_ptr << "\n";
	*hours_ptr++;
	cout << *hours_ptr << "\n";
	*hours_ptr++;
	cout << *hours_ptr << "\n";
}

void array_pointer_loop()
{
	const int SIZE = 5;

	int hours[SIZE] = { 0, 10, 20, 30, 40 };
	int * hours_ptr = hours;

	for (int i = 0; i < SIZE; ++i)
	{
		cout << *hours_ptr << "\n";
		*hours_ptr++;
	}
}
