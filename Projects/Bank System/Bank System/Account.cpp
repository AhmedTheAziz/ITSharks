#include "Account.h"

void Account::S_Account()
{
	int x = 0;
//newaccount:
	S_Data();
	Deposite();
	goto menu;
menu:
	while (x !=5)
	{
		//system("cls");
		cout << " 1/ Deposite.\n 2/ Withdraw.\n 3/ Check Balance.\n 4/Exit.\n ";
		cin >> x;
		switch (x)
		{
		case 1:
			system("cls");
			Deposite();
			goto menu;
		case 2:
			system("cls");
			Withdraw();
			goto menu;
		case 3:
			system("cls");
			CheckBalance();
			int ans;
			cout << "to go back to menu press 1\n";
			cin >> ans;
			if(ans==1)
			goto menu;
		case 4:
			
			system("cls");
			goto option;

		default:
			cout << "TRY..AGAIN!!!!!\n";
			break;
		}
	
	}
option:

	system("cls");
	cout << "0/to exit.\n 1/ to add new account.\n ";
	cin >> ans;
	if (ans == 0)
	{
		goto exit;
	}
	else if (ans == 1)
	{
		 S_Data();
		 Deposite();
		 goto menu;
	}
	else
	{
		cout << "eh!!!\n";
	}


exit:
	cout << "BYE!\n";

}

void Account::Deposite()
{
	
	cout << "Deposite Amount \n";
	cin >> Amount;
	Balance += Amount;

}

void Account::Withdraw()
{
	cout << "Draw Amount \n";
	cin >> Amount;
	if (Amount > Balance)
	{
		cout << "not enough money!!\n";
	}
	else
	{
		Balance -= Amount;

	}
}

void Account::CheckBalance()
{
	cout << "Balance is "<< Balance<<endl;
}
