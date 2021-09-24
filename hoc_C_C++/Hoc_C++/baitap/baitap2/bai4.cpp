#include <iostream>
using namespace std;

void input(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"input ["<<i << "]: ";
        cin>>a[i];
    }
}

void output(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\t";
    }
}



void merge_sort(int a[], int left, int mid, int right) 
{
    int temp =right - left+1;
    int b[temp];
    int pos=0;
    int i = left;
    int j = mid + 1;
    while (!(i>mid && j>right))
    {
        if ((i<=mid && j<= right && a[i]<a[j]) || j>right)
        {
            b[pos++]=a[i++];
        }
        else
            b[pos++]=a[j++];
    } 
    for (i=0;i<temp;i++)
    {
        a[left+i] = b[i];
    }
}

void sort(int a[], int left, int right)
{
    if (left >= right) return;
    int mid = (left + right) / 2;
    sort(a, left, mid);
    sort(a, mid+1, right);
    merge_sort(a, left, mid, right);
}

int main ()
{
    int a[100];
    int n;
    cout<<"input number : ";
    cin>>n;
    input(a, n);
    output(a, n);
    sort (a,0,n-1);
    cout<<"\nafter sort the array : ";
    output(a, n);
    
}