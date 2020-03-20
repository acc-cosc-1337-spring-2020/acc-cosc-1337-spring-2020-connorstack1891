//checking_account.h
#include "bank_account.h"

class checkingAccount : public BankAccount
{
public:
	checkingAccount() = default;
	explicit checkingAccount(int b) : BankAccount(b) {}
	int get_balance()const { return balance * (1 + get_rate()); }
};
