#include <iostream>
#include<string>
#include "Employee.h"
#include "Intern.cpp"
using namespace std;

int main()
{
    int n,iid,choice;
    list<Employee> thelist;
    intern A;
    A.readit(thelist);
    A.percentile_generator(thelist);
    while(1)
    {

        cout<<"ENTER choice:\n\n";
        cout<<"1->enter the Number of TOP Records to Fetch:\n";
        cout<<"2->Enter the id to generate Portfolio:\n";
        cout<<"3->exit.\n";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"How many?\n";
            cin>>n;
            A.printnrows(thelist,n);
            cout<<"\n-----------------------------------------------------------------------------------------\n";
            break;
        case 2:
            cout<<"enter Employee id:\n";
            cin>>iid;
            A.pattern_generator(thelist,iid);
            cout<<"**"<<iid<<"'s Portfolio has been saved under filename \"individual.txt\"\n\n\n";
            cout<<"\n-----------------------------------------------------------------------------------------\n";
            break;

            case 3: exit(0);
        }

    }
    return 0;
}
