#pragma once
#include <iostream>
using namespace std;
class Product 
{
    public:
    int id;
    string nameproduct;
    int dcproduct;
    void input();
    void output();

};

void Product::input()
{
    cout<<"input id : ";
    cin>>id;
    cout<<"name product : ";
    cin>>nameproduct;
    cout<<"dc product : ";
    cin>>dcproduct;
}

void Product::output()
{
    cout<<"output id : "<<id<<endl;
    cout<<"name product : "<<nameproduct<<endl;
    cout<<"dc product : "<<dcproduct<<endl;
}