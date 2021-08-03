// Bài 277: Xóa tất cả các số nguyên tố trong mảng

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

bool prime (int n)
{
    if (n<2)
    return false;
    if (n>2)
    {
        if (n %2==0)
        return false;
    }
    else
    {
        for (int i=3; i<sqrt(n); i +=2)
        {
            if (n % i==0)
            return false;
        }
    }
    return true;
}

void erase_prime(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        if (prime(a[i])==true)
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

    erase_prime(a,n);
    printf("\nthe array after erase prime : ");
    output(a,n);
    getch();
    return 0;
}