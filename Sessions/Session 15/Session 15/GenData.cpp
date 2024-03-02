#include "GenData.h"

void GenData::s_n(string n)
{
	name = n;
}

void GenData::s_g(string g)
{
	gender = g;
}

void GenData::s_a(int a)
{
	age = a;
}

string GenData::g_n()
{
	return name;
}

string GenData::g_g()
{
	return gender;
}

int GenData::g_a()
{
	return age;
}

void GenData::display()
{
	cout << "Name : " << name << endl;
	cout << "Gender : " << gender << endl;
	cout << "Age : " << age << endl;
}

GenData::GenData()
{
	name = "Unknown";
	gender = "Unknown";
	age = 0;
	cout << "--Super Con:: Hello Dude!!!--\n";
}

GenData::GenData(string n, string g, int a)
{
	name = n;
	gender = g;
	age = a;

}

