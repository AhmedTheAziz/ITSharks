#pragma once

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;
class Activity
{
protected:
	int x = 1;
	int Bundle = 0;
	int bund = 0;
	int actprice = 0;
	int choiceclass = 0;
	string extra;
	//string nutrition;
	//string minimart;
	/*string sups;
	int water;
	int probar;*/

public:
	void coachperses();
	void extraClass();
	//void minimart();
	void TotalPaid();
};

