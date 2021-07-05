#include "employee.cpp"
#include "manager.cpp"
using namespace std;
int main ()
{
    Employee s1("lap",200);
    s1.display();
    Manager s2("kim",200,100);
    s2.display();
    s2.setbouns(909);
    s2.display();

}