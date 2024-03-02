#include "Rectangle.h"


float  Rectangle::sg_l(float x)
{
	if (x < 0)
	{
		cout << "enter +ve no.\n";
	}
	else
	{
		l = x;
		return l;
	}
}
float  Rectangle::sg_w(float y)
{
	if (y > 0)
	{
		w = y;
		return w;
	}
	else
	{
		cout << "enter +ve no.\n";
	}
} 
float  Rectangle::area_calc()
{
	a = l * w;
	return a;
}