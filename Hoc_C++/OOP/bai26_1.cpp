#include "bai26.cpp"
using namespace std;
int main ()
{
    Student s(123,"lap",18,"ha noi",9);
    cout<<"id : "<<s.getid()<<endl;
    cout<<"name : "<<s.getname()<<endl;
    cout<<"age : "<<s.getage()<<endl;
    cout<<"address : "<<s.getaddress()<<endl;
    cout<<"score : "<<s.getscore()<<endl;
    s.setscore(-9);
    cout<<"score : "<<s.getscore()<<endl;
    s.setscore(17);
    cout<<"score : "<<s.getscore()<<endl;

}