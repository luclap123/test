#pragma once
#include <iostream>
using namespace std;
class Person 
{
    private:
    string name;
    int age;
    string address;
    public:
    string getname()
    {
        return name;
    }
    void setname(string name)
    {
        this->name = name;
    }
    int getage()
    {
        return age;
    }
    void setage(int age)
    {
        this->age = age;
    }
    string getaddress()
    {
        return address;
    }
    void setaddress(string address)
    {
        this->address = address;
    }
};