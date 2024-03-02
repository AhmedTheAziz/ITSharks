#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;


class Functions
{
private:
	string Name;
	string Author;
	int pages=0;
	string lib[5];
	int i = 0;
public:
	Functions();
	void ABook(); //Add Book.
	void Search(); //Search for a Book.
	void ReBook(); // Remove Book.
	void replace(); //replace Book W/ another.

};

