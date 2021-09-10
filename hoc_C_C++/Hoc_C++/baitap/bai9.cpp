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
        cout<<a[i]<<"\t";
    }
}

void selection_sort(int a[], int n)
{
    int min;
    for (int i = 0; i < n-1; i++)
    {
        min =i; // gán cho i là nhỏ nhất
        for (int j =i+1; j < n; j++)
        {
            // so sánh xem phần tử min có lớn hơn j không 
            if (a[j] > a[min])
            {
                min = j;
            }
        }
        if (min != i) // khi min khác i thì hoán đổi 
        {
            int swap=a[i];
            a[i] = a[min];
            a[min] = swap;
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
    selection_sort(a,n);
    cout<<"\nafter sort array "<<endl;
    output (a,n);
}