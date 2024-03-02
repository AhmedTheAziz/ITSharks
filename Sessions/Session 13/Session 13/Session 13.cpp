/*
*15-03-2023
* Session 13
*  Class EXtencions
*/

#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
//2- headers Class Extension. RECTANGLE.
#include "Rectangle.h"
//3- car CE.
#include "Car.h"
//5- SUM 
#include "Sum.h"
using namespace std;

//1- example class.
/*
class Car
{
private:
	string maker;
	string color;
	int model=0;
public:

	string sg_maker(string ma)
	{
		maker = ma;
		return maker;
	}
	string sg_color(string c)
	{
		color = c;
		return color;
	}
	int sg_model(int mo)
	{
		model = mo;
		return model;
	}
};
*/



int main()
{
	//1- example class car..& 3-..
	//Car c1,c2;

	/*
	cout <<"Car Company is " << c1.sg_maker("Audi") << endl;
	cout << "Car Model is " << c1.sg_model(1998) << endl;
	cout<< "Car Color is " << c1.sg_color("Grey") << endl;
	*/

    //2- header Class extension rectangle.
	/*
	Rectangle r1;
	cout << "Lenght = " << r1.sg_l(20) << endl;
	cout << "Width  = " << r1.sg_w(40) << endl;
	cout << "Area   = " << r1.area_calc() << endl;
	*/

	//4- constructors & destructors. 
	/*
	class car
	{
	car(); ---> constructor. ==> has the same name as the class,
	                             no return type, automatically called when object is created and the first output. 
	~car();---> destructor. ==> the last output of the class. no need to add values!!
	
	}
	*/

	/*
	c2.s_color("Black");
	c2.s_maker("BMW");
	c2.s_model(1998);
	cout << "Car Color is " << c1.g_color() << endl << "Car Company is " << c1.g_maker() << endl << "Car Model is " << c1.g_model() << endl;
	cout << "Car Color is "  << c2.g_color() << endl << "Car Company is " << c2.g_maker() << endl << "Car Model is " << c2.g_model() << endl;
	*/

	//5-OverLoading Methods & Constructors & Destroctors.
	//sum of 4 types of data( 2*int,3*int,2*float,2*strings)
	Sum calc;
	cout << calc.sum("Ahmed", "Abd-El Aziz") << endl;
	cout << calc.sum(2,5) << endl;
	cout << calc.sum(3,4,7) << endl;
	//cout << calc.sum(1.5,2.8) << endl;
	
	
	//TAASK
	/*
	class overload constroctur & destructor.
	*/

	return 0;
}

//2-header
/*
private:
      float l;
	  float w;
	  float a;
public:
      float sg_l(float x);
	  {
	   l=x;
	   return l;
	  }
	  float sg_w(float y);
	  {
	   w=y;
	   return w;
	  }
	  float area_calc()
	  {
	  a=l*w;
	  return a;
	  }
*/

