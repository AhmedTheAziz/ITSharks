/*
Session 06
20/02/2023
Arrays
*/
#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;
const int sal = 10;


int main()
{

	/*1- INDEX = (no. of variables - 1) array starts with ZERO
	 Data_type Array_name [Array_size];
	 Size must be for data type int or const int ONLY!!!!

	 */
	 /*
	 int S[5];
	 S[1] = 40;
	 S[2] = 30;
	 S[3] = S[1] + S[2];

	  */

	  //2-array loop.
	  /*
	  float s = 0;
	  int sal[sal];
	  float avg;

	  for (int i = 0; i < 10; i++)
	  {
		  cout << "salaries of Employee no." << i + 1 << endl;
		  cin >> sal[i];
		  //sal[i] += sal[i] * 0.10;
		  //s = sal[i];
		  //cout << "s=" << s << endl;
	  }


	  for(int i=0;i<10;i++)
	  {
		  sal[i] += sal[i] * 0.10;
	  }
	  for (int i = 0; i < 10; i++)
	  {
		   s = sal[i];
		   cout <<"s=" << s << endl;
	  }


	  avg = s / 10;
	  cout << "Bonus Sal for EMP4 = " <<  sal[3]<<endl <<endl <<avg<<endl<<"s =" << s;
	  */

	  //3-array intialization.
	  /*
	  int s[5];
	  for (int i = 0; i < 5; i++)
	  {
		  s[i];
	  }
	  */

	  //4-manual intialization
	  /*
	  int x[5] = { 1,4,5,2,2 };
	  x[3] = 2;
	  */

	  //5-all same value.
	  /*
	  int y[8] = { 0 };
	  y[5] = 0;
	  */

	  //6-intiat some variables.
	  /*
	  int z[15] = { 7,3,10 };
	  z[2] = 10;
	  */

	//7- Replace arrays Values..
	/*
	int x[5] = { 1,2,3,4,5 };
	int y[5];
	for (int i = 0; i < 5; i++)
	{
		y[i] =  x[i] ;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "y = " << y[i] << endl;
	}

	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "x = " << x[i] << endl;
	}
	*/


	//8- Two Dimensional Array..    search for Multi Dimensional Array
	/*
	int m[6][4]; //m == Marks
	m[4][2] = 20;
	m[5][3] = 15;
	for (int r = 0; r < 6; r++) //r == row
	{
		for (int c = 0; c < 4; c++) // c ==column 
		{
			cin >> m[r][c];
			cout <<"\nblock no. "<< r<<"  "<<c<<endl << m[r][c] << endl<<endl;
		}
	}
	*/
    
  
/*
int x[4][3] = {
		 {1,2,3},
         {4,5,6},
	     {7,8,9},
	     {9,5,1}
	 };
	 */

    //9- Functions.






	return 0;
}