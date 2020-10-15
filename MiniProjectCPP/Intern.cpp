#include<iostream>
#include<string>
#include<list>
#include "Employee.h"
#include<iterator>
#include "Intern.h"
#include <bits/stdc++.h>

void intern::readit(list<Employee> &thelist)
{
    string S, T, A,B,C,D,E,F,G,H,I;
    fstream fin;
    fin.open("dataset1.csv", ios::in);
    while( getline(fin, S))
    { cout<<S<<"\n";
        stringstream X(S);
        getline(X, A, ',');
        getline(X, B, ',');
        getline(X, C, ',');
        getline(X, D, ',');
        getline(X, E, ',');
        getline(X, F, ',');
        getline(X, G, ',');
        getline(X, H, ',');
        getline(X, I, ',');
        Employee temp(A,B,C,stoi(D),stoi(E),stoi(F),stoi(G),stoi(H),stoi(I));
        thelist.push_back(temp);
    }
    cout<<"\n \n \n \n \n \n**FINISHED READING DATASET: dataset1.csv\n";
}



void intern::percentile_generator(list<Employee>& thelist)
{
    int count1=0,count2=0;
    list<Employee>::iterator iter;
    for(iter=thelist.begin(); iter!=thelist.end(); ++iter)
    {
        iter->total =iter->cpp + iter->python +iter->sdlc + iter->linuxs;
    }
    thelist.sort([](const Employee & a, const Employee & b)
    {
        return a.total > b.total;
    });
    for(iter=thelist.begin(); iter!=thelist.end(); ++iter)
    {
        count1++;
        iter->percentile=((double)(thelist.size()-count1)/(double)thelist.size())*100;
        cout<<"\n";
    }
    fstream fout;
    fout.open("employedata.txt", ios::out );
    fout<<"   "<<"(Name)  "<<"(ID) "<<"(TOTAL) "<<"(PERCENTILE) ";
    fout<<"\n---------------------------------------------------------------\n";
    for(iter=thelist.begin(); iter!=thelist.end(); ++iter)
    { count2++;
        fout<<count2<<"::"<<iter->name<<"      "<<iter->id<<"      "<<iter->total<<"       "<<iter->percentile<<"\n";
    }
    fout.close();
    count2=0;
    fstream f1out;
    f1out.open("COMPLETE_DATA.csv", ios::out );
    for(iter=thelist.begin(); iter!=thelist.end(); ++iter)
    { count2++;
        f1out<<iter->name<<","<<iter->id<<","<<iter->dob<<","<<iter->state<<","<<iter->cpp<<","<<iter->python<<","<<iter->linuxs<<","<<iter->sdlc<<","<<iter->total<<","<<iter->percentile<<"\n";
    }
    f1out.close();

}


void intern::pattern_generator(list<Employee> &thelist,int iid)
{ int i;
    list<Employee>::iterator iter;
    for(iter=thelist.begin(); iter!=thelist.end(); ++iter)
    {
        if(iter->id == iid)
        {fstream f2out;
        f2out.open("Individual.txt", ios::out );
        f2out<<"NAME:"<<iter->name<<"\n"<<"ID:"<<iter->id<<"\n"<<"Date Of Birth:"<<iter->dob<<"\n"<<"STATE:"<<iter->state<<"\n"<<"CPP Programming:"<<iter->cpp<<"\n"<<"PYTHON:"<<iter->python<<"\n"<<"LINUX:"<<iter->linuxs<<"\n"<<"SDLC:"<<iter->sdlc<<"\n\n\n\n";

        f2out<<"|";
        for(i=0;i<=(iter->cpp)/10;i++)
            f2out<<">>";
        f2out<<"("<<iter->cpp<<")";
        f2out<<"C Plus Plus\n";

        f2out<<"|";
        for(i=0;i<=(iter->python)/10;i++)
            f2out<<">>";
        f2out<<"("<<iter->python<<")";
        f2out<<"Python\n";

        f2out<<"|";
        for(i=0;i<=(iter->sdlc)/10;i++)
            f2out<<">>";
        f2out<<"("<<iter->sdlc<<")";
        f2out<<"SDLC\n";

        f2out<<"|";
        for(i=0;i<=(iter->linuxs)/10;i++)
            f2out<<">>";
        f2out<<"("<<iter->linuxs<<")";
        f2out<<"LINUX\n\n\n\n";

        f2out<<"TOTAL:"<<iter->total<<"\n\n"<<"PERCENTILE:"<<iter->percentile<<"\n";


        }

    }
}
void intern::printnrows(list<Employee> &thelist,int n)
{
    int count1=0;
    list<Employee>::iterator iter;

    cout<<"   "<<"(Name)  "<<"(ID) "<<"(TOTAL) "<<"(PERCENTILE) ";
    cout<<"\n---------------------------------------------------------------\n";
    for(iter=thelist.begin(); iter!=thelist.end(); ++iter)
    {
        count1++;
        cout<<count1<<"::"<<iter->name<<"      "<<iter->id<<"      "<<iter->total<<"       "<<iter->percentile<<"\n";
        if(count1==n)
            break;
    }
}
