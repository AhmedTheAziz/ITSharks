#pragma once
#include "Info.h"
class Account :
    public Info
{
private:
	int ch=0;
	int x = 0;
	string mp, pass;
public:
	//Login.
	void writeMP();
	void writePass();
	//checkup.
	void checkaccount();
	void resetcontent();
		//Transactions
	void m_deposite();
	void withdraw();
	//Send New Info.
	void SendInfo();
};

