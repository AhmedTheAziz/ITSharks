#include "Car.h"
int Car::counter = 0;
// Set&Get.
string Car::sg_maker(string ma)
{
	maker = ma;
	return maker;
}

string Car::sg_color(string c)
{
	color = c;
	return color;
}

int Car::sg_model(int mo)
{
	model = mo;
	return model;
}
// Set.
void Car::s_maker(string ma)
{
	maker = ma;
}

void Car::s_color(string c)
{
	color = c;

}

void Car::s_model(int mo)
{
	model = mo;
}
// Get.
string Car::g_maker()
{
	return maker;
}

string Car::g_color()
{
	return color;
}

int Car::g_model()
{
	return model;
}

//Static

 int Car::g_counter()
{
	return ++counter;
}
// Constructor.

Car::Car() : maker("Audi"), color("Red"), model(2023)
{
	cout << "/o/ How You Doin' !? /o/ \n";
}

//Car::Car(float)
//{
//	//color = "Black";
//	//maker = "Audi";
//	model = 20.23;
//}

// Destructor.
Car::~Car()
{
	cout << "/o/ SEE YA !!/o/ \n";
}