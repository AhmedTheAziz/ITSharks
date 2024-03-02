#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;
class Super
{
protected: // allows to change value only in inhertaned classes.
	int width = 0;
	int height = 0;
public:
	void s_val(int w, int h);
	//Super(int w, int h);
	virtual  int area(); // virtual is to make the obj value differ in inhertance.

};

