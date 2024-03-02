/*
Name: Ahmed Abdelaziz.
Final Project.
ATM_Sytem.
*/

//2- Register.
#include "Info.h"
//3- Login & Account Data.
#include "Account.h"
int main()
{
	//0- intro.
		int op = 0;
		Account user;
Intro:	
	cout << "\t\t     ~~~~~~***************************~~~~~~\n";
	cout << "\t\t Welcome to Buddha's International Bank ATM Machine\n";
	cout << "\t\t     ~~~~~~***************************~~~~~~\n";
	while (op >= 0)
	{
		cout << "Press 1 to Register, Press 2 to Login & 0 to Exit.\n";
		string choice;
		cin >> choice;
	//1- Exit.
		if (choice == "0")
		{
			return 0;
			break;
		}
	//2- Regestier.
		if (choice == "1")
		{
Regester:
			Info ID;
			ID.setMP();
			ID.setPass();
			ID.SendInfo();
			//ID.file();
			goto Login;
		}
	//3- login. 
		else if (choice == "2")
		{
Login:
			//Account user;
			user.writeMP();
			user.writePass();
			goto Menu;
		}
		else
		{
			cout << "Try Again!!\n";
			goto Intro;
		}
	}

Menu:
			user.checkaccount();
			goto Intro;
}
// NEXT PROJ; LIBRARY MANAGMETN SYSTEM (ADD, DELETE, SEARCH )