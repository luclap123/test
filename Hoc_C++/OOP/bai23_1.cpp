#include "bai23.cpp"
using namespace std;
int main ()
{
    person s;
    s.setid(1001);
    s.setname("lapbro");
    s.setage(18);
    s.setaddress("ha noi");
    cout<<"id : "<<s.getid()<<endl;
    cout<<"name : "<<s.getname()<<endl;
    cout<<"age : "<<s.getage()<<endl;
    cout<<"address : "<<s.getaddress()<<endl;
}