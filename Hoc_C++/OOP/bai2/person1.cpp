#include <iostream>
using namespace std;
class Person 
{
    private:
    string name;
    int dob;
    public:
    Person (string name, int dob)
    {
        this->name = name;
        this->dob = dob;
    }
    void setname(string name)
    {
        this->name = name;
    }
    string getname()
    {
        return name;
    }
    void setdob(int dob)
    {
        this->dob = dob;
    }
    int getdob()
    {
        return dob;
    }
};