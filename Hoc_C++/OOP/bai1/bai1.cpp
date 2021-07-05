#include "person.cpp"
#include "student.cpp"
#include "teacher.cpp"
using namespace std;
int main ()
{
    Student s1;
    Teacher s2;
    s1.setname("luc lap");
    s1.setage(18);
    s1.setaddress("bac giang");
    s1.setgpa(8.3);
    cout<<"name student : "<<s1.getname()<<endl;
    cout<<"age student : "<<s1.getage()<<endl;
    cout<<"address student : "<<s1.getaddress()<<endl;
    cout<<"gpa student : "<<s1.getgpa()<<endl;
    s2.setname("hong phuong");
    s2.setage(25);
    s2.setaddress("ha noi");
    s2.setsalary(200);
    cout<<"name teacher : "<<s2.getname()<<endl;
    cout<<"age teacher : "<<s2.getage()<<endl;
    cout<<"address teacher :"<<s2.getaddress()<<endl;
    cout<<"salary teacher :"<<s2.getsalary()<<endl;    
}