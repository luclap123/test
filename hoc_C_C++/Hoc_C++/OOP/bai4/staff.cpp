#include "company.cpp"
using namespace std;
class Staff : public Company
{
    private:
    double salary;
    public:
    Staff (int id, string name, int age, string address, double salary) :Company(id, name, age, address)
    {
        this->salary = salary;
    }
    void setsalary(double salary)
    {
        this->salary = salary;
    }
    double getsalary()
    {
        return salary;
    }
    void display()
    {
        Company::display();
        cout<<"Salary : "<<salary<<endl;
    }
};