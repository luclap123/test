#include "company.cpp"
#include "staff.cpp"
#include "boss.cpp"
using namespace std;
int main ()
{
    Staff s1(12,"gao",18,"ha noi",1000);
    s1.display();
    Boss s2(12,"lap",20,"bac giang",1000);
    s2.display();
    s1.setname("a du");
    s1.display();
}