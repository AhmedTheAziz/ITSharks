#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;
#include "node_00.h"
class Linked_List //:
	//public node_00
{
public:
	node_00* head;
	Linked_List();
	bool isEmpty();
	void insertnode_01(int newitem);
	void display();


};