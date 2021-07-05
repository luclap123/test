// Bài 705: Cho mảng 1 chiều các số thực. 
// Viết hàm đếm số lượng giá trị dương trong mảng bằng phương pháp đệ quy

#include <iostream>
#include <conio.h>
#define MAX 100
using namespace std;

void input(float a[], int n)
{
    for (int i = 0; i <n; i++)
    {
        cout<<"input a[" << i << "] ";
        cin>>a[i];
    }
}

void output(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
}

int amount(float a[], int n)
{
    if (n==0)
    return 0;
    int count=amount(a, n-1);
    if (a[n-1]>0)
    {
        count++;
    }
    return count;
}

int main ()
{
    float a[MAX];
    int n;

    cout<<"input n : ";
    cin>>n;
    input (a,n);
    output (a,n);
    int count=amount(a, n);
    cout<<"number of positive numbers : "<<count;
    getch();
}