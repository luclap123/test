// Bài 256: Sắp xếp mảng giảm dần

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define max 100

void input(int a[], int &n)
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

void permutation (int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void decrease (int a[], int n)
{
    for (int i=0; i<n-1;i++)
    {
        for (int j=i+1; j<n;j++)
        {
            if (a[i]<a[j])
            permutation(a[i],a[j]);
        }
    }
}

int main()
{
    int a[max];
    int n;

    do
    {
        printf("\ninput n : ");
        scanf("%d", &n);
    } while (n<0 || n>max);
    
    input(a,n);
    output(a,n);

    decrease(a,n);
    printf("\narray affter decrease is ");
    output(a,n);
    getch();
    return 0;
}