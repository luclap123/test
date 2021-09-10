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

int find_max(int a[], int n)
{
    int Max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > Max)
        {
            Max = a[i];
        }
    }
    return Max;
}

void result_max(int a[], int n) // tìm số bé hơn số lớn nhất
{
    int Max = find_max(a,n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] < Max)
        cout<<a[i]<<" ";
    }
}

int find_min(int a[], int n)
{
    int Min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < Min)
        {
            Min = a[i];
        }
    }
    return Min;
}

void result_min(int a[], int n) //tìm số lớn hơn số bé nhất
{
    int Min = find_min(a, n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] > Min)
        {
            cout<<a[i]<<" ";
        }
    }
}

int main ()
{
    int a[max];
    int  n;
    cout<<"input n : ";
    cin>>n;
    input (a,n);
    output (a,n);
    cout<<"-----------"<<endl;
    result_max (a,n);
    cout<<endl;
    result_min (a,n);
}