/*
08-03-2023.
Session 11
Dynamic Memory Allocation & OOP.
*/

using namespace std;

#include <iostream>
#include <cmath>
#include <string>
//2.1- OFstream
#include <fstream> // Library that link I/P & O/P with another Files.

int main()
{
	//1- Dynamic Memory Allocation. (HEAP)
	/*
	int i;
	float* ptr;
	cout << " enter array size..\n" ;
	cin >> i; // the moment the memory knows the size of i
	ptr = new float[i];// i is now in the heap due to "new" keyword. which is the array's size.
	int arr[i];
	for (int x = 0; x < i; x++)
	{

	}
		delete[] ptr;// delete to free space from heap 
		*/

	// SEARCH? FOR DMA....

	//2- Files and Streams.
	// 2.1- Database.. 
	// OF STREAM.
	/*
	ofstream data; // data is an object.
	ofstream ahmed;
	ahmed.open("y.docx");
	data.open("x.txt");
	int x = 001;
	int y=0;
	data << "ahlan ahlan ahlan\n"<<0<<endl<<x; // == cout, (search for >>).
	ahmed << "LOL";
	data <<endl<< y<<endl;
	data.close();
	*/
	//3- OOP  -Object Oriented Programming-



	system("pause"); // to stop sending data to files  before return 0
	return 0;
}
