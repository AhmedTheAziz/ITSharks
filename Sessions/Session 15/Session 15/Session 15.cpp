/*
22-03-2023
Session 15
Inheritance. 
*/
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
//1-Inheritance.
//1.1- Public Date (SUPER CLASS).
#include "GenData.h"
//1.2- SUB CLASS.
#include "Student.h"
//class Student  : Public GenData   (Before Main in main file).
//1.3- METHOD OVERRIDING.

//3- Polymorphism & Virtual Functions.

using namespace std;

int main()
{
	//1-Inheritance..
	Student s1("Ahmed.", "Male.", 25, 2, 2.65, "Mechatronics.");

	//CONS&DES OverLOADING.
	/*
	Student s1;
	s1.s_n("BUDDHA");
	s1.s_gpa(3.5);
	*/

	//1.3- MO
	s1.display();

	//2- TASK!!!
	/*
	 describe teacher and assistance employee ;
	 name,age, gpa as stud; 
	 salary, dep as emp;
	 use override f() to cout data;
	*/

	//3- Polymorphism & Virtual Functions. ~= METHOD overloading/ OVERRRIDING.
	// Using POINTERSSSS->

	return 0;
}