#include "Client.h"

void Client::S_Data()
{
	cout << "Please, Eneter Your Name..\n";
	cin >> Name;
	CheckPhone(); // check Phone no.
	CheckID();//  check ID.

}

void Client::CheckPhone()
{
	while (size(Phone) != 11)
	{
		cout << "Please, Eneter Your Phone Number..\n";
		cin >> Phone;
		//cout << size(Phone) << endl;  checking code..
		if (size(Phone) != 11)
		{
			cout << "Please, TRY AGAIN!!!!!\n";
		}
		else
		{
			Phone ="";
			break;
		}
	}
}

void Client::CheckID()
{
	while (size(ID) != 16)
	{
		cout << "Please, Eneter Your ID Number..\n";
		cin >> ID;
		//cout << size(ID) << endl;  checking code..
		if (size(ID) != 16)
		{
			cout << "Please, TRY AGAIN!!!!!\n";
		}
		else
		{
			ID = "";
			break;
		}
	}
}

