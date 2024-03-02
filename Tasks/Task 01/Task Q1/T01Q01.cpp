/*
* Ahmed Abd-ElAziz
TASK 01
Question 1 & 2.
This code gives you the option to choose from the answers while running the code.
*/

#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	int Q = 0, ca = 0;

	//Questions selection list
	while (Q >= 0)
	{
		cout << "\n Welcome to Questions selection list, insert 1 or 2 to view the answers of the questions, 0 to close.\n" << "................\n";
		cin >> Q;
		cout << "................\n";

		// End of Task
		if (Q == 0)
		{
			cout << "Thank you!!";
			break;
		}

		//Q 1 
		else if (Q == 1)
		{
			//Q 1 selection menu.
		while (ca >= 0)
		{
			cout << "\n You Chose the First Question, to view its results choose from 1 to 7, to go back to the previous menu insert 0\n";
			cin >> ca;
			cout << ".............................. \n";

			// End of Question 1
			if (ca == 0)
			{
				//cout << "Thank You!!! \n";
				break;
			}

			//1- I/P L & W, O/P Area
			else if (ca == 1)
			{
				float L = 0, W = 0, A = 0;
				cout << "Please, insert the Length and Width of the Rectangle, to Calculate its Area\n" << "Insert Lenght here.\n";
				cin >> L;
				cout << "Insert Width here.\n";
				cin >> W;
				A = L * W;
				if (L != W)
				{
					cout << "The Area equals to...." << A << endl<< "................\n";
				}
				else if (L == W)
				{
					cout << "it's a RECTANGLE!!, L & W cannot be equal to each other!!!\n" << "................\n";
				}
				else
				{
					break;
				}
				
			}

			//2- I/P L of cube, O/P volume
			else if (ca == 2)
			{
				float S = 0, V = 0;
				cout << "Please insert the Lenght of the cube's side, to Calculate its  Volume.\n" << "Insert lenght here.\n";
				cin >> S;
				V = pow(S, 3);
				cout << "The Volume equals to...." << V << endl << "................\n";
			}

			//3- I/P Distance km, O/P m & cm.
			else if (ca == 3)
			{
				float Km = 0, m = 0, cm = 0;
				cout << "Please insert the Distance in Km, to be converted into m, then cm.\n" << "Insert Distance here.\n";
				cin >> Km;
				m = Km * 1000, cm = m * 100;
				cout << "The Distance in meter equals to..." << m << "m\n" << "the Distance in Centimeters equals..." << cm << "cm\n" << "................\n";
			}

			//4- I/P 2 angles of triangle, O/P 3rd angle.
			else if (ca == 4)
			{
				float A1 = 0, A2 = 0, A3 = 0;
				cout << "Please insert the two known angles of the Triangle.\n" << "Insert Angle 1 here\n";
				cin >> A1;
				cout << "Insert Angle 2 here.\n";
				cin >> A2;
				A3 = 180 - (A1 + A2);
				if (A1 <= 0)
				{
					cout << "Angle 1 cannot be equal to ZERO or Less!!\n" << "................\n";
				}
				else if (A2 <= 0)
				{
					cout << "Angle 2 cannot be equal to ZERO or Less!!\n" << "................\n";
				}
				else if (A3 <= 0)
				{
					cout << "Angle 3 cannot be equal to ZERO or Less!!\n" << "................\n";
				}
				else
				{
					cout << "the Third Angle equals to..." << A3 << endl << "................\n";
				}


			}

			//5-I/P  loan & intrest rate, O/P intrest & total amount.
			else if (ca == 5)
			{
				float l = 0, ir = 0, i = 0, ta = 0;
				cout << "Please, insert the amount of Loan and the Rate of Intrest in percentage,to calculate the intrest, and total amount.\n";
				cout << "Insert loan amount here, in EGP.\n";
				cin >> l;
				cout << "insert Loan Intrest Rate here, in decimal.\n";
				cin >> ir;
				i = ir * l;
				ta = i + l;
				cout << "the Intrest equals to..." << i << endl;
				cout << "the Total Amount equals to..." << ta << endl << "................\n";


			}

			//6-I/P L of regular shape & no. of sides, O/P  Volume.
			else if (ca == 6)
			{
				int ls = 0, ns = 0, P = 0;
				cout << "Please insert the Lenght of a Regular Shape's side and the Number of sides, to calculate the perimeter.\n" << "Insert lenght here.\n";
				cin >> ls;
				cout << "Insert Number of sides here.\n";
				cin >> ns;
				P = ls * ns;
				cout << "the Perimeter equals to..." << P << endl << "................\n";


			}

			//7-I/P n ,O/P n^2 & n^3.
			else if (ca == 7)
			{
				float n = 0, n2 = 0, n3 = 0;
				cout << "Please insert a number, to get its Squared and Cubic Value.\n" << "Insert the Number here.\n";
				cin >> n;
				n2 = pow(n, 2);
				n3 = pow(n, 3);
				cout << "The Squared value is.." << n2 << endl;
				cout << "The Cubic value is.." << n3 << endl << endl << "................\n";


			}

			// No more Questions in Question 1.
			else
			{
				cout << "Sorry, but this Question has only 7 questions.\n" << endl << "................\n";

			}

		}
	    }

		//Q 2
		 else if (Q == 2)
		{
			// Q 2 selection menu.
			while (ca>=0)
			{
				cout << "\n You Chose the Second Question, to view its results choose 1 or 2, to go back to the previous menu insert 0\n";
				cout << "..........\n";
				cin >> ca;
				cout << "..........\n";

				// End of Question 2
				if (ca == 0)
				{
					break;
				}

				// 1- cin>> cin;
				else if (ca == 1)
				{
					cout << "unintialized variable 'cin' used or the cin will be equal 0\n" << "................\n";
				}

				//2- cha c= 74;
				else if (ca == 2)
				{
					cout << " The character value of cha (c) will be executed in ascii code.\n" << "................\n";
				}

				// End of Question 2.
				else
				{
					cout << "Sorry, but this Question contains only two side questions.\n" << "................\n";
				}
			}
		}
		
		else
		{
			cout << "there is only Two Questions.\n";
			cout << "................\n";


			}
	}

	return 0;
}
