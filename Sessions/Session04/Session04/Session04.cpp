/*
Session 04
13/02/2023

*/

#include <iostream>
#include<math.h>
#include <cmath>
using namespace std;
const float  pi = 3.14;
const int AS = 5;
const int ind = AS - 1;


int main()
{
///////////////////////////////////////////////////////////////////////////////////////
	//0-Revision.(do while)
	/*
	int x = 1;
	do
	{
		cout << x;
		x++;
		cout<< " Ahmed AbdelAziz\n";

	} 
    while (x <= 10);
	*/

//////////////////////////////////////////////////////////////////////////////////////
	//1-FOR LoOoOoOop. ( int i; expression;inc/decrement counter )
	//For can act like while loop if one of the three conditions is missing!!
	//1.1- My sol.
    /*
	float totgrade = 0,avg = 0, grade = 0;

	for (int i=0; i < 10; i++)
	{
		cout<< "enter the grade of 10 students\n";
		cin >> grade;		 
		totgrade += grade;
	}
	avg = totgrade / i;
	// cout << totgrade;
	cout << endl << avg;
	*/

	//Eng's sol.
	/*
	int grade = 0;
	int sum = 0;
	for (int x = 1; x <= 10; x++)
	{
		cout << "enter grade\n";
		cin >> grade;
		sum += grade;
	}

	cout << "avg is..." << sum / 10 << endl;
	*/

//////////////////////////////////////////////////////////////////////////////////////
	//1.2- accept 10, pf sum of even ,and sum of odd
    /*
	int n = 0, rn=0, se = 0, so = 0;
	cout << "enter 10 numbers\n";
	for (int i = 0; i < 10; i++)
	{
		cin >> n;
		rn = n % 2;
		if (rn == 0)
		{
			se += n;	
		}
		else
		{
			so +=  n;
		}
	}
	cout <<"Even sum is...\n" << se << endl <<"ODD sum is...\n" << so<<endl;
	*/

//////////////////////////////////////////////////////////////////////////////////////
	//1.3- calc factorial is n* n-1....n-(n-1)
	//My try.  \0/ Try is GOOD \0/
	/*
	int x = 1;
	int fac = 1;
	cout << "enter any number\n";
	cin >> x;
	if(x>0)
	{
	 for (; x>0; x--)
	 { 
		fac*=x;
	 }
	 cout << fac << endl;
	}
	else
	{
		cout << "enter +ve no.\n";
	}
	*/

	//Eng.'s sol.
	/*
	int n = 0, fac = 1;
	cout << "enter number\n";
	cin >> n;
	if (n<=0)
	{
		cout << "enter +ve no.\n";
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			fac *= i;
		}
		cout << "factorial of " << n << " is..... " << fac << endl;
	}
	*/

//////////////////////////////////////////////////////////////////////////////////////
    //2-Array.  (Data_type Array_name [Array_size]) AS could be no., const var, empty..
    /*
string cars[AS]; // const varible equal 5...
	cars[ind];
	*/

//////////////////////////////////////////////////////////////////////////////////////


	return 0;
}