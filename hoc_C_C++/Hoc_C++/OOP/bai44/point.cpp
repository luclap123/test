#include "file.cpp"
using namespace std;
class Point : public File
{
    protected:
    float theory;
    float practice;
    public:
    void input ();
    void output();
};

void Point::input()
{
    File::input();
    cout<<"input point theory : ";
    cin>>theory;
    cout<<"input point practice : ";
    cin>>practice;
}

void Point::output()
{
    File::output();
    cout<<"point theory : "<<theory<<endl;
    cout<<"point practice : "<<practice<<endl;
}