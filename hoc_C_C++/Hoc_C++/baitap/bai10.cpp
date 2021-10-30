#include <iostream>
#include <time.h>
#include <stdlib.h>
#define max 100
using namespace std;

void input(int a[], int n)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand()%10;
    }
}

void output (int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\t";
    }
}

void seclection_sort(int a[], int n)
{
    int Max;
    for (int i = 0; i < n-1; i++)
    {
        Max = i;
        for (int j=i+1; j<n; j++)
        {
            if (a[j]>a[Max])
            {
                Max = j;
            }
        }
        if (Max != i)
        {
            int swap = a[i];
            a[i] = a[Max];
            a[Max] = swap;
        }
    }
}



int main ()
{
    int a[max] ;
    int  n;
    cout<<"input n : ";
    cin>>n;
    input (a,n);
    output (a,n);
    seclection_sort(a,n);
    cout<<"\nafter decrease array : "<<endl;
    output (a,n);
}