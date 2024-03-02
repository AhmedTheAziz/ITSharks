#include "Zebra.h"

string Zebra::g_name()
{
    return name;
}

int Zebra::g_age()
{
    return age;
}

string Zebra::g_origin()
{
    return origin;
}

void Zebra::species(int s)
{
    switch (s) 
    {
    case(1):
        cout << "Grevy's Zebra \n";
        break;
    case(2):
        cout << "Plains Zebra \n";
        break;
    case(3):
        cout << "Mountains Zebra \n";
        break;
    default:
        cout << "Zebras only have 3 speiecies..\n";
    }
}
