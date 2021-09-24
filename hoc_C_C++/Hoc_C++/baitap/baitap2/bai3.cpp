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

void quick_sort(int a[], int left, int right)
{
    if (left >= right) return;
    int pivot = a[(left + right)/2];
    int i = left, j = right;
    do
    {
        while (a[i] < pivot) i++;
        while (a[j] > pivot) j--;
        if (i <= j)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }while(i<j);
    quick_sort(a,left,j);
    quick_sort(a,i,right);
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
    quick_sort(a,0,n-1);
    cout<<"\nafter sort array : "<<endl;
    output(a, n);
}