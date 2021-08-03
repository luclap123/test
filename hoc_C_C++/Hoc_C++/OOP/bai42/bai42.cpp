#include "1information.cpp"
#include "Person.cpp"
#include <iomanip>
using namespace std;
int main ()
{
    int n;
    Person *a;
    cout<<"input number : ";
    cin>>n;
    a= new Person [n];
    for (int i=0; i<n; i++)
    {
        a[i].input();
        a[i].checker();
    }
    cout<<"list of Payroll "<<endl;
    cout<<setw(3)<<"STT"<<setw(8)<<"Name"<<setw(10)<<"salary"<<setw(20)<<"total money"<<endl;
    for (int i=0; i<n; i++)
    {
        a[i].displayBC();
    }
    cout<<"list of Contract "<<endl;
    cout<<setw(3)<<"STT"<<setw(8)<<"Name"<<setw(10)<<"day"<<setw(20)<<"total money"<<endl;
    for (int i=0; i<n; i++)
    {
        a[i].displayHD();
    }


}