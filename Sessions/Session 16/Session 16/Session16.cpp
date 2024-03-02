/*
29-03-2023
Session 16.
 Polymorphism & Virtual Function.
*/

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
//1- Polymorphism.
#include "Super.h"
#include "Rectangle.h"
#include "Triangle.h"
//2- TASKK!!
#include "Animal.h"
#include "Zebra.h"
#include "Dolphin.h"
using namespace std;

int main()
{
	//1- Polymorphism.
	/*
	Rectangle rect;
	Triangle trig;
	Super shape;
	Super* ptr1, *ptr2, *ptr3;
	ptr1 = &rect;
	ptr2 = &trig;
	ptr3 = &shape;
	ptr1->s_val(5, 4);
	ptr2->s_val(10, 20);
	ptr3->s_val(20, 50);
	cout << "Rect area = " << ptr1->area() << endl;
	cout<< "Trig area = " << ptr2->area() << endl;	
	cout << "shape area = " << ptr3->area() << endl;
	*/

	//TASK MOTHER ANIMAL!!!. 
	/*
	write a program with a mother class animal. inside it define a name and age variables and set_value() f(). 
	then create two bases variables zebra and dolphine which write a message telling 
	the age, the name and giving some extra info, place of origin.
	*/
	
	Animal ani;
    Zebra ze;
	Dolphin dol;
	Animal* ptr1, * ptr2;
	ptr1 = &ze;
	ptr2 = &dol;
	//Zebra
	ptr1->s_name("Marty");
	ptr1->s_age(10);
	ptr1->s_orgin("Africa");
	//Dolphin
	ptr2->s_name("Snowflake");
	ptr2->s_age(28);
	ptr2->s_orgin("Pecific Ocean");
	//Output.
	//Zebra.
	cout << "Zebra's info :\n";
	cout << ptr1->g_name()<<endl << ptr1->g_age() << endl << ptr1->g_origin() << endl;
	ze.species(2);
	//Dolphin.
	cout << "Dolphin's info:\n";
	cout << ptr2->g_name() << endl << ptr2->g_age() << endl << ptr2->g_origin() << endl;
	dol.g_fact();
	dol.f_fact();
	


	// END OF OOP.

	//2- Data Sturcture.
	//2.1- INTRO...
	 /*
	 2.1.1-QUEUE.  enqueue & dequeue.
	 2.1.2-linked List ( unkonw size is okay, pointer ).
	 2.1.3- Stacks. (LIFO) (Last IN 1st OUT).
	 2.1.4- FIFO (1st IN 1st OUT).
	 2.1.5- TREES.
	*/

	//2.2- Classifications...
	/*
	
	*/
	
	//2.3- Operations..
	/*
	
	*/

	


	return 0;
}



