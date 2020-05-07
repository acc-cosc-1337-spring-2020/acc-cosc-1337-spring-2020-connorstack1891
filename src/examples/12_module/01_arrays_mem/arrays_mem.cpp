#include "arrays_mem.h"
#include<iostream>
using namespace std;

//write code for for stack_array and display each element to screen

void stack_array()
{
	const int SIZE = 5;
	int hours[SIZE];

	for (int i = 0; i < SIZE; ++i)
	{
		hours[i] = i * 10;
	}
	for (int i = 0; i < SIZE; ++i)
	{
		cout << hours[i] << endl;
	}
	
}
void stack_array_init()
{
	const int SIZE = 5;
	int hours[SIZE] = { 0, 10, 20, 30, 41 };

	for (int i = 0; i < SIZE; ++i)
	{
		cout << hours[i] << endl;
	}
}
void stack_array_init_for_ranged()
{
	const int SIZE = 5;
	int hours[SIZE] = { 0, 10, 20, 30, 41 };

	for (auto &hour : hours)
	{
		cout << &hour << endl;
	}
}
