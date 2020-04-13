//customer.h
#ifndef CUSTOMER_H 
#define CUSTOMER_H //useful if customer is trying to be used more than once
#include<vector>
#include "bank_account.h"
#include <iostream>
#include <memory>


class Customer
{
public:
	void add_account(std::unique_ptr<BankAccount> & act);
	void display_accounts()const;
private:
	std::vector<BankAccount> accounts;
};
#endif // !CUSTOMER_H