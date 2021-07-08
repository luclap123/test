#include "customer2.cpp"
#include "invoice.cpp"
using namespace std;
int main ()
{
    Customer customer1(11," hoa",20);
    Invoice invoice1(11,customer1,100000);
    cout<<invoice1.getcustomername()<<endl;
    cout<<invoice1.getamountafterdisscount()<<endl;

}