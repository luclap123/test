#include "company.cpp"
using namespace std;
class Boss : public Company
{
    private:
    double allowance;
    public:
    Boss (int id, string name, int age, string address, double allowance) :Company(id, name, age, address)
    {
        this->allowance = allowance;
    }
    void setallowance(double allowance)
    {
        this->allowance = allowance;
    }
    double getallowance()
    {
        return allowance;
    }
    void display()
    {
        Company::display();
        cout<<"allowance : "<<allowance<<endl;
    }
};