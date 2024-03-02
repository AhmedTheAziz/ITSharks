#pragma once
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;
class Sum
{
private:
	int x=0;
	float a=0.0;
	string q;
public:
	int sum(int n1, int n2);
	int sum(int n1, int n2, int n3);
	float sum(float n1, float n2);
	string sum(string s1, string s2);

};

