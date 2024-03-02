#pragma once
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;
class GenData
{
private:
	string name;
	string gender;
	int age=0;
public:
	// SET
	void s_n(string n);
	void s_g(string g);
	void s_a(int a);
	// GET
	string g_n();
	string g_g();
	int g_a();
	//Display
	void display();
	// CON&DES
 GenData();
 GenData(string n, string g, int a);
};

