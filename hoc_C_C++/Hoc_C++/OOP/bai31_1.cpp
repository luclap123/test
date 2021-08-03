#include "bai31.cpp"
using namespace std;
int main ()
{
    Account s1(100,"lap",2000);
    s1.display();
    s1.withdraw(2100);
    s1.deposit(600);
    cout<<"amount : "<<s1.getbalance()<<endl;
    s1.withdraw(2100);
    cout<<"amount : "<<s1.getbalance()<<endl;

}