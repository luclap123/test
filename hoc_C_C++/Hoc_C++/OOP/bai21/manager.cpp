#pragma once
#include <iostream>
using namespace std;
class Manager
{
    public:
    int id_manager;
    string name_manager;
    
    void input();
    void output();    
};

void Manager::input()
{
    cout<<"input id manager : ";
    cin>>id_manager;
    cout<<"input name manager : ";
    cin>>name_manager;
}

void Manager::output()
{
    cout<<"id manager : "<<id_manager<<endl;
    cout<<"name manager : "<<name_manager<<endl;
}