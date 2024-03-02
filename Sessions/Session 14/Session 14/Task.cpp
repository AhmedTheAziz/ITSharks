#include "Task.h"

float Task::sg_l(float x)
{
	l = x;
	return l;
}

float Task::sg_w(float y)
{
	w = y;
	return w;
}

float Task::area_calc()
{
	a = l * w;
	return a;
}

Task::~Task()
{
	cout << "/o/ SEE YA !!/o/ \n";
}

Task::Task()
{
	sg_l(1.1);
	sg_w(2.2);
	area_calc();
	cout << "HELLoo\n";
}

Task::Task(int l, int w)
{
	cout<<"hellOO " <<l + w<<endl;
}
