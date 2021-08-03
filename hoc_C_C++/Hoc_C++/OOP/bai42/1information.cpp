#pragma once
#include <iostream>
#include <string>
using namespace std;
int dem1=0;
int dem2=0;
class Information
{
    protected:
    string code;
    string name;
    string position;

    public:
    void input ()
    {
        cout<<"input code officer ";
        cin>>code;
        cout<<"input name : ";cin.ignore();
        getline (cin,name);
        cout<<"input position : ";
        getline (cin,position);
    }    
};