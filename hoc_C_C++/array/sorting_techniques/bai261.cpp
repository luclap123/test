// Bài 261: Sắp xếp số dương tăng dần, các số âm giữ nguyên vị trí

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

void permutation(int &a, int &b)
{
    int tg;
    tg=a;
    a=b;
    b=tg;
}

void sort(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        if (a[i]>0)
        {
            for (int j=i+1; j<n; j++)
            {
                if ((a[j]>0) && a[i]>a[j])
                permutation(a[i],a[j]);
            }
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

    sort(a,n);
    printf("\nthe array after sort is");
    output(a,n);
    getch();
    return 0;
}