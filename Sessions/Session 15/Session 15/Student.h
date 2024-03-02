#pragma once
#include "GenData.h"
class Student :
    public GenData
{
private:
    int level=0;
    float GPA=0.0;
    string depart;
public:
    //SET.
    void s_lvl(int l);
   void s_gpa(float gp);
   void s_dep(string d);
   //GET
   int g_lvl(int l);
   float g_gpa();
   string g_dep(string d);
   //display
   void dis();
   // Method Overrriding.
   void display();

   // CONS&DEST
   Student();
   Student(string n, string g, int a, int l, float gp, string d);
   ~Student();
  
};

