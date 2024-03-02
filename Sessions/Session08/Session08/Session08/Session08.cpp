/*
Session08
27-02-2023

*/

#include <iostream>
#include <cmath>

using namespace std;

float sum(float a, int b, int c);
float avg(float a, int b);

void comp(int a, int b);

float area(int a);
float vol(int a);
const float pi = 3.14159;

int s2(int a, int b);

int arr(int arr[], int size);
float arrs(int arr[], int size);
float arravg(float s, int t);
float calc_avg(int m[], int size);
const int s = 5;

int sui(int k);

int main()
{
	// search array.
    
	//Function..
	//!! SEARCH FOR VOID FUNCTION!!
	//1- enter 3 students marks calc and print sum & average
	/*
	int x = 0, y = 0, z = 0;
	cout << "enter 3 numbers \n";
	cin >> x >> y >> z;
	cout << "the sum = " << sum(x, y, z) << endl;
	cout << "the average =" << avg(sum(x, y, z), 3) << endl;
	*/

	//2- get the larger number between 2 numbers.
	/*
	int x = 0, y = 0;
	cout << " enter two numbers \n";
	cin >> x >> y;
	comp(x, y);
	*/

	//3- are and volume of a sphere.
	/*
	int r = 0;
	cout << "enter the radius to get the area and vol of a sphere \n ";
	cin >> r;
	area(r);
	cout << "the area = " << area(r) << endl;
	vol(r);
	cout << " the Volume = " << vol(r) << endl;
	*/

	//4-Function parameter's default Value. (slides)

	//5-parameters types (value) (reference).
    /*
	int x = 0, y = 0;
	cin >> x>> y;
	 s2(x,y);
	cout << " sum = " << s2(x,y) << endl;
	*/

	//VALUE takes a copy
	// refernece change the value in memory need & before element.

	//6- Array as a parameter function..
	//int x(int arr[],int size)
	/*
	cout << "enter five numbers \n";
	int x[s];
	arr(x, s);
	//arrs(x, s);
	//arravg(arrs(x,s), s);
	cout << "the sum = " <<arrs(x, s) << endl;
	cout << "the average = " << arravg(arrs(x, s), s) << endl;
	*/
	// eng.'s solution..
	/*
	int mark[5];
	cout << "enter five numbers \n";
	arr(mark, s);
	cout << "the average = " << calc_avg(mark, s) << endl;
	*/

	//7- search Array Function.. Task!!

	//8- Function Overloading.
	/*
	int sum(int x, int y)
	float sum(float x, float y)
	double sum(double x, double y)
	*/

	//9- Function Recursion..
	// repeat the same program... 
	sui(5);
	cout << sui(5) << endl;


		//factorial recursive... TASK!!!!







	return 0;
}




float sum(float a, int b, int c)
{

	float z = 0;
	z = a + b + c;
	return z;
}
float avg(float a, int b)
{
	float z = 0;
	z = a / b;
	return z;
}

void comp(int a, int b)
{
	if (a > b)
	{
		cout << "the first number is the largest\n" << a;
	}
	else if (a < b)
	{
		cout << "the second number is the largest \n" << b;
	}
	else
	{
		cout << "the two numbers are equal";
	}

}

float area(int a)
{
	float z = 0;
	z = 4 * pi * pow(a, 2);
	return z;
}
float vol(int a)
{
	float v = 0;
	v = pi * pow(a, 3)* 4/3;
	return v;
}

int s2 (int a , int b)
{
	int z = 0;
	z = a + b;
	return z;
}

int arr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin>>arr[i];
	}
	return 0;
}
float arrs(int arr[], int size)
{
	float sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}
float arravg(float s, int t)
{
	float z = 0;
	z = s / t;
	return z;
}

float calc_avg(int m[], int size)
{
	float r = 0;
	float avg = 0;
	for (int i = 0; i < size; i++)
	{
		r += m[i];
	}
	avg = r / size;
	return avg;
}

int sui(int k)
{
	if (k > 0)
	{
		return k + sui(k-1) ;
	}
	else if (k == 0)
	{
		return 0;
	}
}