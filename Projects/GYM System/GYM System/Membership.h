#pragma once
#include "Activity.h"
class Membership :
    public Activity
{
protected:
    string name;
    int id = 0;
    int age=0;
    char gender;
    int categ = 0;
     int lnth=0;
     int amount = 0;
public:
    void inforegester();
    void info();
    void category();
};

