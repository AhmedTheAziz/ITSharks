#include "Activity.h"

void Activity::coachperses()
{
	// 1,3,12 months

	cout << "\nChoose the Bundle\n";
	cout << "0) to Exit. \n 1) 1 Month = 1000 EGP.\n  2) 3 Months = 2500 EGP.\n 3) 12 Months = 4500 EGP. \n";
	cin >> Bundle;
	switch (Bundle)
	{
	case 0:
		cout << "Thank you!\n";
		break;
	case 1:
		actprice +=1000;
		bund = 1;
		break;
	case 2:
		actprice +=2500;
		bund = 3;
		break;
	case 3:
		actprice +=4500;
		bund = 12;
		break;
	default:
		cout << "CHOOSE ONE OF THE BUNDLES!!!\n";
	}

	//test.
	//cout << actprice;
}

void Activity::extraClass()
{
	cout << "\nChoose your Extra Class Activity.\n";
	cout << "0) exit.\n 1) MMA =500 EGP.\n 2) Yoga = 500 EGP.\n ";
	cin >> choiceclass;
	if (choiceclass == 0)
	{
		cout<<"Thankyou!!\n";
	}
	else if (choiceclass == 1)
	{
		extra = "MMA";
		actprice +=500;
		//test
		//cout << extra << " " << actprice << endl;
	}
	else if (choiceclass == 2)
	{
		extra = "YOGA";
		actprice += 500;
		//test
		//cout << extra << " " << actprice << endl;
	}
	else 
	{
		cout << "CHOOSE ONE OF THE OPTIONS!!!!\n";
	}
}

void Activity::TotalPaid()
{
	cout<<"the total amount paid on extras is "<<actprice <<" EGP \n";
}

/*void Activity::minimart()
{
	cout << "\nsnacks time!!, choose your favorite snax ;)\n";
	cout << "0) to exit mini mart.\n 1) Water s\n 2) Water L\n 3) Protein Bar\n 4) scop whey Pro ";

}*/
