//
//TODO 7 add template
#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include<cstddef>
#include<stddef.h>
#include <memory>

class Vector {

public:
	Vector(size_t sz);
	Vector(const Vector&v); // copy constructor Rule of 3
	Vector& operator=(const Vector& v); //copy assignment rule of 3
	Vector(Vector&& v); //move constructor Rule of 5 
	Vector&operator=(Vector&& v);
	size_t Size()const { return size; }
	int& operator[](int i){ return nums[i];}
	int& operator[](int i)const{return nums[i];}
	~Vector(); // destructor Rule of 3
private:
	size_t size;
	int* nums;
};

#endif // !MY_VECTOR_H

//free function.

void use_vector();
 
Vector get_vector();