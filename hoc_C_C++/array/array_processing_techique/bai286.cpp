// Bài 286: Dịch trái xoay vòng k phần tử trong mảng


#include <stdio.h>
#include <conio.h>
#include <math.h>
#define max 100

void input(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("input a[%d]: ",i);
        scanf("%d", &a[i]);
    }
}

void output (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("\t%d", a[i]);
    }
}

void permutation(int &a, int &b)
{
    int replace;
    replace=a;
    a=b;
    b=replace;
}

void result (int a[], int n, int k)
{
    while (k--)
    {
        int replace=a[0];
        for (int i=0; i<n-1; i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=replace;
    }
}

int main ()
{
    int a[max];
    int n;

    do
    {
        printf("input n: ");
        scanf("%d", &n);
    } while (n<0 || n>max);
    
    input (a,n);
    output(a,n);

    int k;
    printf("\n input k :");
    scanf("%d", &k);

    result(a,n,k);
    printf("\n the array after sort ");
    output(a,n);
    
    getch();
    return 0;
}