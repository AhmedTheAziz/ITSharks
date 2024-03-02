/*
Ahmed AbdelAziz
Task03
Questions from  1 to 3.
This code gives you the option to choose from the answers while running the code.
Please Copy the whole code. :)
*/
#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

void wn(int v)
{

	string units[20] = { "ZERO", "ONE", "TWO", "THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE","TEN",
	"ELEVEN","TWELVE","THIRTEEN","FOURTEEN","FIFTEEN","SIXTEEN","SEVENTEEN","EIGHTTEEN","NINETEEN" };

	string tens[10] = { "", "TEN", "TWENTY", "THIRTY","FORTY","FIFTY","SIXTY","SEVENTY","EIGHTY","NINETY" };
	if (v < 0)
	{
		cout << " Negative ";
		wn(-v);
		cout << "\nneg" << v << endl;
	}

	//Thousand.

	else if (v >= 1000)
	{
		wn(v / 1000);
		cout << " THOUSAND";
		if (v % 1000)
		{
			if (v % 1000 < 100)
			{
				cout << " AND";
			}
			cout << " ";
			wn(v % 1000);
		}

	}


	//Hundred.
	else if (v >= 100)
	{
		wn(v / 100);
		cout << " HUNDRED";

		if (v % 100)
		{
			cout << " AND ";
			wn(v % 100);

		}
	}

	//Tens.
	else if (v >= 20)
	{
		cout << tens[v / 10];

		if (v % 10)
		{
			cout << " ";
			wn(v % 10);

		}
	}

	//Units.
	else
	{
		cout << units[v];
	}
	//return;

}

