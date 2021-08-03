// Bài 291: Biến đổi mảng bằng cách thay giá trị max = giá trị min và ngược lại

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

void find (int a[], int n, int &Max, int &Min)
{
    Max=a[0];
    Min=a[0];
    for (int i=1; i<n; i++)
    {
        Max= (Max >a[i]) ? Max : a[i];
        Min= (Min<a[i]) ? Min : a[i];
    }
}

void result_reverse (int a[], int n, int Max, int Min)
{
    for (int i=0; i<n; i++)
    {
        if (Max == a[i])
        {
            a[i]=Min;
        }
        else if (Min==a[i])
        {
            a[i]=Max;
        }
    }
}

int main ()
{
    int a[max];
    int n,Min,Max;

    printf("\n input n :");
    scanf("%d", &n);

    input(a,n);
    output(a,n);
    
    find(a,n,Min,Max);
    output(a,n);
    printf("\naffter reverse the array");
    result_reverse(a,n,Min,Max);
    output(a,n);

    getch();
    return 0;
}