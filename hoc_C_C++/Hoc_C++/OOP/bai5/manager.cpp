#include "employee.cpp"
using namespace std;
class Manager : public Employee 
{
    private:
    int bonus;
    public:
    Manager (string name, int salary, int bonus) : Employee (name, salary)
    {
        this->bonus=bonus;
    }
    void setbouns(int bonus)
    {
        this->bonus=bonus;
    }
    int getbouns()
    {
        return bonus;
    }
    int getsalary()
    {
        return Employee::getsalary()+bonus;
    }
    void display()
    {
        cout<<"name :"<<getname()<<endl;
        cout<<"salary :"<<getsalary()<<endl;
    }
};