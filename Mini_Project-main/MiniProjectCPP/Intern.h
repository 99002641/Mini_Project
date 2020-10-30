#ifndef INTERN_H_INCLUDED
#define INTERN_H_INCLUDED
#include<iostream>
#include<string>
#include<list>
#include "Employee.h"
using namespace std;

class intern: Employee
{

public:
    intern():Employee()
    {

    }
    intern(string a,string b,string c,int d,int e,int f,int g, int i,  int j)
        :Employee(a,b,c,d,e,f,g,i,j)
    {

    }

    void readit(list<Employee> &);
    void percentile_generator(list<Employee>&);
    void pattern_generator(list<Employee> &,int );
    void printnrows(list<Employee> &,int);
    void printall(list<Employee> &);

    std::string designation()
    {
        status="Intern";
        return status;
    }
};


#endif // INTERN_H_INCLUDED
