// d? quy da tuy?n
#include <iostream>
using namespace std;

void Recursion (int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\t";
        cout<<endl;   
         
    } 
}

void print(int a[], int n,int i)
{
    int swap;
    Recursion(a,n);
    for (int j=i+1; j<n; j++)
    {
        if (a[i]>a[j]) 
        swap=a[i];
        a[i]=a[j];
        a[j]=swap;
    }
    print(a,n,i+1);
}

int main ()
{
    int M[3];
    M[0]=2;
    M[1]=10;
    M[2]=5;
    print(M,3,0);
    return 0;
}
