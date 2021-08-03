#include "person.cpp"
using namespace std;
class Teacher : public Person
{
    private:
    double salary;
    public :
    double getsalary()
    {
        return salary;
    }
    void setsalary(double salary)
    {
        this->salary = salary;
    }
};