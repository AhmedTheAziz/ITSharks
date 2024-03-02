#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <conio.h>
#include <vector>
#include <sstream>
#include <stdlib.h>

using namespace std;
class Info
{
protected:
	vector<vector<string>>content;
	int ch=0;
	string MP, Pass;
	double Balance;
public:
	void file();
	void setMP();
	void setPass();
	void SendInfo();
	void rescon();
};

