#pragma once
#include <iostream>
using namespace std;
class Date 
{
    public:
    int x;
    int y;
    int z;
    void input ()
    {
        cout<<"input days :";
        cin>>x;
        cout<<"input months :";
        cin>>y;
        cout<<"input years :";
        cin>>z;
    }

    void output()
    {
        cout<<"days :"<<x<<" months :"<<y<<" years :"<<z<<endl;
    }
};