#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;
class Employee
{
public:
    string name,dob,state,status;
    int cpp,python,linuxs,sdlc,total,id;
    int aadhar;
    double percentile;

    Employee():name(" "),dob(" "),state(" "),cpp(0),python(0),linuxs(0),sdlc(0),id(0), aadhar(0)
    {

    }

    Employee(string a,string b,string c,int d,int e,int f,int g, int i,  int j)
        :name(a),dob(b),state(c),cpp(d),python(e),linuxs(f),sdlc(g),id(i), aadhar(j)
    {

    }
    void display()
    {
        cout<<name<< " "<<aadhar;
    }

    virtual std::string  designation()
    {
        status="Employee";
        return status;
    }

};

#endif // EMPLOYEE_H_INCLUDED
