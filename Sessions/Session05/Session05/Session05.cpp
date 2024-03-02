/*
15/02/2023
Session 05
Genral Revision
*/

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
	//00- C++ Structure.[++Decleration & intialization.]

	//Examples from tasks..
		//Ex01.
		/*
		cout << "enter lenght and width\n";
		int x = 0, y = 0, a = 0;
		cin >> x >> y;
		a = x * y;
		cout << "area = " << a << endl;
		*/

		//Ex02.
		/*
		cout << "enter distance in km\n";
		float km = 0, m = 0, cm = 0;
		cin >> km;
		m = km * 1000;
		cm = m * 100;
		cout << "Distance in Km = " << km<<endl;
		cout << "Distance in m = " << m << endl;
		cout << "Distance in cm = " << cm<<endl;
		*/

		//Ex03.
		/*
		cout << "enter 2 Angles\n";
		int  x = 0, y = 0, z = 0;
		cin >> x >> y;
		z = 180 - (x + y);
		cout << "the third angle = " << z;
		*/

		//01- Increment & Decrement.
			/*
			int x = 3, y = 15;

		cout << x++ << endl;
		cout << ++x << endl;
		cout << x-- << endl;
		cout << --x << endl;

			for (int i = 5; i > 0; i--)
			{
				cout << x++ + y << endl;
			}
			*/

			//02-Controls Statment.
				 //If Statment [if...else if... else]
				// Ex01.
			   /*
				cout << "insert 3 numbers\n";
				long int x = 0, y = 0, z = 0;
				int xr = 0, yr = 0, zr = 0;
				cin >> x >> y >> z;
				xr = x % 2;
				yr = y % 2;
				zr = z % 2;
				if (x > y && x > z)
				{
					cout << "the largest no. is " << x << " which is the First\n";
					if (xr == 0)
					{
						cout << "and it is Even\n";
					}

				}
				else if (y>x && y>z)
				{
					cout << "the largest no. is " << y << " which is the Second\n";
					if (yr == 0)
					{
						cout << "and it is Even\n";
					}

				}
				else if (z>x && z>y)
				{
					cout << "the largest no. is " << z << " which is the Third\n";
					if (zr == 0)
					{
						cout << "and it is Even\n";
					}


				}
				else
				{
					cout << "it must be  that at least two or the three numbers are equal\n";
					if (xr == 0 && yr == 0 && zr == 0)
					{
						cout << "and it is Even\n";
					}


				}

				*/

				// Switch.
				/*
				int x = 0, y = 0;
				int s = 0, sub = 0, mp = 0, P = 0;
				float div=0;
				char op;
				cin >> x >> op >> y;
				s = x + y;
				sub = x - y;
				mp = x * y;
				div = x / y;

				P = pow(x, y);

				switch (op)
				{
				case '+':
					cout << s<<endl;
					break;
				case'-':
					cout << sub << endl;
					break;
				case'*':
					cout << mp << endl;
					break;
				case'/':
					cout << div << endl;
					break;
				case'p':
					cout << P << endl;
				default:
					break;
				}
				*/


				//Loop.
				//print odd numbers from 1 to 99.
/*
	int x = 1, xr = 0;

	while (x < 100)
	{
		xr = x % 2;
		if (xr != 0)
		{
			cout << x << endl;
		}
		x++;
	}
	*/

// Task ex.
	int x = 1, xr = 1;

	while (xr < 121)
	{
		xr = pow(x, 2);

		cout << xr << endl;

		x++;
	}


	return 0;
}