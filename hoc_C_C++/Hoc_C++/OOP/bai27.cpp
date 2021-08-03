#include <iostream>
using namespace std;
class Employee
{
    private:
    int id;
    string firstname;
    string lastname;
    double salary;
    public:
    Employee (int id, string firstname, string lastname, double salary)
    {
        this->id = id;
        this->firstname = firstname;
        this->lastname = lastname;
        this->salary = salary;
    }
    void setid(int id)
    {
        this->id = id;
    }
    int getid()
    {
        return id;
    }
    void setfirstname(string firstname)
    {
        this->firstname = firstname; 
    }
    string getfirstname()
    {
        return firstname;
    }
    void setlastname(string lastname)
    {
        this->lastname = lastname;
    }
    void setsalary(double salary)
    {
        this->salary = salary;
    }
    double getsalary()
    {
        return salary;
    }
    string getfullname()
    {
        return firstname+" "+lastname;
    }
};