/*
13-03-2023
Session 12
OOP.
*/

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
//#include "student.h"

using namespace std;

//1- OBJECT's Data and Operation
class rectangle {
private:
	float lenght;
	float width;
public:
	void set_lenght(float l)//it can be void or having return type..
	{
		if (l > 0)
		{
			lenght = l;
		}
		else
		{
			cout << "Enter Positive numbers \n";
		}
	}
	void set_width( float w)
	{
		if (w > 0)
		{
			width = w;
		}
		else
		{
			cout << "Enter Positive numbers \n";
		}
		}
	float get_lenght()
		{
			return lenght;
	}
	float get_width()
		{
			return width;
	}
	float get_area()
		{
			float a = lenght * width;
			return a;
	}
};

//2- student name,id,email,gpa and cout all.
class student {
private:
	string name;
	string email;
	float gpa=0;
	long int id=0;
public:
	//setting
	void set_name(string n)
	{
	cout << " enter name\n";
	cin >> n;
	name =n;


	}
	void set_email(string e)
	{
		cout << " enter email\n";
		cin >> e;
		email =e;

	}
	void set_id(long int i)
	{
	cout << " enter id\n";
	cin >> i;
	id = i;
		
	}
	void set_gpa(float g)
	{
	cout << " enter gpa\n";
	cin >> g;
	gpa = g;
	}
	// getting
    string get_name()
	{
		return name;
	}
	 string get_email()
	{
		 return email;
	}
	long int get_id()
	{
		return id;
	}
	float get_gpa()
	{
		return gpa;
	}
	//setting and getting
	string sg_name(string n)
	{
		cout << " enter name\n";
		//cin >> n;
		name = n;
		return name;
	}
	string sg_email(string e)
	{
		cout << " enter email\n";
		//cin >> e;
		email = e;
		return email;
	}
	long int sg_id(long int i)
	{
		cout << " enter id\n";
		//cin >> i;
		id = i;
		return id;
	}
	float sg_gpa(float g)
	{
		cout << " enter gpa\n";
		//cin >> g;
		gpa = g;

		return gpa;
	}
	//cout
	void get_info()
	{
		cout << endl << sg_name(name)<< endl << sg_email(email) << endl << sg_id(id) << endl << sg_gpa(gpa) << endl;
	}
};

int main()
{
	//1- OBJECT's Data and Operation

	/*
	rectangle box;
	box.set_lenght(10);
	box.set_width(20);
	cout << "lenght is " << box.get_lenght() << endl;
	cout << "width is " << box.get_width() << endl;
	cout << "area is " << box.get_area() <<endl;
	*/

	//2- student name,id,email,gpa and cout all.
	//cout << "enter students info..\n";
	student s1;
	/*
	s1.set_name("Ahmed");
	s1.set_email("Ahmed@me.you");
	s1.set_id(20160036);
	s1.set_gpa(2.65);
	*/
	//advanced

	// for input data
	///*string n, e;
	//long int i=0;
	//float g=0;
	//s1.set_name(n);
	//s1.set_email(e);
	//s1.set_id(i);
	//s1.set_gpa(g);
	//cout<<endl<<s1.get_name() << endl<<s1.get_email()<<endl << s1.get_id()<<endl << s1.get_gpa()<<endl;
	//cout << endl;*/

	//setting and getting @ the same function.
	cout <<endl<< s1.sg_name("AHMED\n") <<endl <<s1.sg_email("AHMED@YOU.ME\n") <<endl<< s1.sg_id(20160036) << endl << s1.sg_gpa(2.65) << endl;
	
	s1.get_info();

	//3- LIBRARY!?


	return 0;
}