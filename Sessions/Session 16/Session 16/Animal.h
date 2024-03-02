#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

class Animal
{
protected:
	string name;
	int age=0;
	string origin;

public:
	void s_name(string n);
	void s_age(int a);
	void s_orgin(string o);
	string g_name();
	int g_age();
	string g_origin();
};

