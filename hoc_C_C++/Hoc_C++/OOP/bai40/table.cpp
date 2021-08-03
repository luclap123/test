#pragma once
#include <iostream>
#include <string>
using namespace std;
class Table
{
    private:
    string name_mon;
    int amount;
    double point;

    public:
    Table ()
    {

    }
    Table (string name_mon,int amount,double point)
    {
        this->name_mon = name_mon;
        this->amount = amount;
        this->point = point;
    }

    void setname(string name_mon)
    {
        this->name_mon = name_mon;
    }
    string getname()
    {
        return name_mon;
    }

    void setamount(int amount)
    {
        this->amount = amount;
    }
    int getamount()
    {
        return amount;
    }

    void setpoint(double point)
    {
        this->point = point;
    }
    double getpoint()
    {
        return point;
    }

    void display()
    {
        float s ;
        float average;
        s =amount*point;
        average = s/amount;
        cout<<"value average : "<<average<<endl;
    }
};


