
#include "Account.h"

Account::Account(double rate, double bal)
{
	Balance = bal;
	InRate = rate;
	Transaction = 0;
}
void Account::m_deposite(double amount)
{
	Balance += amount;
	Transaction++;
}
bool Account::withdraw(double amount)
{
	if (Balance < amount)
	{
		return false;
	}
	else
	{
		Balance -= amount;
		Transaction++;
		return true;

	}
	
}
void Account::calc_intreset()
{
	Intreset = Balance + InRate;
	Balance += Intreset;
}
double Account::g_Balance()
{
	return Balance;
}

double Account::g_Intreset()
{
	return Intreset;
}

int Account::Transactions()
{
	return Transaction;
}

