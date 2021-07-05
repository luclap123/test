#include <iostream>
using namespace std;

void input (int *a, int n)
{
    for (int i = 0; i < n;i++)
    {
        cout<<"input"<<i<<" : ";
        cin>>a[i];
    }  
}

void find(int *a, int n)
{
    for (int i = 0; i < n;i++)
    {
        if (a[i] % 3==0 && a[i] %5 !=0)
        cout<<a[i]<<endl;
    }
}

int  main ()
{
    int n;
    int *a;
    cout<<"input number : ";
    cin>>n;
    a= new int [n];
    input(a,n);
    find(a,n);
    delete[]a;
    return 0;

}