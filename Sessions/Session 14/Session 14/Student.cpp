#include "Student.h"
int Student::count = 0;
void Student::s_name(string x)
{
	name = x;
	
}

void Student::s_age(int y)
{
	age = y;
}

 string Student::g_name()
{
	return name;
}

int Student::g_age()
{
	return age;
}


int Student::g_count()
{
	return ++count;
}
