#include "dna.h"
#include <iostream>
using std::string; using std::cout; using std::cin;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const std::string & dna1)
{
	double count1 = 0;
	double count2 = 0;
	for (int i = 0; i <=
		dna1.size(); ++i)
	{	
		if (dna1[i] == 'C' || dna1[i] == 'G')
		{
			count1 += 1;
		}
		else if (dna1[i] == 'A' || dna1[i] == 'T')
		{
			count2 += 1;
		}
	}	
	int total = count1 + count2;
	double content = count1 / total;
	
	return content;
}




/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(std::string dna2)
{
	string revDna;
	revDna = "";
	
	for (auto i = dna2.length(); i != 0; --i)
	{
		
		revDna.push_back(dna2[i-1]);
		
	}
	
	return revDna;
}



/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement(std::string dna2)
{

	string reversed = get_reverse_string(dna2);

	for (auto i = 0; i < reversed.length(); ++i)
	{
		if (reversed[i] == 'A')
		{
			reversed[i] = 'T';
		}
		else if (reversed[i] == 'T')
		{
			reversed[i] = 'A';
		}
		else if (reversed[i] == 'C')
		{
			reversed[i] = 'G';
		}
		else if (reversed[i] == 'G')
		{
			reversed[i] = 'C';
		}
		else
		{
			return 0;
		}

	}

	return reversed;
}
