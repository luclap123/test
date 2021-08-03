#pragma once    
#include <iostream>
using namespace std;

class Customer
{
    private:
    int id;
    string name;
    int disscount;
    public:
    Customer ()
    {

    }
    Customer (int id, string name, int disscount)
    {
        this->id = id;
        this->name = name;
        this->disscount = disscount;
    }
    int getid()
    {
        return id;
    }
    string getname()
    {
        return name;
    }
    void setname(string name)
    {
        this->name = name;
    }
    int getdisscount()
    {
        return disscount;
    }
    void setdisscount(int disscount)
    {
        this->disscount = disscount;
    }
};