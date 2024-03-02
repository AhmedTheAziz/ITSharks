#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <conio.h>

using namespace std;
class Account
{
private :
	double Balance, Intreset, InRate;
	int Transaction;
public:
	//constructor
	Account(double rate = 0.045, double bal = 0.0);
	// Deposit method
	void m_deposite(double amount);
	//Withdrawal method
	bool withdraw(double amount);
	void calc_intreset();
	//get balance.
	double g_Balance();
	// get interset.
	double g_Intreset();
	//get Transactions.
	int Transactions();
	

};
