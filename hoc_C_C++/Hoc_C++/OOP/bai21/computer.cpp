#pragma once
#include <iostream>
using namespace std;
class Computer
{
    public:
    int code_computer;
    int type_computer;
    string status;

    void input();
    void output();
};

void Computer::input()
{
    cout<<"input code computer : ";
    cin>>code_computer;
    cout<<"input type computer : ";
    cin>>type_computer;
    cout<<"input status : ";
    cin>>status;
}

void Computer::output()
{
    cout<<"code computer : "<<code_computer<<endl;
    cout<<"type computer : "<<type_computer<<endl;
    cout<<"status : "<<status<<endl;
}