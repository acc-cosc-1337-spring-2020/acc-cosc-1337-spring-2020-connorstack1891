//write include statements
#include "dna.h"
#include <iostream>
#include <string>
//write using statements

using std::cout; using std::cin;


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/


int main()
{
	int init;
	cout << "Enter 1 for Get GC Content, or 2 for Get DNA Complement";
	cin >> init;

	do {
		int dna;
		cout << "Enter your string of DNA";
		cin >> dna;
		get_gc_content(dna)
	} while (init = 1);

	do {
	int dna;
	cout << "Enter your string of DNA";
	cin >> dna;


	} while (init = 2);
	

	return 0;
}