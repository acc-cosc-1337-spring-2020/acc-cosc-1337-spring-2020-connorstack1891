//write include statemetns
#include "rectangle.h"
#include <vector>
#include <iostream>
using std::cout;

/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000
Iterate the vector and display the Area for each Rectangle on one line and the total area for the
3 rectangles.
*/
int main()
{

	std::vector<WannaBeSquare> area{ WannaBeSquare(4, 5), WannaBeSquare (10, 10),  WannaBeSquare(100, 10)};

	auto total{ 0 };

	for (auto  m : area )
	{
		cout << m.get_area() << "\n";
		total += m.get_area();

	}

	cout << total;
	
	return 0;
}