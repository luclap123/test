#include <iostream>
using namespace std;

class student 
{
private :
    
        string name;
        int age;
    
public :
    student (string name, int age)  
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
    }

};

int main ()
{
    student s1("long", 23);
    student s2("kiem", 18);
    s1.display();
    s2.display();
}