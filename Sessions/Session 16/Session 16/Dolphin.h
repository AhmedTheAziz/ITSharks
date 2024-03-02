#pragma once
#include "Animal.h"
class Dolphin :
    public Animal
{
private:
    int fact=0;
public:
    string g_name();
    int g_age();
    string g_origin();
    //extra info.
    int g_fact();
    void f_fact();
};

