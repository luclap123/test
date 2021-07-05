#include "person1.cpp"
using namespace std;
class Student : public Person
{
    private:
    double gpa;
    public:
    Student (string name, int dob, double gpa): Person(name,dob)
    {
        this->gpa = gpa;
    }
    void setgpa(double gpa)
    {
        this->gpa = gpa;
    }
    double getgpa()
    {
        return gpa;
    }
};