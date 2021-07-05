#include "gpa.cpp"
using namespace std;
int main ()
{
    Student s("lap",18,9);
    cout<<"name : "<<s.getname()<<endl;
    cout<<"date of birth : "<<s.getdob()<<endl;
    cout<<"gpa : "<<s.getgpa()<<endl;
}