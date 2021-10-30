#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
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

void split_arr(int a[], int n, int a1[], int m, int a2[], int k)
{
    for (int i = 0; i <n; i++)
    {
        // odd number
        if (a[i] % 2!=0)
        {
            a1[m] = a[i];
            m++;
        }
        else
        {
            // even number
            a2[k] = a[i];
            k++;
        }
    }
    cout<<"Number odd : "<<a1[m]<<endl;
    cout<<"\n";
    cout<<"Number even : "<<a2[k]<<endl;
}

// void print(int a[], int n, char am)
// {
//     if (n == 0)
//     {
//         cout<<"array empty";
//         return ;
//     }
//     for (int i=0; i<n; i++)
//     {

//     }
// }

int main ()
{
    int a[100];
    int n;
    int a1[100];
    int a2[100];
    int m = 0, k = 0;

    cout<<"input n: ";
    cin>>n;
    input(a, n);
    output(a, n);
    cout<<"split array ";
    split_arr(a,n,a1,m,a2,k);
}