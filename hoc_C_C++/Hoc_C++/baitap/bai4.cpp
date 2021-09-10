#include <iostream>
#include <math.h>
#define max 100
using namespace std;

void input (int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"input number "<<i<<" :";
        cin>>a[i];
    }
}

void output (int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
}

void sum(int a[], int n, int k)
{
    int add=0;
    int dem=0;
    int average=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]>=k)
        {
            add += a[i];
            dem++;
        }
    }
    average = add/dem;
    cout<<average<<endl;
}

int main ()
{
    int a[max];
    int  n;
    int k;
    cout<<"input n : ";
    cin>>n;
    input (a,n);
    output (a,n);
    cout<<"input k : ";
    cin>>k;
    sum(a,n,k);
}