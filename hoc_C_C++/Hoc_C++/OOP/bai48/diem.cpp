#include "Students.cpp"
using namespace std;
class Point : public Student 
{
    protected:
    float math;
    float literature;
    public:
    void input();
    void output();
    void in1();
    void in2();
    void in3();
};

void Point::input()
{
    Student::input();
    cout<<"input point math : ";
    cin>>math;
    cout<<"input point literature : ";
    cin>>literature;
}

void Point::output()
{
    Student::output();
    cout<<"math : "<<math<<endl;
    cout<<"literature : "<<literature<<endl;
}

void Point::in1()
{
    if (math + literature >= 15)
    cout<<name<<endl;
}

void Point::in2()
{
    if (math >5 && literature >5)
    cout<<name<<endl;
}

void Point::in3()
{
    if ((math <5 && literature <5) ||(math <5) || (literature <5) )
    cout<<name<<endl;
}
