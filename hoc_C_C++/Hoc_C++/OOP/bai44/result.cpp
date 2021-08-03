#include "point.cpp"
using namespace std;
int dem=0;
class Result : public Point
{
    public:
    void display()
    {
        if (theory>=5 && practice >=5)
        {
            cout<<setw(2)<<"STT"<<setw(3)<<"code students"<<setw(6)<<"first name"<<setw(10)<<"last name"<<endl;
            cout<<setw(2)<<++dem<<setw(3)<<code_students<<setw(6)<<first_name<<setw(10)<<last_name<<endl;
        }
    }

};