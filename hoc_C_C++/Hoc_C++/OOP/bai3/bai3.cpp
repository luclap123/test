#include "money.cpp"
using namespace std;
int main ()
{
    Student s("lap","boy",18000);
    s.display();
    s.setname("phong");
    s.setgender("girl");
    s.setsalary(29.3);
    s.display();
}