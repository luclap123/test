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

// tìm số nhỏ thứ hai
int find (int a[], int n)
{
    int Min =a[0];
    for (int i = 0; i < n;i++)
    {
        if (a[i] < Min)
        Min = a[i];
    }
    return ++Min;
}

int min (int a[], int n)
{
    int min = find (a,n);

}

int main ()
{
    int a[max];
    int  n;
    cout<<"input n : ";
    cin>>n;
    input (a,n);
    output (a,n);
    int min = find (a,n);
    cout<<"Min : "<<min;
}