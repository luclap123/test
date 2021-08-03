#include "employee1.cpp"
#include "fulltime.cpp"
#include "parttime.cpp"
using namespace std;
int main ()
{
    Employee *a1=new ParttimeEmployee("lap",50,5);
    cout<<"name : "<<a1->getname()<<endl;
    cout<<"salary : "<<a1->calculatesalary()<<endl;
    Employee *a2= new FulltimeEmployee("ho",50);
    cout<<"name : "<<a2->getname()<<endl;
    cout<<"salary : "<<a2->calculatesalary()<<endl;

}