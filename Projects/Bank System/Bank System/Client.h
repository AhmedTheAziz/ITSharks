#pragma once
#include <iostream>
#include <string>
#include<cmath>
#include <fstream>

using namespace std;

class Client
{
protected:
	string Name;
	string Phone;
	string ID;

public:
	void S_Data(); // Set Data. (Name/Phone/ID)
	void CheckPhone(); // CHeck Phone no.
	void CheckID(); // Check ID.

};

