#include "Account.h"
//login.
void Account::writeMP()
{

	cout << "\t\t**Welcome to the Logging in Window** \n";

	cout << "\t\t Please Enter your Mobile Phone.\n";
	cin >> mp;
}
void Account::writePass()
{
	/*
	cout << "\t\t\ Please Enter Your Password. \n";
	
	pass = "";
	ch = _getch();
	while (ch != 13)
	{
		pass.push_back(ch);
		cout << '*';

		ch = _getch();
	}
	cout << endl;
	*/
	cout << "\t\t\ Please Enter Your Password. \n";
	pass = "";
	while ((ch = _getch()) != '\r')
	{
		if (ch == '\b') {
			// Process a destructive backspace
			if (pass.size() > 0) {
				pass.erase(pass.size() - 1, 1);
				std::cout << "\b \b";
			}
		}
		else {
			pass.push_back(ch);
			std::cout.put('*');
		}
		
	}
	cout << endl;
	//cin >> pass;
}
// Transactions.
void Account::m_deposite()
{
	double amount;
	cout << "Please Enter the Value of the Deposite in EGP.\n";
	cin >> amount;
	Balance += amount;
	//
	for (int i = 0; i < content.size(); i++)
	{
		if (mp == content[i][0] && pass == content[i][1])
		{
			content[i][2] = to_string(Balance);
		}
	}
	//SendInfo();
}
void Account::withdraw()
{
	double amount;
	cout << "Please Enter the Withdrawal Value in EGP. \n\n";
	cin >> amount;
	if (Balance < amount)
	{
		cout <<" Sorry, There is no Enough Money in Your Account.\n";
	}
	else
	{

		Balance -= amount;
		//
		for (int i = 0; i < content.size(); i++)
		{
			if (mp == content[i][0] && pass == content[i][1])
			{
				content[i][2] = to_string(Balance);
			}
		}

	}
	//SendInfo();
}
//Checkup.
void Account::resetcontent()
{
	content.clear();
}
void Account::checkaccount()
{
	
	int r = 0;
	bool found = false;
		string fname = "Data.csv";
		vector<string>row;
		string line, word;
		fstream data(fname, ios::in);
		if (data.is_open())
		{
			while (getline(data, line))
			{
				row.clear();
				stringstream str(line);
				while (getline(str, word, ','))
					row.push_back(word);
				content.push_back(row);
			}
		}
		data.close();
				
		for (int i = 0; i < content.size(); i++)
		{
			if (mp == content[i][0] && pass == content[i][1])
			{
				found = true;
				Balance = std::stod(content[i][2]);
			}
		}
			
	if (found == true )
	{
		int z = 0;
	Break:
		while (z != 3)
		{
		cout << "Welcome  "<< mp <<" Your Balance is " << Balance << endl;
		cout << "Press 1) to Make a Deposite.\n";
		cout << "press 2)  to Withdraw. \n";
		cout << "press 3) to Logout.\n";
		cin >> z;

			switch (z)
			{
			case 1:
				m_deposite();
				
				goto Break;
			case 2:
				withdraw();
				
				goto Break;

			case 3:
				SendInfo();
				resetcontent();
				break;
			default:
				break;
			}

		}

	}
	else
	{
		cout << "Account is not found!!\n";
		resetcontent();
	}

}
//Send New Info.
void Account::SendInfo()
{
	
	string fname = "Data.csv";
	fstream data(fname, ios::out);
	for (int i = 0; i < content.size(); i++)
	{
	
		data << content[i][0] << ',' << content[i][1] << ',' << content[i][2] << endl;
}
	data.close();
}
