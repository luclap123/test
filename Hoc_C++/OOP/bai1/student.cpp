#include "person.cpp"
using namespace std;
class Student  : public Person
{
    private:
    double gpa;
    public:
    double getgpa()
    {
        return gpa;
    }
    void setgpa(double gpa)
    {
        this->gpa = gpa;
    }
   
};