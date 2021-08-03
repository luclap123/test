#include "te.cpp"
using namespace std;
class Student  : public Person
{
    private:
    double salary;
    public:
    Student (string name, string gender, double salary) : Person (name, gender)
    {
        this->salary = salary;
    }
    void setsalary(double salary)
    {
        this->salary = salary;
    }
    double getsalary()
    {
        return this->salary;
    }
    void display()
    {
        Person::display();
        cout<<"salary : "<<salary<<endl;
    }
};