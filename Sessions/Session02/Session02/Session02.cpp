/*
Session 02.
06/02/2023.
*/
#include <iostream>
#include <math.h>
using namespace std;


int main()
{

	//1-Type Casting???
	/*
		int x = 0, y = 0, z = 0;
		x = 5;
		y = 2;
		z = (float) x / y;
		cout << z;
	*/

		//2- Increment & Decrement.

			// A- ++x & x++.
			/*
			int x = 5, y = 10;
			cout << x++ + y << endl;
			cout<< x++ + y << endl;
			cout << x + y<< endl;
			cout << ++x + y <<endl;
			*/
			//B- x+=value.
		/*
		int x = 10, y = 20, z = 15;
		int u = x += 2;
		cout << u;
		*/

		//3- Controls Satment.

			//A- IF Statment.
			//A01- Grade example.
			/*
			int g = 0;
			cout << "Please, insert your grade.\n";
			cin >> g;
			if (g>=50)
			{
				cout <<"Passed\n";
			}
			else //if(g<50)
			{
				cout << "Failed!!!!!!!!!!!!!!!! :(\n";
			}
			*/

			//A02- Equal & not Equal.
			/*
			int x = 0;
			cout << "Enter value of x, to know if it's +ve or -ve, then  Even or odd\n";
			cin >> x;
			int xr = x % 2;
			if (x>=0)
				{
					cout << "+VE No.\n";
				}
			else
				{
					cout << "-VE No.\n";
				}

			if (xr==0)
				{
					cout << "Even No.\n";
				}
			else
				{
					cout << "Odd No.\n";
				}
			*/

			//A03- Else If.== Switch. 
			// && and , ||  or
	/*
	int g = 0, L = 0;
	cout << "1 to know your grade, 0 to close\n";
	cin >> L;
	while (L >= 0)
	
		{
			if (L == 1)
			{
				cout << "enter your grade in percentage, to know the grade\n";
				cin >> g;
				if (g <= 100 && g >= 90)
				{
					cout << "A\n";
				}
				else if (g < 90 && g >= 80)
				{
					cout << "B\n";
				}
				else if (g < 80 && g >= 70)
				{
					cout << "C\n";
				}
				else if (g < 70 && g >= 60)
				{
					cout << "D\n";
				}
				else if (g < 60 && g >= 0)
				{
					cout << "F\n";
				}
				else
				{
					cout << "Try Again!!\n"; 
						break;
				}
			}
			else
			{
				break;
			}
		}
	    */
	
	return 0; 
} 