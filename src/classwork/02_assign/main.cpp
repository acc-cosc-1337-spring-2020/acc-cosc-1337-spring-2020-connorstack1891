//Write the include statement for decisions.h here
#include <iostream>
#include "decision.h"

//Write include for capturing input from keyboard and displaying output to screen
//Write namespace using statements for cout and cin
using std::cin; using std::cout;

int main() 
{
	//create a double variable named hours
	double hours;
	//create a double variable named hourly_rate
	double hourly_rate;

	//Prompt user for keyboard input for hours and hourly_rate
	cout << "Enter your hours worked: ";
	cin >> hours;
	cout << "Enter your wage: ";
	cin >> hourly_rate;
	//save the input to variables hours and hourly_rate

	//Create a double variable named gross_salary
	double gross_salary;
	//Call the gross_pay function and save its return value to the gross_salary variable

	gross_salary = gross_pay(hours, hourly_rate);

	//Display the gross_salary variable as follows:
	cout << "Gross salary: " << gross_salary;
	//Example ---->>>     Gross pay: 150.00   

	return 0;
}

