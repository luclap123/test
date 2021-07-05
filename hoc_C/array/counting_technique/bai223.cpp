// Bài 223: Đếm số nguyên tố trong mảng



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

bool prime(int n)
{
    if (n<2)
    {
        return false;
    }
    if (n>2)
    {
        if (n % 2==0)
        return false;
    }
    else
    for (int i=3; i<n; i +=2)
    {
        if (n % i==0)
        return false;
    }
    return true;
}

int check(int a[], int n)
{
    int dem=0;
    for (int i=0; i<n; i++)
    {
        if (prime(a[i])==true )
        dem++;
    }
    return dem;
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
    output (a,n);

    printf("\namount prime in the array : %d", check(a,n));

    getch();
    return 0;
   
}