// Bài 282: Đưa các số chia hết cho 3 về đầu mảng

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

void divisible (int a[], int n, int number)
{
    int replace=a[number];
    for (int i=number; i>0; i--)
    {
        a[i]=a[i-1];
    }
    a[0]=replace;
}

void check(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        if (a[i] % 3==0)
        {
            divisible(a,n,i);
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

    check(a,n);
    printf("\n the number divisible for three ");
    output(a,n);
    getch();
    return 0;
}