// Bài 273: Xóa tất cả các số âm trong mảng

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

void erase (int a[], int &n, int location)
{
    for (int i=location; i<n; i++)
    {
        a[i]=a[i+1];
    }
    n--;
}

void negative (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        if (a[i]<0)
        {
        erase(a,n,i);
        i--;
        }
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
    
    negative(a,n);
    printf("\n the array after erase negative");
    output(a,n);
    getch();
    return 0;
}