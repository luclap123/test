#include "employee1.cpp"
using namespace std;
class FulltimeEmployee: public Employee
{
    public:
    FulltimeEmployee (string name, int paymentperhour): Employee(name, paymentperhour)
    {

    }
    int calculatesalary ()
    {
        return 8*Employee::getpaymentperhour();
    }
};