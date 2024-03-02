/*
Ahmed AbdelAziz
Task04.
Questions from  1 to 3.
This code gives you the option to choose from the answers while running the code.
Please Copy the whole code. :)
*/
#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

void set(int arr[], int s);
void print(int arr[], int s);
float sum(int arr[], int s);
void rep(int arr[], int arr2[], int s);
float avg(float a,int size);
void ro(int arr[], int arr2[], int s);
void mmar(int arr[], int s);

struct Q2
{
	int arra[7];
	int arrb[7];
};



int main()
{
	int Q = 0, SQ = 0;
	//Questions selection list
	while (Q >= 0)
	{
		cout << "\n Welcome to Questions selection list, insert from 1 to 3 to view the Answers , 0 to close.\n";
		cout << "................\n";
		cin >> Q;
		cout << "................\n";


		// End of Task
		if (Q == 0)
		{
			cout << "Thank You!!";
			break;
		}

		//Q 1- C++ CODES.
		else if (Q == 1)
		{

			while (SQ >= 0)
			{
				cout << "\n Welcome to Sub-Questions selection list, insert from 1 to 7 to view the Answers , 0 to close.\n";
				cout << "................\n";
				cin >> SQ;
				cout << "................\n";

				// End of Question 1.
				if (SQ == 0)
				{
					break;
				}

				//SQ 1- store 7 elements in array and print.
				else if (SQ == 1)
				{

					int x[7];
					set(x, 7);
					print(x, 7);

				}

				//SQ 2- sum of the previous array question
				else if (SQ == 2)
				{
					int x[7];
					set(x, 7);
					print(x, 7);
					sum(x, 7);

				}

				//SQ 3- average 
				else if (SQ == 3)
				{
					int x[7];
					float s = 0;
					set(x, 7);
					print(x, 7);
					sum(x, 7);
					s = sum(x, 7);
					avg(s, 7);
				}

				//SQ 4-  revers order
				else if (SQ == 4)
				{
					int x[5];
					int y[5];
					set(x, 5);
					ro(x, y, 5);
				}

				//SQ 5- replace
				else if (SQ == 5)
				{
					int x[5], y[5];
					set(x, 5);
					rep(x, y, 5);
				}

				//SQ 6- max & min
				else if (SQ == 6)
				{
					int x[5];
					int  min = 0;
					cout << "enter five numbers no.\n";
					set(x, 5);
					mmar(x, 5);
				}

				//SQ 7- count even & odd
				else if (SQ == 7)
				{
					int x[20];
					int r = 0, ce = 0, co = 0;
					set(x, 20);
					for (int i = 0; i < 20; i++)
					{
						x[i] %= 2;
						if (x[i] == 0)
						{
							ce++;
						}
						else
						{
							co++;
						}
					}
					cout << "even numebers're " << ce << " numbers \n";
					cout << "Odd numebers're " << co << " numbers \n";

				}

				//No more Sub-Questions...
				else
				{
					cout << "There is Only 7 Sub-Questions in Question 1..\n";

				}
			}
		}

		//Q 2 output of following program..
		else if (Q == 2)
		{
			while (SQ >= 0)
			{
				cout << "\n Welcome to Sub-Questions selection list, insert from 1 to 3 to view the Answers , 0 to close.\n";
				cout << "................\n";
				cin >> SQ;
				cout << "................\n";
				//End of Question 2.
				if (SQ == 0)
				{
					break;
				}

				//SQ 1
				else if (SQ == 1)
				{
					/*
			cout <<" /tmp/A8MbSCL5II.cpp: In function 'int main(int, const char**)': \n" 
				<<"  / tmp / A8MbSCL5II.cpp:8 : 18 : error : invalid operands of types 'char [6]' and 'const char [2]' to binary 'operator+' \n"
				<<  "8 | char s3[12] = s1 + " " + s2; \n"
				<<"    | ~~^ ~~~ \n"
				<<"    |               |    | \n"
				<<"    |               |    const char[2]\n"
				<<"    | char[6] \n";
				*/
				}
				
				//SQ 2
				else if (SQ == 2)
				{

				}

				//SQ 3
				else if (SQ == 3)
				{

				}
				//No more Sub-Questions...
				else
				{
					cout << "There is Only 3 Sub-Question in Question 2..\n";
				}
			}
		}


		//Q 3- Challenging problems.. ;)
		else if (Q == 3)
		{
			while (SQ >= 0)
			{
				cout << "\n Welcome to Sub-Questions selection list, insert from 1 to 3 to view the Answers , 0 to close.\n";
				cout << "................\n";
				cin >> SQ;
				cout << "................\n";

				//End of Question 3.
				if (SQ == 0)
				{
					break;
				}

				//SQ 1-
				else if (SQ == 1)
				{

				}

				//SQ 2- 
				else if (SQ == 2)
				{

				}

				//No more Sub-Questions...
				else
				{
					cout << "There is only 3 Sub-Questions in Question 3..\n";
				}
			}
		}

		// No more Questions
		else
		{
			cout << "Sorry,there is only 3 Questions.\n";
			cout << "................\n";
		}

	}



	return 0;
}



void set(int arr[], int s)
{
	for (int i = 0; i < s; i++)
	{
		cout << " Enter Element no. " << i + 1 << endl;
		cin >> arr[i];
		//cout << "Element no."<< i+1<< " = " << arr[i] << endl;
	}
}
void print(int arr[], int s)
{
	for (int i = 0; i < s; i++)
	{
		cout << "Element no." << i + 1 << " = " << arr[i] << endl;
	}
}
float sum(int arr[], int s)
{

	float x = 0;
		for (int i = 0; i < s; i++)
		{
			//arr[i] += arr[i];
			x += arr[i];
			//cout << "x=" << x << endl;
	}
		cout << "the sum = " << x << endl;
		//cout << "x no. " << i + 1 << "=" << arr[i] << endl;
		return x;
}
void rep(int arr[],int arr2[] ,int s)
{

	for (int i = 0; i < s; i++)
	{
		arr2[i] = arr[i];
	}
	for (int i = 0; i < s; i++)
	{
	//	cout << "y = " << arr2[i] << endl;
	}
	//cout << endl;
	/*
	for (int i = 0; i < s; i++)
	{
		cout << "x = " << arr[i] << endl;
	};
	*/
}
float avg(float a, int size )
{
	float avg;
	avg = a / size;
	return avg;
}
void ro(int arr[], int arr2[], int s)
{
	for (int i = 0; i < s; i++)
	{
		arr2[i] = arr[i];
	}

	for (int i = s-1; i >= 0; i--)
	{
		cout << "y = " << arr2[i] << endl<<endl;
	}
	/*
	for (int i = 0; i < s; i++)
	{
		cout <<endl<< "x = " << arr[i] << endl;
	}*/

}
void mmar(int arr[],int s)
{
	int m = 0, min = 0;
	for (int i = 0; i < s; i++)
	{

		if (m < arr[i])
		{
			m =arr[i];
		}
	}
	cout << "max = " << m << endl;
	min = m;
	for (int i = 0; i < s; i++)
	{
	
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	cout << "Mini = " << min << endl;

}
