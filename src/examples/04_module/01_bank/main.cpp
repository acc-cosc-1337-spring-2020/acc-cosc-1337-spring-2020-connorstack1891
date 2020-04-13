#include "checking_account.h"
#include "savings_account.h"
#include "customer.h"
#include "atm.h"
#include <iostream>
#include <vector>
#include <memory>

using std::cout; using std::cin;
using std::unique_ptr; using std::make_unique;

int main()
{
	
	/*
	SavingsAccount * s= new SavingsAccount(500);
	delete s;
	s = nullptr;
	*/

	unique_ptr<BankAccount> s = make_unique<SavingsAccount>(90);
	unique_ptr<BankAccount> c = make_unique<checkingAccount>(100);
	//checkingAccount c{ 100 };
	
	Customer cust;
	cust.add_account(s);
	cust.add_account(c);

	ATM atm(cust);

	cout << atm;

	cust.display_accounts();

	std::vector<unique_ptr<BankAccount>>accounts;
	accounts.push_back(std::move(s));
	accounts.push_back(std::move(c));


		for (auto &act : accounts)
		{
			cout << act->get_balance() << "\n";
		}
		
		BankAccount* act= new checkingAccount(100);
	/*
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
	*/
}