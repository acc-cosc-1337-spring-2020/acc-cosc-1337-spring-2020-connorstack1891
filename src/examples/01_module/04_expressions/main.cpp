#include "expression.h"
#include <iostream>
using std::cout; using std::cin;

int main() 
{
	int num;
	cout << "enter a number: " << "\n";
	cin >> num;

	get_hours(num);

	cout << get_hours(num);
	return 0;
}