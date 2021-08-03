#pragma once
#include <iostream>
#include <string>
using namespace std;
class Hang 
{
    public:
    string name_hang;
    float price;
    int amount;

    void input();
    void output();
};

void Hang::input()
{
    cout<<"input name hang : "; cin.ignore();
    getline(cin,name_hang);
    cout<<"input price : ";
    cin>>price;
    cout<<"input amount : ";
    cin>>amount;    
}

void Hang::output()
{
    cout<<"name hang : "<<name_hang<<endl;
    cout<<"price : "<<price<<endl;
    cout<<"amount : "<<amount<<endl;
    cout<<"money : "<<price*amount<<endl;
}
