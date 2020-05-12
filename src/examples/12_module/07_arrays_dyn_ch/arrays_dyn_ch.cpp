//cpp
#include "arrays_dyn_ch.h"
#include <iostream>
using namespace std;

void dyname_array()
{
	const int SIZE = 10;
	char* name = new char[SIZE]; // ALLOCATES
	cout << "enter stuff: " << "\n";
	cin.getline(name, SIZE); // CAPTURES from keyboard

	cout << name << "\n";
	delete[] name;

}