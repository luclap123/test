#include "may.cpp"
using namespace std;
int main ()
{
    students *a;
    int n;
    cout<<"input number students : ";
    cin>>n;
    a= new students[n];
    for (int i=0; i<n; i++)
    {
        a[i].input();
    }
    sort(a,n);
    for (int i=0; i<n; i++)
    {
        a[i].output();
    }
}