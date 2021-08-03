#include "diem.cpp"
using namespace std;
int main ()
{
    int n;
    Point *a;
    cout<<"input number : ";
    cin>>n;
    a=new Point[n];
    for (int i=0; i<n; i++)
    {
        a[i].input();
    }
    for (int i=0; i<n; i++)
    {
        a[i].output();
    }
    cout<<"name of student graduate : "<<endl;
    for (int i=0; i<n; i++)
    {
        a[i].in1();
    }
    cout<<"name of student join graduation : "<<endl;
    for (int i=0; i<n; i++)
    {
        a[i].in2();
    }
    cout<<"name of student leave graduation : "<<endl;
    for (int i=0; i<n; i++)
    {
        a[i].in3();
    }
    return 0;
}