void en(string n)
{
	//string nn[] = { n };
	string e = "END" ;
	while (n == n)
	{
		cout << "Enter The Name of the Employee\n";
		cout << "To Exit, Please type END\n";
		cin >> n;

		if (n != e)
		{
			int x = 0;
			float y = 0, z = 0;
			cout << "Please, Enter the Working Hours/Day, then the Rate of Salary/Hr in EGP, to know the Total Salary/Year in EGP\n";
			cin >> x >> y;             //work hrs and rate of pay per hr, anS= s/h *((hrs*7)*52)
			z = x * y * 7 * 52;       // S/H= annual salary /(hrs per week * no. of weeks (52) )
			cout << n << "'s Total Salary is " << z << "EGP" << endl << endl;
			//cout << "GoodJob\n";
		}
		else
		{
			break;
		}
	}

	return;
}


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
				cout << "\n Welcome to Sub-Questions selection list, insert from 1 to 12 to view the Answers , 0 to close.\n";
				cout << "................\n";
				cin >> SQ;
				cout << "................\n";

				// End of Question 1.
				if (SQ == 0)
				{
					break;
				}

				//SQ 1- Switch Loop, to check vowel/consonant.
				else if (SQ == 1)
				{
					char x;

					cout << "Insert a Character, to determine whether it's VOWEL or not.\n";
					cin >> x;
					switch (x)
					{
					case 'a':
					case 'A':
					case 'e':
					case 'E':
					case 'i':
					case 'I':
					case 'o':
					case 'O':
					case 'u':
					case 'U':
						cout << "The Character is Vowel\n" << x;
						break;

					default:
						cout << "The Character is Consonant\n" << x;
						break;

					}
				}

				//SQ 2- Switch loop to determin large number between 2 var.
				else if (SQ == 2)
				{
					int x = 0, y = 0, z = 0, xy = 0;
					cout << "Enter Two Integrs, to determine which is the Largest.\n";
					cin >> x >> y;
					xy = x - y;
					z = (xy) / abs(xy);
					switch (xy)
					{
					case 0:
						cout << "The Two Numbers are Equal.!!!";
						break;
					default:
						switch (z)
						{
						case -1:
							cout << "The Largest Number is the Second " << y << endl;
							break;
						case 1:
							cout << "The Largest Number is the the First " << x << endl;
							break;

						}
						break;
					}

				}

				//SQ 3- Day Of Week Name, Switch.
				else if (SQ == 3)
				{
					cout << "Enter the Number of The Day, P.S: Week starts from Monday\n";
					int x = 0;
					cin >> x;
					switch (x)
					{
					case 1:
						cout << "Monday.\n";
						break;
					case 2:
						cout << "Tuesday.\n";
						break;
					case 3:
						cout << "Wednsday.\n";
						break;
					case 4:
						cout << "Thursday.\n";
						break;
					case 5:
						cout << "Friday.\n";
						break;
					case 6:
						cout << "Saturday.\n";
						break;
					case 7:
						cout << "Sunday\n";
						break;
					default:
						cout << "Hey!!, Week has Only SEVEN days!!!";
						break;
					}
				}

				//SQ 4- Calculator.
				else if (SQ == 4)
				{
					cout << "Try a Mathimatical Eqn. between Two Numbers using (+,-,*,/,%)\n";
					cout << "..........................................................................\n";
					cout << "P.S:\n" << "if you want to power a number with another use p or P(ex: 2p2)\n";
					cout << "..........................................................................\n";
					int x = 0, y = 0;
					int s = 0, sub = 0, mp = 0, P = 0, mod = 0;
					float div = 0;
					char op;
					cin >> x >> op >> y;
					mod = x % y;
					s = x + y;
					sub = x - y;
					mp = x * y;
					P = pow(x, y);

					div = (float)x / y;
				
		

					switch (op)
					{
					case '+':
						cout << s << endl;
						break;
					case'-':
						cout << sub << endl;
						break;
					case'*':
						cout << mp << endl;
						break;
					case'/':
						cout << div << endl;
						break;
					case'p':
						cout << P << endl;
						break;
					case'P':
						cout << P << endl;
						break;
					case'%':
						cout << mod << endl;
						break;
					default:
						break;
					}

				}

				//SQ 5- Odd numbers from 1 to 99..
				else if (SQ == 5)
				{
					cout << "NOW Printing Odd Numbers in Serial from 1 to 99\n";
					cout << "...........\n" << "...........\n" << "...........\n";
					int x = 1, xr = 0;

					while (x < 100)
					{
						xr = x % 2;
						if (xr != 0)
						{
							cout << x << endl;
						}
						x++;
					}

				}

				//SQ 6- serial poweredfrom 1 to 121.
				else if (SQ == 6)
				{
					cout << "NOW Printing Serial Powered Numbers  from 1 to 121\n";
					cout << "...........\n" << "...........\n" << "...........\n";
					int x = 1, xr = 1;

					while (xr < 121)
					{
						xr = pow(x, 2);

						cout << xr << endl;

						x++;
					}

				}

				//SQ 7- numbers divisible by 5, from 1 to 99.
				else if (SQ == 7)
				{
					cout << "Now All Numbers Divisble by 5 from 1 to 99, will be Previewed.\n";
					int x = 0, y = 0;
					for (x = 1; x <= 99; x++)
					{
						y = x % 5;
						if (y == 0)
						{
							cout << x << endl;
						}

					}
				}

				// SQ 8-  5 integers I/P, O/P sum & avg.
				else if (SQ == 8)
				{
					cout << "Enter Five Intgers, to get their Sum and Average\n";
					int x = 0, y = 0, z = 0, a = 0, b = 0, s = 0;
					float avg = 0;
					cin >> x >> y >> z >> a >> b;
					s = x + y + z + a + b;
					avg = s / 5;
					cout << "The Sum = " << s << endl;
					cout << "The Average = " << avg << endl;
				}

				// SQ 9- Read +ve only and print N!
				else if (SQ == 9)
				{
					int x = 1;
					int fac = 1;
					cout << "Enter Any Postive Number, to get its Factorial..\n";
					cin >> x;
					if (x > 0)
					{
						for (; x > 0; x--)
						{
							fac *= x;
						}
						cout << fac << endl;
					}
					else
					{
						cout << "Sorry Positive Numbers ONLY!!.\n";
					}
				}

				//SQ 10- Read +ve, determine Prime no.
				else if (SQ == 10)
				{
					cout << "Insert a Positive Number to Determin whether it is Prime or Not\n";
					int x = 0, y = 0, z = 0, a = 0, b = 0, i = 0;
					cin >> x;
					if (x > 0)
					{

						for (int i = 1; i <= x; i++)
						{
							a = x % i;
							if (a == 0)
							{
								for (y = 1; y <= i; y++)
								{
									b = i % y;
									if (b == 0)
									{
										z++;
									}

									else
									{
										break;
									}

								}
							}

						}

						if (z == 2)
						{
							cout << "Prime Number..\n";
						}
						else {
							cout << "Composite Number..\n";
						}
					}
					else
					{
						cout << "Sorry Positive Numbers ONLY!!.\n";
					}

				}

				//SQ 11- numbers divislble by k, from m to n
				else if (SQ == 11)
				{
					cout << "Enter a Number to Determin The Divisbile Numbers.\n";
					int x = 0, y = 0, k = 0, m = 0, n = 0;
					float z = 0;
					cin >> k;
					cout << "Enter Your Range\n" << endl << "From \n";
					cin >> m;
					cout << "To\n";
					cin >> n;
					for (x = m; x <= n; x++)
					{
						y = x % k;
						if (y == 0)
						{
							cout << x << endl;
						}
						else
						{

						}
					}
				}

				//SQ 12- Read +ve, determin perfect square.
				else if (SQ == 12)
				{
					cout << "Insert an Integer, to determine whether it is a Perfect Square or Not\n";
					int x = 0, y = 0;
					cin >> x;
					if (x >= 0)
					{
						for (int a = 0; a <= x; a++)
						{
							y = pow(a, 2);

							if (x == y)
							{
								cout << "Perfect Square..\n";
							}
							else
							{
								//cout << "y = "<<y << endl <<"a = "<< a << endl;
							}
						}
					}
					else {
						cout << "Sorry, Positive numbers only\n";
					}
				}

				//No more Sub-Questions...
				else
				{
					cout << "There is Only 12 Sub-Questions in Question 1..\n";

				}
			}
		}

		//Q 2 output of following program..
		else if (Q == 2)
		{
			while (SQ >= 0)
			{
				cout << "\n Welcome to Sub-Questions selection list, insert from 1 to view the Answer , 0 to close.\n";
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
					cout << "height is not a declared variable\n";
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

				//SQ 1- sum the individual digits of any number
				else if (SQ == 1)
				{
					cout << "Enter any Long Integer, to get the Sum of its Individual Digits\n";
					long long int x = 0, y = 0, z = 0, s = 0;
					cin >> x;
					for (; x > 0;)
					{
						y = x % 10;
						cout << y << endl;
						x /= 10;
						z += y;
					}
					cout << "The Sum = " << z << endl;
				}

				//SQ 2- Convert Integers into WORDS..
				else if (SQ == 2)
				{
					int n;
					cout << "Enter a Number, to be converted into Words\n";
					cin >> n;
					wn(n);
				}

				//SQ 3- Employee name + total salary.
				else if (SQ == 3)
				{
					cout << ".......................................................................................\n";
					cout << "1. The Purpose of of the Name END, is to Exit the Program\n";
					cout << ".......................................................................................\n";
					string n;
					cout << ".......................................................................................\n";
					cout << "2-\n";
					en(n);
					cout << ".......................................................................................\n";
					cout << ".......................................................................................\n";
					cout << "3- YES, DO ... WHILE Could be used, due to it is the same as while in compiling.\n";
					cout << ".......................................................................................\n";


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