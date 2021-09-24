#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void input(int a[], int n)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand()%100;
    }
}

void output(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\t";
    }
}

void insertion(int a[], int n)
{
    // lưu vị trí cần chèn
    int pos =0;
    // lưu vị trí a[i] tránh bị ghi đè khi dời chỗ các phần tử 
    int x;
    // xem đoạn a[0] đã sắp xếp
    for (int i = 1; i < n; i++)
    {
        x = a[i];
        for (pos = i; pos>0 && a[pos-1]>x;pos--)
        {
            a[pos]=a[pos-1];
        }
        a[pos]=x;
    }
}

int main ()
{
    int a[100];
    int n;
    cout<<"input n : ";
    cin>>n;
    input(a, n);
    output(a, n);
    insertion(a,n);
    cout<<"\nafter sort the array : "<<endl;
    output(a, n);
}