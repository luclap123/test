#include <iostream>
using namespace std;

class Student  
{
    private :
    string name;
    int age;
    string gender;
    double gpa;

    public:
    Student (string name, int age, string gender, double gpa)
    {
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->gpa = gpa;
    }

    void display ()
    {
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"gender : "<<gender<<endl;
        cout<<"gpa : "<<gpa<<endl;
    }
};   

int main ()
{
    Student s("luc lap",19,"boy",9);
    s.display();
    
}