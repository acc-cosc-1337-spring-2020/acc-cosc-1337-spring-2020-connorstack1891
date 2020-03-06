#include "bank_account.h"
#include <iostream>
#include <vector>

using std::cout; using std::cin;

int main()
{

	BankAccount a (100);
	BankAccount account(500);
	cin >> account;
	cout << account;
	display_balance(account);

	/*
	std::vector<BankAccount>accounts{ BankAccount(100), BankAccount(200) };
		for (auto act : accounts)
		{
			cout << act.get_balance() << "\n";
	}
		*/


	auto balance = account.get_balance();
	cout << "Balance is: " << balance << "\n";
	
	auto amount{ 0 };
	cout << "Enter deposit amount: \n";
	cin >> amount;

	try
	{
		account.deposit(amount);
		cout << "Balance: \n" << account.get_balance();
	}
	catch (Invalid e)
	{
		cout << e.get_error() << "\n";
	}

	return 0;
}