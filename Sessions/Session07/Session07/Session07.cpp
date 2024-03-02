/*
Session 07
22-02-2023
Arrays Revision & Functions..
*/

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
//int grade(int g[3]);
//int cs(int a, int b); //Calc Sum..
int s(int a , int b);
//float avg(float s);

int main()
{
//1- cin 10 numbers, cout total & total's multiplication 
	/*
	int N[10]; // N is the input numbers
	int s = 0, m = 1;
	cout << "enter 10 numbers\n";


	for (int i = 0; i < 10; i++)
	{
		cout << "number " << i+1 << endl;
		cin >> N[i];

	}
	for (int i = 0; i < 10; i++)
	{
		s += N[i];
		m *= N[i];
		if (i == 9)
		{
			cout << "sum = " << s << endl;
			cout << "multiplication =" << m << endl;
		}
	}
	*/

    //1.1-  Smaller Code W/ the same Concpet.
	/*
	int N[10]; // N is the input numbers
	int s = 0, m = 1; // s is sum , m is multiplication.
	cout << "enter 10 numbers\n";
	for (int i = 0; i < 10; i++)
	{
		cout << "number " << i + 1 << endl;
		cin >> N[i];
		s += N[i];
		m *= N[i];
		if (i == 9)
		{
			cout << "sum = " << s << endl;
			cout << "multiplication =" << m << endl;
		}
	}
	*/

//2-cin one intger, cout the some of the odd and even.???????????
	/*
	int N[10];
	int x = 1, o = 1, e = 1;
	int i=0;

	//for (int i = 0; i < 10; i++)
	//{
		cout << "enter any number\n";
		cin >> N[i];

	//}
	for ( i = 0; i < 10; i++)
	{
		e += N[i] % 2;
		o += N[i] % 2;
		if (e == 0)
		{
			cout << "even is " << e << N[i]<<endl;
		}
		if (o != 0)
		{
			cout << "Odd is " << o << endl;
		}

	}
	*/

//3-5 cin ???
	/*
	int x[5];
		int m = 0, min=1 ;
		cout << "enter any no.\n";
		for (int i = 0; i < 5; i++)
		{
			cin >>x[i];
		}
		for (int i = 0; i < 5; i++)
		{
				if (m < x[i])
				{
					m = x[i];
				}
		}

		for (int i = 0; i < 5; i++)
		{

			if (min> x[i])
			{
				min = x[i];
			}
			else
			{
				//min = x[i];
			}

		}

		cout << "max = " << m << endl;
		cout << "Mini = " << min << endl;
		*/

//4- search ARRAY   bool
	
	bool f = false;  //found
	int x[5];
	int y;
	for (int i=0;i<5;i++)
	{
		cout << "\n";
		cin >> x[i];
	}
	cout << "?\n";
	cin >> y;
	int i;
	for (i = 0; i < 5; i++)
	{
		if (y == x[i])
		{
			f = true;
			break;
		}
	}
		if (f)
		{
			cout << " element is in the Array in \n" << i << endl;
		}
		else
		{
			cout << " element is not in the Array\n";
		}
		

//5- Functionsss.   
 //Return_value_Type Function_name (parameters list) { code } 
    //0- example 00.
    /*
	int g[3];
	float s = 0, avg = 0;
	for (int i = 0; i < 3; i++)
	{
		cout << "enter Grades of Student number " << i + 1 << endl;
		cin >> g[i];
	}
	for (int i = 0; i < 3; i++)
	{
		s += g[i];
		avg = s / 3;
	}
	cout << "sum = " << s << endl;
	cout << "avg =" << avg << endl;
	*/

    //1-
//int y = 1, z = 0;//int s = 0;
//
//for (int i = 0; i < 3; i++)
//{
//	cout << "enter Grades of Student number " << i + 1 << endl;
//	cin >> y >> z;
//	cout << "Grades are " << s(y, z);
//	//s(y);
//	//avg(s);
//	//cout << "sum = " << s(y) << endl;
//
//}
//
//cout << "sum = " << s << endl;
////cout << "avg =" << avg << endl;


	return 0;

}

int s(int a, int b)

{
	int result = 0;

	result = a + b;
	return result;
}
//int grade( int g[3])
//{
//	int g[3];
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "enter Grades of Student number " << i + 1 << endl;
//		cin >> g[i];
//	}
//	return 1;
//}

/*
int cs(int a, int b) 
{
	int s = 0;
	s = a + b;
	return s;
}
*/



/*
float avg(float a)
{
float avg;
 avg	= a / 3;
return avg;
}
*/