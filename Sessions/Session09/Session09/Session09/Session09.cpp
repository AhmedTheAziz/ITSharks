/*
01/03/2023
Session 09
module 02
STRUCT & POINTERS
*/

#include <iostream>
#include<cmath>
#include <string>
using namespace std;


//1- student data type.
struct student 
{
	string name;
	short age=0;
	int st_ID=0;
	string course;
	string email;
	float GPA=0;
};
//2- example of employee.
struct ed //Employee data
{
	string name;
	int eno;  // employee number
	int age;
	float salary;
	float bonus;
	float ns;   //net salary.
};
//3- copying values.
struct num
{
	int a;
	float b;
};
//4- in session task feet and inches.
struct d //distance
{
	float f; //feet
	float i; //inches
};
d sum(d d1, d d2);
//5-Arry in Struct.
struct arnum
{
	int x[4];
};
//6-Struct in Array.
struct em
{
	int eno=0;
	string fname;
	string sname;
	float salary=0;
	float bonus=0;
	float ns = salary + bonus;
//	ns = salary + bonus;
};
//8- struct in struct.
//8.1- traditional s in s
struct stemtrad
{
	string fname;
	string mname;
	string lname;
	string Adress;
	string state;
	string city;
	string phone;
	string fax;
	int id;
};
//8.2- advanced struct in struct
struct ename
{
	string fname;
	string mname;
	string lname;
};
struct edata
{
	string Adress;
	string state;
	string city;
};
struct enums
{
	string phone;
	string fax;
	int id;
};
//8.3- final fourm.
struct stem
{
	ename name;
	edata data;
	enums number;

};

//9-Pointerss



int main()
{
	//1- Struct student is the data type.
	/*
	student s1,s2;
	s1.name = " Buddha \n";
	s1.age = 25;
	s1.st_ID = 20160036;
	s1.email = " 73@gmail.com \n";
	s1.GPA = 3.00;
	*/

	//2- employee.
	/*
	ed e1;
	e1.name = "Ahmed\n";
	e1.eno = 1;
	e1.age = 30;
	e1.salary = 3000;
	e1.bonus = 250;
	e1.ns = e1.salary+e1.bonus;
	cout << e1.ns;
	*/

	//3- copying Values. !!
	/*
	num x, y;
	x.a = 10;
	x.b = 15.00;
	y = x;
	cout << y.a << endl << y.b;
	*/

	//4- struct Varible and Functions.
	/*
	d dis1, dis2 ;
	cout << "enter feet\n";
	cin >> dis1.f >> dis2.f;
	cout << "enter inches\n";
	cin >> dis1.i >> dis2.i;
	d s= sum(dis1, dis2);
	cout << "sum in feet = " << s.f<<endl;
	cout << "sum in inches = " << s.i<<endl;
	*/

	//5- Array in Struct.
	
	arnum y;
	y.x[0] = 2;
	cout << y[0];
	

	//6- Struct in Array.
	//Employees.
	/*
	em arr[5];
	// Employee No.1
	arr[0].eno = 1;
	arr[0].fname = "Ahmed";
	arr[0].sname = "Abd ElAziz";
	arr[0].salary = 900000;
	arr[0].bonus = 25000;
	//arr[0].ns = arr[0].salary + arr[0].bonus;
	// Employee No.2
	arr[1].eno = 2;
	arr[1].fname = "Ibraheem";
	arr[1].sname = "Hameed";
	arr[1].salary = 80000;
	arr[1].bonus = 15000;
	//arr[1].ns = arr[1].salary + arr[1].bonus;
	//Employee No.3
	arr[2].eno = 3;
	arr[2].fname = "Ahmed";
	arr[2].sname = "El Sharqawy";
	arr[2].salary = 100000;
	arr[2].bonus = 3000;
	//arr[2].ns = arr[2].salary + arr[2].bonus;
	for (int i = 3; i < 5; i++)
	{
		cout << "enter data for Employee No." << i + 1 << "no. , first name, last name ,salaray, bonus , net\n";
		cin >> arr[i].eno >> arr[i].fname >> arr[i].sname >> arr[i].salary
			>> arr[i].bonus;
		arr[i].ns = arr[i].salary + arr[i].bonus;
	}
	for (int z = 0; z < 1; z++)
	{
		cout << "...........Printing................................\n" <<
			"........................................";
	}

	for (int i = 0; i < 5; i++)
	{
		cout << "The info Of " << i + 1 << endl<<"........\n";
		cout << arr[i].eno << endl << arr[i].fname << endl << arr[i].sname << endl
			<< endl << arr[i].salary << endl
			<< arr[i].bonus << endl << arr[i].ns << endl<<"........\n";
	}
	*/

	//7- student s in a
     /*
     student arr[5];
     // studente No.1
      arr[0].name =  "Ahmed";
      arr[0].age = 25;
      arr[0].st_ID = 20230001;
      arr[0].course = "C++";
      arr[0].email = "Ahmed@gmail.c++.com";
     //arr[0].GPA = arr[0].course + arr[0].email;
     // student No.2
     arr[1].name = "Ibrahem";
     arr[1].age = 26;
     arr[1].st_ID = 20230002;
     arr[1].course = "80000;";
     arr[1].email = "";
    //arr[1].GPA = arr[1].course + arr[1].email;
    //student No.3
    arr[2].name = "3;";
    arr[2].age = 28;
    arr[2].st_ID = 20230003;
    arr[2].course = "";
    arr[2].email = ":";
;	//arr[2].GPA = arr[2].course + arr[2].email;
      for (int i = 3; i < 5; i++)
       {
	   cout << "enter data for student No." << i + 1 << "no. , first name, last name ,salaray, email , net\n";
	   cin >> arr[i].name >> arr[i].age >> arr[i].st_ID >> arr[i].course
		>> arr[i].email;
       }
       for (int z = 0; z < 1; z++)
       {
	   cout << "...........Printing................................\n" <<
		"........................................";
       }

       for (int i = 0; i < 5; i++)
       {
	   cout << "The info Of " << i + 1 << endl << "........\n";
	   cout << arr[i].name << endl << arr[i].age << endl << arr[i].st_ID << endl
		<< endl << arr[i].course << endl
		<< arr[i].email << endl << arr[i].GPA << endl << "........\n";
       }
       */

     //8- Struct in Struct.


	 //9- Pointers
	   /*
int x = 10;
int* ptr;  //intiate ptr.
ptr = &x;  // declaring ptr to x.
cout << ptr<<endl; // calling address.
cout << *ptr<<endl; // calling Value.
*/


	return 0;
}


//4- in session task feet and inches.
d sum(d d1, d d2)
{
	d s;
	s.f = d1.f + d2.f;
	s.i = d1.i+d2.i;
	return s;
}