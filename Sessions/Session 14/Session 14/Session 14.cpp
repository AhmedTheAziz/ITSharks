/*
20-03-2023
Session 14
Default Copy, SCMEM,SCMETH & OOV.
*/

#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;

//0.0- Task class overload constroctur & destructor.
#include "Task.h"
//1- Default Copy.

//2- Static Class Members.
#include "Car.h"
#include "Student.h"
//3- Static Class Method.
#include "Sum.h"
//4- Operator OverLoading.
#include "oov.h"



int main()
{
	//0.0 Task
	/*
	Task task1, task2;
	task1.sg_l(2);
	task1.sg_w(3);
	cout << task1.area_calc() << endl;
	//Task(2, 3);
	*/

	//1-
	 
 
	//2- SCMembers
	/*
	Car car1, car2;
	//car1.s_color("Purple");
	//car2.s_maker("Honda");
	//cout << car1.g_color() << endl << car1.g_counter() << endl;
	//cout << car2.g_color() << endl << car2.g_counter() << endl;
	//cout << car1.g_model() << endl << car2.g_model()<<endl;
	*/

	//3-STatic Class Method
	/*
	cout<<Sum::sum(10, 20)<<endl;
	Sum s1;
	//cout << s1.sum(20, 20) << endl; 
	cout<<Sum::mul(20, 10)<<endl;
	cout << Sum::sub(20, 10) << endl;
	 //Task use Cin !!!!!!!!!!!
	*/

	//4-Operator OverLoading..
	oov c1(5);
	oov c2(10);
	cout << c1.g_count() << endl;
	cout << c2.g_count() << endl;
	oov c3 = ++c1;
	oov c4 = --c2;
	cout << c1.g_count() << endl;
	cout << c2.g_count() << endl;
	cout << c3.g_count() << endl;
	cout << c4.g_count() << endl;

	//Operator Overloading..
	/*
	++c1;
	++c2;
	++c2;
	cout << c1.g_count()<<endl;
	cout << c2.g_count()<<endl;
	--c2;
	cout << c2.g_count() << endl;
	*/



	return 0;
}