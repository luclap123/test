// Bài 258: Sắp xếp số nguyên tố tăng dần nhưng giá trị khác giữ nguyên vị trí

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

bool prime (int n)
{
    if (n<2)
    return false;
    if (n>2)
    {
        if (n % 2 ==0)
        return false;
    }
    else
    {
        for (int i=3; i<n; i +=2)
        {
            if (n % i ==2)
            return false;
        }
    }
    return true;
}

void permutation (int &a, int &b)
{
    int tg;
    tg=a;
    a=b;
    b=tg;
}

void sort_prime(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        if (prime(a[i])==true)
        {
            for (int j=i+1; j<n; j++)
            {
                if (prime(a[j]) && a[i]>a[j])
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

    sort_prime(a,n);
    printf("\narray prime affter sort is");
    output(a,n);
    getch();
    return 0;
}