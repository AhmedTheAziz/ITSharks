#include "Info.h"

//Read Test
void Info::file()
{
	string fname="Data.csv";
	vector<vector<string>>content;
	vector<string>row;
	string line, word;
	fstream data(fname, ios::in);
	if (data.is_open())
	{
		while (getline(data, line))
		{
			row.clear();
			stringstream str(line);
			while (getline(str, word, ','))
				row.push_back(word);
				content.push_back(row);
		}

	}
	else
	{
		cout << "Error 404!!\n";
	}
	for (int i = 0; i < content.size(); i++)
	{
		for (int j = 0; j < content[i].size(); j++)
		{
			cout << content[i][j] << "\t\t " ;
		}
		cout << endl;
	}
	data.close();
}
//Register
void Info::setMP()
{
	cout << "\t\t**Welcome to the Regestring Window**\n";
	cout << "\t\t Please Enter your Mobile Phone.\n";
	cin >> MP;
	}
void Info::setPass()
{
	/*cout << "\t\t\ Please Enter Your Password. \n";
	Pass = "";
	ch = _getch();
	while (ch != 13 && ch!=72)
	{
		Pass.push_back(ch);
		cout << '*';

		ch = _getch();
	}
	cout << endl;*/
	cout << "\t\t\ Please Enter Your Password. \n";
	Pass = "";
	while ((ch =_getch()) != '\r') 
	{
		if (ch == '\b') {
			// Process a destructive backspace
			if (Pass.size() > 0) {
				Pass.erase(Pass.size() - 1, 1);
				std::cout << "\b \b";
			}
		}
		else {
			Pass.push_back(ch);
			std::cout.put('*');
		}

	}
	cout << endl;
	//cin >> Pass;
}
//Save Data
void Info::rescon()
{
	content.clear();
}
void Info::SendInfo()
{
	string fname = "Data.csv";
	fstream data(fname, ios::app);
	data << MP << ',' << Pass << ',' << 3000<<endl;
	data.close();
	rescon();
}



