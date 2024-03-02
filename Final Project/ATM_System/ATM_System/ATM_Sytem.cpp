/*
Name: Ahmed Abdelaziz.
Final Project.
ATM_Sytem.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{
	//1- intro.
	cout << "\t\t           ***************************\n";
	cout << "\t\t Welcome to Buddha's International Bank ATM Machine\n";
	cout << "\t\t           ***************************\n";
	
	//2- Sign Up.
	
	//3- input mobile number & password.
	
	int ch;
start:
	string MP , Pass;
	cout << "\t\t Please Enter your Mobile Phone.\n";
	cin >> MP;
	cout << "\t\t\ Please Enter Your Password. \n";
	ch = _getch();
	while (ch != 13 )
	{
		Pass.push_back(ch);
		cout << '*';

		ch = _getch();
	}
	if (MP == "01096014825" && Pass == "123456")
	{
		cout << endl<<"step 3\n";
	}
	else
	{
		cout <<endl<< "invalid Phone Number or Password, Please Try again\n";
			goto start;
	}
	//cin >> Pass;
	//4- option menu (3.1-withdraw, 3.2-deposite, 3.3-balance , 3.4- exit).
	
	//5-outro.


}