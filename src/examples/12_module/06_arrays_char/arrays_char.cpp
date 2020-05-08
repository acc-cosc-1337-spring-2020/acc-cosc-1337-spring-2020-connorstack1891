//cpp
#include"arrays_char.h"
#include<iostream>

using namespace std;

void char_array()
{
	const int SIZE = 5;
	char name[SIZE] = "mary";
	name[4] = '\0'; 
	cout << name << "\n";

	for (int i = 0; name[i] != '\0'; ++i)
	{
		cout << name[i] << "\n";
	}
}

void char_array_no_size()
{
	char name[] = "mary";
	cout << name << "\n";
}

