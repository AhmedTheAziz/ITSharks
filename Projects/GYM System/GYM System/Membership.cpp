#include "Membership.h"

void Membership::info()
{
	system("cls");
menu:
	cout << "0) to exit.\n 1) to continue.";
	cin >> x;
	if (x == 0)
	{
		cout << "bye!!\n";
	}
	else if (x == 1)
	{
		int total = amount + actprice;
		cout << " Name: " << name << endl;
		cout << " Age: " << age << endl;
		cout << "ID: " << id << endl;
		cout << "Gender: " << gender << endl;
		cout << "Lenght of membership: " << lnth << endl;
		cout << "Private Coach: " << bund << endl;
		cout << "Extra Class: " << extra << endl;
		cout << "total paid:" << total << endl;
		bool  ans1 = false;
		char ans;
	extraz1:
		cout << "Would you like to add extra classes\n";
		cout << "Y/N\n";
		cin >> ans;
		if (ans == 'y' || ans == 'Y')
		{
			ans1 = true;
		}
		else if (ans == 'n' || ans == 'N')
		{
			ans1 = false;

		}
		else
		{
			cout << "Choose Y or N !!!!\n";
			goto extraz1;
		}
		int ChOiCe = 0;
		if (ans1 == true)
		{
			cout << " choose which extra activity would you like to enroll.\n";
			cout << "0) to exit.\n,1) Private Coach\n 2) Extra Classes (MMA/YOGA)\n";
			cin >> ChOiCe;
			switch (ChOiCe)
			{
			case 0:
				goto cont1;
				break;
			case 1:
				system("cls");
				coachperses();
				goto extraz1;
			case 2:
				system("cls");
				extraClass();
				goto extraz1;
			default:
				system("cls");
				cout << "CHoose one of the optionss!!!\n";
				goto extraz1;
			}
		}
	cont1:
		
		cout<<"\n";
		//cout << "total amount paid is " << total << endl;
		goto menu;
	}
	else
	{
		system("cls");
		cout<<"..................................!!\n";
	}
}

void Membership::category()
{
	//int total = amount + actprice;
	cout << "Choose the prefered Category.\n";
	cout << "1) 1 month = 450 EGP.\n 2) 3 months = 1200 EGP.\n 3) 12 months = 3200 EGP.\n";
	cin >> categ;
	switch (categ)
	{
	case 1:
		amount += 450;
		lnth = 1;
		break;
	case 2:
		amount += 1200;
		lnth = 3;
		break;
	case 3:
		amount += 3200;
		lnth = 12;
		break;
	}
	bool  ans1 = false;
		char ans;
	extraz:
	cout << "\nWould you like to add extra classes\n";
	cout << "Y/N\n";
	cin >> ans;
	if (ans == 'y' || ans=='Y')
	{
		ans1 = true;
	}
	else if (ans == 'n' || ans == 'N')
	{
		ans1 = false;
	
	}
	else
	{
		cout << "Choose Y or N !!!!\n";
		goto extraz;
	}
	int ChOiCe=0;
	if (ans1==true)
	{
		cout << "\n choose which extra activity would you like to enroll.\n";
		cout << "0) to exit.\n,1) Private Coach\n 2) Extra Classes (MMA/YOGA)\n";
		cin >> ChOiCe;
		switch (ChOiCe)
		{
		case 0:
			goto cont;
			break;
		case 1:
			system("cls");
			coachperses();
			cout << endl;
			goto extraz;
		case 2:
			system("cls");
			extraClass();
			cout << endl;
			goto extraz;
		default:
			system("cls");
			cout << "CHoose one of the optionss!!!\n";
			goto extraz;
		}
	}
cont:
	cout << "\n";
	//cout << "total amount paid is " << amount + actprice << endl;
}

void Membership::inforegester()
{
	id++;
	cout << "enter Name\n";
	cin >> name;
	cout << "enter Age\n";
	cin >> age;
	genders:
	cout << "enter  M/F for Gender\n";
	cin >> gender;
	if (gender == 'm' || gender == 'M')
	{
		gender = 'M';
	}
	else if (gender == 'f' || gender == 'F')
	{
		gender = 'F';
	}
	else {
		cout << "there is only two genders!!!\n";
		goto genders;
	}
	cout << "Your ID is " << id << endl;
	cout << "_____________________________\n";
	//system("cls");
	category();


}
