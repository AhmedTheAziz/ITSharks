/*
* Ahmed Abd-ElAziz
TASK 02
From 1 to 6.
This code gives you the option to choose from the answers while running the code.
Please Copy the whole code. :)
*/
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main()
{
	int Q = 0;
	//Questions selection list
	while (Q >= 0)
	{
		cout << "\n Welcome to Questions selection list, insert from 1 to 6 to view the Answers , 0 to close.\n";
		cout << "................\n";
		cin >> Q;
		cout << "................\n";
		// End of Task
		if (Q == 0)
		{
			cout << "Thank You!!";
			break;
		}
		//Q 1
		else if (Q == 1)
		{
			int x = 0;
			cout << "Enter value of x, to know whether it's Even or odd\n";
			cin >> x;
			int xr = x % 2;
			if (xr == 0)
			{
				cout << "Even No.\n";
			}
			else
			{
				cout << "Odd No.\n";
			}
		}
		//Q 2
		else if (Q == 2)
		{
			char x;
			cout << "Insert a Character." << endl;
			cin >> x;
			switch (x)
			{
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				cout << "The Character is Vowel\n";
				break;
			default:
				cout << "The Character is Consonant\n";
			}
		}
		//Q 3
		else if (Q == 3)
		{
			int x = 0, y = 0, z = 0;
			cout << "Please, Insert 3 Numbers to determin which one is the largest\n";
			cin >> x;
			cin >> y;
			cin >> z;
			if (x > y && x > z)
			{
				cout << "The First number is the largest\n" << x << endl;
			}
			else if (y > x && y > z)
			{
				cout << "The Second number is the largest\n" << y << endl;
			}
			else if (z > x && z > y)
			{
				cout << "The Third number is the largest\n" << z << endl;
			}
			else
			{
				cout << "that must be at least the two numbers with large value are equal, or all numbers are equal\n";
			}
		}
		//Q 4
		else if (Q == 4)
		{
			cout << "please, insert two numbers to divide\n";
			float x = 0, y = 0, z = 0;
			cin >> x;
			cin >> y;
			z = x / y;
			if (y == 0)
			{
				cout << "UNKOWN\n";
			}
			else
			{
				cout << "The Resutl is.... " << z << endl;
			}
		}
		//Q 5
		else if (Q == 5)
		{
			cout << "Please insert the Temperature in Fahrenheit to be converted into Celsius\n";
			float F, C;
			cin >> F;
			C = (F - 32) * 5 / 9;
			cout << "The Temperature in Celsius is.. " << C << endl;
		}
		//Q 6
		else if (Q == 6)
		{
			int x = 0, y = 0;
			cout << "Please insert two +ve /numbers\n";
			cin >> x;
			cin >> y;
			int xr = x % 2;
			int yr = y % 2;
			while (x >= 0 && y >= 0 && x > y)
			{
				cout << "The First intger is greater than the Second\n";
				break;
			}
			while (y >= 0 && x >= 0 && y > x)
			{
				cout << "The Second intger is greater than the First\n";
				break;
			}
			while (x >= 0 && y >= 0 && x > y && xr == 0)
			{
				cout << x << endl;
				break;
			}
			while (y >= 0 && x >= 0 && y > x && yr == 0)
			{
				cout << y << endl;
				break;
			}
		}
		// No more Questions
		else
		{
			cout << "Sorry,there is only Six Questions.\n";
			cout << "................\n";
		}
	}
	return 0;
}