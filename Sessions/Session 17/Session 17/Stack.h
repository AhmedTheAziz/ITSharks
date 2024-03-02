#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;
#include "node_00.h"
class Stack
{
node_00* top; // head
public:
	Stack(); 
	bool isEmpty();
	void push(int item);
	void display();
	int pop();
};

