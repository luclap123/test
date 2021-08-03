#include <iostream>
using namespace std;

class student 
{
private :
    string name;
    int age;
public :
    student ()
    {
        name = "student";
        age =18;
    }

    void display ()
    {
        cout<<name<<" "<<age<<endl;
    }
};

int main ()
{
    student s;
    s.display();
}