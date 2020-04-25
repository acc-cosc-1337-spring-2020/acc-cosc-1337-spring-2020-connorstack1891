#include "vector.h"
#include <iostream>


/*
Initialize nums tosize dynamic array.
Initialize each array element to 0.
*/

Vector::Vector(size_t sz)
	:size(sz), nums{new int[sz]}
{
	for (size_t i = 0; i < sz; ++i)
	{
		nums[i] = 0; 

	}
}

Vector::Vector(const Vector& v)
	:size{v.size}, nums(new int[v.Size])
{
	for (size_t i = 0; i < size; ++i)
	{
		nums[i] = v[i];
	}
}


Vector::~Vector()
{
	std::cout << "\n release memory \n";
		delete[] nums;
}

void use_vector()
{
	Vector* v1 = new Vector(3);
	delete v1;

}
