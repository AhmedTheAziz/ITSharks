/*
Ahmed AbdelAziz
Task05.
Questions from  1 to 3.
This code gives you the option to choose from the answers while running the code.
Please Copy the whole code. :)
*/
#include <iostream>
#include <math.h>
#include <cmath>
#include <string>

using namespace std;

void set(int arr[], int s);//
void print(int arr[], int s);//
float sum(int arr[], int s);//
void rep(int arr[], int arr2[], int s);
float avg(float a, int size);
void ro(int arr[], int arr2[], int s);
void mmar(int arr[], int s);
void inc(int arr[], int s);//
float sqr(int arr[], int s);//
float repe(int arr[], int s);//
void lr2g(int arr[], int s);//
float nonrepe(int arr[], int s);//



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

				//SQ 1-Sum Array elements with Function.
				else if (SQ == 1)
				{
					int x[7];
					set(x, 7);
					print(x, 7);
					sum(x, 7);
				}

				//SQ 2- increment array elements.
				else if (SQ == 2)
				{
					int x[7];
					set(x, 7);
					inc(x, 7);
					print(x, 7);
				}

				//SQ 3- square array elements.
				else if (SQ == 3)
				{
					int x[7];
					set(x, 7);
					sqr(x, 7);
					print(x, 7);
				}

				//SQ 4-  Repeated Elements.
				else if (SQ == 4)
				{
					int x[5];
					set(x, 5);
					repe(x, 5);
					//print(x, 5);
				}

				//SQ 5- largest & second largest
				else if (SQ == 5)
				{
					int x[5];
					set(x, 5);
					lr2g(x, 5);
				}

				//SQ 6- non repeated
				else if (SQ == 6)
				{
					int x[5];
					set(x, 5);
					nonrepe(x, 5);
				}

				//SQ 7- Sum of Array using Pointer.
				else if (SQ == 7)
				{

					//int arr[5] = { 1,2,3,4,5 };
					int arr[5];
					int x = 0;
					set(arr, 5);

					for (int i = 0; i < 5; i++)
					{
						//cout << arr[i]<<endl;//not as a pointer
						//cout << (arr + i) << endl; // print out Adress
						//cout << *(arr + i) << endl; // print out value of elements
						//cout << y << endl;
						x += *(arr+i);
					}
					cout<<"The Sum = " << x << endl;
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
					cout << "There is Only one Sub-Question in Question 2..\n";
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
void inc(int arr[], int s)
{
	for (int i = 0; i < s; i++)
	{
		//arr[i] += arr[i];
		++arr[i];
		//cout << "increment = " << arr[i] << endl;
	}
}
float sqr(int arr[], int s)
{

	float x = 0;
	for (int i = 0; i < s; i++)
	{
		arr[i] = pow(arr[i], 2);
		cout << "sqrd = " << arr[i] << endl;
	}

	return x;
}
float repe(int arr[], int s)
{

	//compare.
	for (int i = 0; i < s; i++)
	{
		bool f = false;  //found
		int y;
		y = arr[i];
		for (int j = i + 1; j < s; j++)
		{
			f = false;
			if (y == arr[j])
			{
				f = true;

			}
			if (f)
			{
				cout << " repeated at Element No." << i + 1;
				cout << " and Element No. " << j + 1;
				cout << " which has the value " << arr[i] << endl;

			}
		}
	}

	return 0;
}
void lr2g(int arr[], int s)
{
	int x = 0, y = 0;
	for (int i = 0; i < s; i++)
	{

		if (x < arr[i])
		{
			x = arr[i];
		}
		for (int j = i + 1; j < s; j++)
		{
			if (arr[i] < arr[j])
			{
				y = arr[j];

			}
		}

	}
	cout << x << endl << y << endl;

}
float nonrepe(int arr[], int s)
{
	//compare.
	for (int i = 0; i < s; i++)
	{
		for (int j = i + 1; j < s; j++)
		{
			if (arr[j] == arr[i])
			{
				cout << i << endl;
			}
			else
			{
				cout << " non-repeated Element No." << i + 1;
				cout << " which has the value " << arr[i] << endl;
			}
		}
	}

	return 0;
}

/*
 bool f = false;  //found
	int y;

	cout << "?\n";

	int i;
	for (i = 0; i < 5; i++)
	{
		if (y == arr[i])
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
		*/
