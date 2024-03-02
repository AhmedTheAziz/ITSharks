/*
08/02/2023
Session 03

*/

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
	//00 -test characters.
	/*
	char x;
	cout << "insert character."<<endl;
		cin >> x;
	cout << x;
	*/
	
	//01- type casting.......
	/*
	int x, z;
	float y;
	cin >> x >> y;
	z =(float) x / y;
	cout << endl << z << endl;*/

	//1A- SWITCH.
	/*
	int x;
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "case 1\n";
		break;
	case 2:
		cout << "case 2\n";
		break;
	case 3:
		cout << "case 3\n";
		break;
	case 4:
	   cout<< "case 4\n";
	   break;
	case 5:
		cout << "case 5\n";
		break; 
	default:
		cout << "try again\n";
		break; //break is not that important here.
	}
	*/

	//1B- Switch.
	/*
	int x = 0;
	cin >> x;
	switch (x + 10)
	{
	case 10:
		cout << 0 << endl;
		break;
	case 11:
		cout << 1 << endl;
		break;
	default:
		cout<<"try again\n";
	}
	*/

	//switch vs if else if.
	/*switch is faster than if statment.*/

	//2- LOOPS.
	/*
	2A- While.   
	*/
	//while loop.
    /*
	int x = 0;
	int y=0;
	while (x <= 10 && y<=10)
	{
		++x;
		y++;
	   cout <<endl << x << endl << y << endl;
	}
	*/
	//while loooop.
	/*
	int  x = 0;
	int s = 0;
	while ( x>=0 )
	{
		cout << "enter +ve numbers, if a number is -ve the code will stop running.\n";
		
		cin >> x;
		s += x;
		//x += x;
		//cout << x << endl << endl;
		cout << s << endl << endl;
	}
	*/
    // Do...While
	int x = 0, y = 0;
	cin >> x >> y;
	
	do
	{
		++x;
		--y;
		cout << x + y<< endl;

	} while (x >= 0 && y >= 0);

	return 0;
}