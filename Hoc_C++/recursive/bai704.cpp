// Bài 704: Cho mảng 1 chiều các số nguyên. 
// Viết hàm tính tổng các số chẵn trong mảng bằng phương pháp đệ quy
#include <iostream>
#include <conio.h>
#define MAX 100
using namespace std;

void input(int a[], int n)
{
    for (int i = 0; i <n; i++)
    {
        cout<<"input a[" << i << "] ";
        cin>>a[i];
    }
}

void output(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
}

int sum(int a[], int n)
{
    if (n==0)
    return 0;
    float s=sum(a,n-1);
    if(a[n-1] %2==0)
    {
        s += a[n-1];
    }
    return s;
}

int main ()
{
    int a[MAX];
    int n;

    cout<<"input n : ";
    cin>>n;
    input (a,n);
    output (a,n);
    int tong=sum(a,n);
    cout<<"sum even in the array is : "<<tong<<endl;
    getch();
}