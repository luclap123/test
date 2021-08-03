#pragma once
#include <iostream>
using namespace std;
class Employee
{
    private:
    string name;
    int paymentperhour;
    public:
    Employee(string name, int paymentperhour)
    {
        this->name = name;
        this->paymentperhour = paymentperhour;
    }
    void setname(string name)
    {
        this->name = name;
    }
    string getname()
    {
        return name;
    }
    void setpaymentperhour(int paymentperhour)
    {
        this->paymentperhour = paymentperhour;
    }
    int getpaymentperhour()
    {
        return paymentperhour;
    }
    virtual int calculatesalary()=0;
};