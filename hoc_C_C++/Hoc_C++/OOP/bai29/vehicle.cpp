#pragma once
#include <iostream>
#include <string>
using namespace std;
class Vehicle 
{
    public:
    string name;
    int year_produce;
    string brand;

    void input();
    void output();
};

void Vehicle::input()
{
    cout<<"input name : "; cin.ignore();
    getline(cin, name);
    cout<<"input year produce : ";
    cin>>year_produce;
    cout<<"input brand : "; cin.ignore();
    getline(cin, brand);
}

void Vehicle::output()
{
    cout<<"name : "<<name<<endl;
    cout<<"year produce : "<<year_produce<<endl;
    cout<<"brand : "<<brand<<endl;
}