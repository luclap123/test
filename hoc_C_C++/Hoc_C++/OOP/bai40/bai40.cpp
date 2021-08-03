#include "table.cpp"
#include "paper.cpp"
using namespace std;
int main ()
{
    Table a("hubt",19,8.4);
    cout<<"name : "<<a.getname()<<endl;
    cout<<"amount : "<<a.getamount()<<endl;
    cout<<"point : "<<a.getpoint()<<endl;
    a.display();
    Paper b("25ho","luc lap","13",25);
    cout<<"MSV : "<<b.getMSV()<<endl;
    cout<<"name hs : "<<b.getname()<<endl;
    cout<<"level : "<<b.getlevel()<<endl;
    cout<<"course : "<<b.getcourse()<<endl;
}