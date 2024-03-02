#include "Functions.h"

Functions::Functions()
{
	
	int x = 0;
	//cout << "to exit press 4";
	//cin >> x;
	while (x != 5)
	{
		
		cout << " 1 to add,2 remove, 3 to search,4 replace ,5 exit\n";
		cin >> x;

		switch (x)
		{
		case 1:
			ABook();//fucntion add book.
			break;
		case 2:
			ReBook();//fucntion remove book.
			break;
		case 3:
			Search();//fucntion search for book.
			break;
		case 4:
			replace();//fucntion replace
			break;
		case 5:
			break;
		default:
			cout << "";
		}
	}
}

void Functions::ABook()
{
	int o = 1;

	
	while (o != 0)
		{
			for (i; i < 5; i++)
			{
				cout << "name\n";
				cin >> Name;
				cout << "author\n";
				cin >> Author;
				cout << "pages\n";
				cin >> pages;
				
				lib[i] = Name;
				i++;
				
				break;
			}
			cout << "to countinue press 1, to stop press 0\n";
			cin >> o;
			//cout << lib[i] << endl;
			//cout << i << endl;
		}
	

}

void Functions::Search()
{
	bool found = false;
	string nameofbook;
	cout << "name of book??\n";
	cin >> nameofbook;
	for (int q = 0; q < 5; q++)
	{
		if (nameofbook == lib[q])
		{
			found = true;
			break;
		}
	}
	if (found)
	{
		cout << nameofbook<<" the book is found!!\n";
	}
	else
	{
		cout << "NotFound!!\n";
	}
}

void Functions::ReBook()
{
	bool found = false;
	//string nil = ;
	string nameofbook;
	cout << "name of book??\n";
	cin >> nameofbook;
	for (int q = 0; q < 5; q++)
	{
		if (nameofbook == lib[q])
		{
			found = true;
			lib[q] = "";
			//i--;
			if (found)
			{
				cout << nameofbook << " the book has been Removed!!\n";
			}
			else
			{
				cout << "NotFound, try again!!\n";
			}
			break;
		}
	}

}

void Functions::replace()
{
	char ans ;
	bool found = false;
	string nameofbook;
	cout << "name of book??\n";
	cin >> nameofbook;
	for (int q = 0; q < 5; q++)
	{
		if (nameofbook == lib[q])
		{
			found = true;
			lib[q] = "";

			if (found)
			{
				cout << nameofbook << " the book has been Removed!!\n";
				cout << "replace?? y/n\n";
					cin >> ans;
					switch (ans)
					{
					case 'y':
						cout << "name\n";
						cin >> Name;
						cout << "author\n";
						cin >> Author;
						cout << "pages\n";
						cin >> pages;

						lib[q] = Name;
						break;
					case 'n':
						break;
					default:

						cout << "try again!!!\n";
					}
			}
			else
			{
				cout << "NotFound, try again!!\n";
			}
			break;
		}
	}

}
