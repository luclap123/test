#include "bai27.cpp"
using namespace std;
int main ()
{
    Employee s(101,"hoang","kim",1000.4);
    cout<<"id : "<<s.getid()<<endl;
    cout<<"full name : "<<s.getfullname()<<endl;
    cout<<"salary : "<<s.getsalary()<<endl;
}