#pragma once
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;
class Car
{
private:
	string maker;
	string color;
	int model = 0;
	static int counter;
public:
	// Set&Get.
	string sg_maker(string ma);
	string sg_color(string c);
	int sg_model(int mo);
	// Set.
	void s_maker(string ma);
	void s_color(string c);
	void s_model(int mo);
	// Get.
	string g_maker();
	string g_color();
	int g_model();
	//Static 
	int g_counter();
	//Constructor.
	Car();
	//Destructor.
	~Car();


};

