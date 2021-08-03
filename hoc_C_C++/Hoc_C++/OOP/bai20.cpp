#include <iostream>
#include <math.h>
using namespace std;
class student
{
    private:
    string name;
    char gender;
    public :
    student ()
    {
        name ="unknown";
        gender ='u';
    }

    student (string name)
    {
        this->name = name;
        this->gender ='u';
    }

    student (char gender)
    {
        this ->gender = gender;
        this ->name = "unknown";
    }

    student (string name, char gender)
    {
        this ->name = name;
        this ->gender = gender;
    }

    void display ()
    {
        cout<<"name : "<<name <<endl;
        if (gender='m')
        {
            cout<<"gender: Male"<<endl;
        }
        if (gender='f')
        {
            cout<<"gender: Female"<<endl;
        }
        if (gender='u')
        {
            cout<<"gender: Unknown"<<endl;
        }
    }
};

