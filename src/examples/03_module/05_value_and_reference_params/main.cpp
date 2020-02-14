#include<iostream>

using std::cout;

int main() 
{
	int num = 5;
	cout << "value of num is: " << num << " address is " << &num; 

	int &num_ref = num;
	num_ref = 10;
	cout << "\n value of num is: " << num << " address is " << &num;

	return 0;
}