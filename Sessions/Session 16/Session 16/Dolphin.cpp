#include "Dolphin.h"
string Dolphin::g_name()
{
    return name;
}

int Dolphin::g_age()
{
    return age;
}

string Dolphin::g_origin()
{
    return origin;
}

int Dolphin::g_fact()
{
    int f;
    cout << "enterthe number of fact you want to know form 1 to 3 \n";
    cin >> f;
    fact = f;
    return fact;
}

void Dolphin::f_fact()
{
    switch (fact)
    {
    case(1):
        cout << "Dolphins can live up to 50 Years!! \n";
        break;
    case(2):
        cout << "Dolphins Stick with their mothers for a long time \n";
        break;
    case(3):
        cout << "Dolphins have two Stomachs \n";
        break;
    }
}
