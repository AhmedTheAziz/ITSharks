/*
Session 18.
12-04-2023.
Algorithms.
*/
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;
//1- Linear.
void insert(int arr[], int size);
void search(int arr[], int size, int item);
void search(int arr[], int size);

//2- Binary search 
int binarysearch(int arr[], int key, int low, int high);

int main()
{
//1- Linear.
	
	int x[5];
	insert(x, 5);
	search(x, 5,8);
	

//2-BInary Search.
	/*
	int sortedarray[10] = { 1,2,3,45,6,7,8,9,10 };
	if (binarysearch(sortedarray, 3, 0, 9) / 1 != false)
	{
		cout << "number is in index " << binarysearch(sortedarray, 3, 0, 9) << endl;
	}
	else
	{
		cout << "number is not found \n";
	}
	*/











	return 0;
}

void insert(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "enter numbers of array"<< i+1<<endl;
		cin >> arr[i];
	}
}

void search(int arr[], int size, int item)
{
	//int item;
	//cout << "Enter the desired number \n";
	//cin >> item;
	bool found = false;
	int i;
	for (i = 0; i < size; i++)
	{
		if (item == arr[i])
		{
			found = true;
			break;
		}
	}
		cout << endl;
		if (found == true)
		{
			cout << " the number is in index" << i << endl;
		}
		else
		{
			cout << "not found !!!\n";
		}
	
}

void search(int arr[], int size)
{	
int item = 0;
	cout << "Enter the desired number \n";
	cin >> item;
	bool found = false;
	int i;
	for (i = 0; i < size; i++)
	{
		if (item == arr[i])
		{
			found = true;
			break;
		}
	}
		cout << endl;
		if (found == true)
		{
			cout << " the number is in index" << i << endl;
		}
		else
		{
			cout << "not found !!!\n";
		}
	
}

int binarysearch(int arr[], int key, int low, int high)
{
	bool found = false;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (key > arr[mid])
		{
			low = mid + 1;
		}
		else if (key < arr[mid])
		{
			high = mid - 1;
		}
		else
			return mid;
	}
	return found;
}
