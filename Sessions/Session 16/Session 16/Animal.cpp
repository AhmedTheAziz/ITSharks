#include "Animal.h"

void Animal::s_name(string n)
{
	name = n;

}

void Animal::s_age(int a)
{
	age = a;

}

void Animal::s_orgin(string o)
{
	origin = o;
}

string Animal::g_name()
{
	return name;
}

int Animal::g_age()
{
	return age;
}

string Animal::g_origin()
{
	return origin;
}
