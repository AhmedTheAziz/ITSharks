
				#include <iostream>
				#include <cmath>
				#include<math.h>
				using namespace std;





				int main()
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
					return 0;
					}
				}