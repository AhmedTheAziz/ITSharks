/*
Session 10
06-02-2023
Pointers.

*/


#include <iostream>
#include<cmath>
#include <string>

using namespace std;

int sum(int& x, int& y); // Refrence paramter to update its value.
//2- Pointers as Paramter of function.
int sui(int* a, int* y);
//3.1- Static Memory Allocation
int ssum(int a, int b, int c);
int avg(int a, int b, int c);


int main()
{
	//0- Pointers.
	/*
	int x = 10;
	int* y;
	y = &x;
	cout << x << endl; //value of x
	cout << y<<endl; // adress of x
	cout << *y<<endl;// value of x
	*/

	//1- PTRs in ARRAY.
	/*
	int arr[5] = { 1,2,3,4,5 };

	for (int i = 0; i < 5; i++)
	{
		//cout << arr[i]<<endl;//not as a pointer
		cout << (arr + i) << endl; // print out Adress
		cout << *(arr + i) << endl; // print out value of elements
	}
	*/

	//2- Pointers as Paramter of function.
	/**/

	//3- Memory Allocation.
	/*
	int n1, n2;
	float avg;
	n1 = 5;
	n2 = 10;
	avg = (n1 + n2) / 2;
	*/

	//3.1 Static Memory Allocation.
	/*
	int n1, n2, n3;
	double result;
	result = avg(n1, n2, n3);
	*/

	//4-Dynamic Memory Allocation. 
	//used when the new value's data type is unknown.
	int i;
	float* ptr;
	cout << "enter size of array.\n";
	cin >> i;
	ptr = new float[i];
	delete[]ptr; // delete array




	return 0;
}

int sum(int& x, int& y)
{
	return 0;
}

//2- Pointers as Paramter of function.
int sui(int* a, int* y)
{
	
	return 0;
}

//3.1-Static Memory Allocation
int ssum(int a, int b, int c)
{
	return a + b + c;
}
int avg(int a, int b, int c)
{
	return ssum(a,b,c )/ 3;
}
