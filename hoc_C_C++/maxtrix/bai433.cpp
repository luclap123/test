// Bài 433: Viết hàm tìm giá trị lớn nhất trong ma trận vuông các số thực

#include <iostream>
#include <conio.h>
#define MAX 100

using namespace std;

void input(int a[][MAX], int &n)
{
    cout<<"\ninput n :";
    cin>>n;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<"\ninput a["<<i<<"]"<<"["<<j<<"]: ";
            cin>>a[i][j];
        }
    }
}

void output(int a[][MAX], int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<"\t"<<a[i][j];
        }
        cout<<"\n\n";
    }
}

int findmax(int a[][MAX], int n)
{
    int max=a[0][0];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            max = max >a[i][j] ? max : a[i][j];
        }
    }
    return max;
}

int main ()
{
    int a[MAX][MAX], n;
    input(a,n);
    output(a,n);

    int max = findmax(a,n);
    cout<<"value max in array is : "<<max<<endl;
    getch();
    return 0;
}