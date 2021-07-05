// Bài 224: Đếm số hoàn thiện trong mảng


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

int finishing_number(int n)
{
    int sum=0;
    for (int i=1; i<n ; i++)
    {
        if (n % i==0)
        sum +=i;
    }
    if (sum==n)
    return 1;
    return 0;
}

int count(int a[], int n)
{
    int amount=0;
    for (int i=0; i<n; i++)
    {
        if (finishing_number(a[i])==1)
        {
            amount++;
        }
    }
    return amount;
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

    printf("\namount finishing number in the array :%d",count(a,n));
    getch();
    return 0;
}