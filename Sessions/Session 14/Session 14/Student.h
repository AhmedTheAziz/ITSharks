#pragma once
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;
class Student
{
private:
	string name;
	int age;
	static int count;
public:
	//SEt
void s_name( string x);
void s_age(int y);

	//GET
string g_name();
int g_age();
	// Statics.
int g_count();
	//Others
};

