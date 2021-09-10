#include <iostream>
#include <time.h>
#include <stdlib.h>
#define max 100
using namespace std;

void input (int a[], int n)
{
    srand (time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand ()%100;
    }
}

void output (int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
}

void sort (int a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j=n-1; j>i; j--)
        {
            if (a[j]<a[j-1])
            {
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
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
    sort (a,n);
    cout<<"after sort increase : "<<endl;
    output (a,n);
}