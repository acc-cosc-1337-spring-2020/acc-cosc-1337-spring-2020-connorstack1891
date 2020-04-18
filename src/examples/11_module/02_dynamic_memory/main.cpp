#include <iostream>
using std::cout;


int main() 
{
	int* ptr_num = new int(5);

	cout << "Address of ptr_num: " << &ptr_num << "\n";
	cout << "Adress of ptr_num points to " << ptr_num << "\n";
	cout << "Valie at address ptr_num points to: " << *ptr_num << "\n";

	return 0;
}