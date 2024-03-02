#include "Student.h"

void Student::s_lvl(int l)
{
	level = l;
}

void Student::s_gpa(float gp)
{
	GPA = gp;
}

void Student::s_dep(string d)
{
	depart = d;
}

int Student::g_lvl(int l)
{
	return l;
}

float Student::g_gpa()
{
	return GPA;
}

string Student::g_dep(string d)
{
	return depart;
}

void Student::dis()
{
	cout << "Level : "<< level <<endl;
	cout << "GPA : "<< GPA <<endl;
	cout << "Department of : "<< depart <<endl;
}

// Method Overriding 
void Student::display()
{
	GenData::display();
	cout << "Level : " << level << endl;
	cout << "GPA : " << GPA << endl;
	cout << "Department of : " << depart << endl;
}

// CONS&DES
 Student::Student()
{
	 level = 0;
	 GPA = 0.0;
	 depart = "Unknown";
	cout << "--SUB Con:: Dude HELLO!!!!!--\n";
}

 Student::Student( string n, string g, int a, int l, float gp, string d) : GenData(n, g, a)
 {
    level = l;
    GPA = gp;
    depart = d;
	
 }

Student::~Student()
{
	cout << "~~SUB DES :: GOODBYE~~\n";
}



