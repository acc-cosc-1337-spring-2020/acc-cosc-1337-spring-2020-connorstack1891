//write include statements
#include "dna.h"
#include <iostream>
#include <string>
//write using statements

using std::cout; using std::cin; using std::string;


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

	if (init == 1)
	{
		string dna1;
		cout << "Enter your string of DNA ";
		cin >> dna1;
		get_gc_content(dna1);

		double gc_content = get_gc_content(dna1);
		cout << gc_content;
	}

	else if (init == 2)
	{
		string dna2;
		cout << "Enter your string of DNA ";
		cin >> dna2;
		get_dna_complement(dna2);

		string dna_complement = get_dna_complement(dna2);

		cout << dna_complement;

	}
	else
		return 0;
	

	return 0;
}