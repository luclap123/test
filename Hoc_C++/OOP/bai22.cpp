#include <iostream>
using namespace std;
class student
{
    private:
    string name;
    int age;
    double value;
    public:
    string getName()
    {
        return name;
    }
    void setName(string name)
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
    double getvalue()
    {
        return value;
    }
    void setvalue(double value)
    {
        this->value = value;
    }
};
