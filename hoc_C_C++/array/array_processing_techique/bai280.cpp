// Bài 280: Hãy đưa số 1 về đầu mảng

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

void permutation(int a[], int n, int location)
{
    for (int i=location; i>0; i--)
    {
        a[i]=a[i-1];
    }
    a[0]=1;
}

void puttop(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        if (a[i]==1)
        permutation(a,n,i);
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

    puttop(a,n);
    printf("\nafter put one on top ");
    output(a,n);
    getch();
    return 0;
}