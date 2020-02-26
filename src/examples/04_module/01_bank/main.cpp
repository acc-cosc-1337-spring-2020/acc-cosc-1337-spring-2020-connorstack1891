#include "bank_account.h"
#include <iostream>

using std::cout; using std::cin;

int main()
{

	BankAccount account(500);
	auto balance = account.get_balance();
	cout << "Balance is: " << balance << "\n";
	
	auto amount{ 0 };
	cout << "Enter deposit amount: \n";
	cin >> amount;

	account.deposit(amount);
	cout << "Balance: \n" << account.get_balance();


	return 0;
}