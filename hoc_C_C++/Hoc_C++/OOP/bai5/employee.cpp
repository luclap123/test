#pragma once
#include <iostream>
using namespace std;
class Employee
{
    private:
    string name;
    int salary;
    public:
    Employee(string name, int salary)
    {
        this->name = name;
        this->salary = salary;
    }
    void setname(string name)
    {
        this->name = name;
    }
    string getname()
    {
        return name;
    }
    void getsalary(int salary)
    {
        this->salary = salary;
    }
    int getsalary()
    {
        return salary;
    }
    void display()
    {
        cout<<"name : "<<name<<endl;
        cout<<"salary : "<<salary<<endl;
    }
};