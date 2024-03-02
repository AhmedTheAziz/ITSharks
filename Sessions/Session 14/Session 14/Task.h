
#pragma once
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;
class Task
{
private:
	float l;
	float w;
	float a;
public:
	float sg_l(float x);

	float sg_w(float y);

	float area_calc();


	// Constructor.

	Task();
	Task(int l, int w);

	/*
	* 
	* 
	* 
	* 
	*

	}

	{
		cout << "/o/ How You Doin' !? /o/ \n";
	}

	{
		
	}
	*/
	// Destructor.
	~Task();
	
};


