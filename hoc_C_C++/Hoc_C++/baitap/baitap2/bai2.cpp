#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void input(int a[], int n)
{
    srand(time(NULL));
    for (int i = 0; i < n;i++)
    {
        a[i]= rand()%100;
    }
}

void output(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\t";
    }
}

void swap(int &a, int &b)
{
    int temp = a;
    a=b;
    b=temp;
}

void sort(int a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j =i+1; j<n; j++)
        {
            if (a[j]>a[i])
            {
                swap(a[i], a[j]);
            }
        }
    }
}

int main ()
{
    int *a;
    int n;
    cout<<"input n: ";
    cin>>n;
    a = new int[n]; 
    input(a, n);
    output(a, n);
    sort (a,n);
    cout<<"\nafter sort array : "<<endl;
    output(a, n);
}