#pragma once
#include <iostream>
#include <string>
using namespace std;
class Company 
{
    private:
    int id;
    string name;
    int age;
    string address;
    public:
    Company ()
    {

    }
    Company (int id, string name, int age, string address)
    {
        this->id = id;
        this->name = name;
        this->age = age;
        this->address = address;
    }
    void setid(int id)
    {
        this->id = id;
    }
    int getid()
    {
        return id;
    }
    void setname(string name)
    {
        this->name = name;
    }
    string getname()
    {
        return name;
    }
    void setage(int age)
    {
        this->age = age;
    }
    int getage()
    {
        return age;
    }
    void setaddress(string address)
    {
        this->address = address;
    }
    string getaddress()
    {
        return address;
    }
    void display()
    {
        cout<<"id : "<<id<<endl;
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"address : "<<address<<endl;
    }
};