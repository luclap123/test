#include "employee1.cpp"
using namespace std;
class ParttimeEmployee : public Employee
{
    private:
    int workinghours;
    public:
    ParttimeEmployee(string name, int paymentperhour, int workinghours) : Employee(name, paymentperhour)
    {
        this->workinghours = workinghours;
    }
    int calculatesalary()
    {
        return workinghours * Employee::getpaymentperhour();
    }
};