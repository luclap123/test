#pragma once
#include <iostream>
using namespace std;
class Loads
{
    public:
    int id;
    string name;
    int price;
    void input();
    void output();

};

void Loads::input()
{
    cout<<"intput id : ";
    cin>>id;
    cout<<"intput name : ";
    cin>>name;
    cout<<"intput price : ";
    cin>>price;
}

void Loads::output()
{
    cout<<"id : "<<id<<endl;
    cout<<"name : "<<name<<endl;
    cout<<"price : "<<price<<endl;
}