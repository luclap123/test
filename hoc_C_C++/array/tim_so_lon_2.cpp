//tìm số lớn thứ hai trong mảng


#include <stdio.h>
#include <conio.h>
#define max 100

void input (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("nhap a[%d] : ",i);
        scanf("%d", &a[i]);
    }
}

void output (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("\t%d",a[i]);
    }
}

// cách 1: sắp xếp mảng giảm dân => tìm số lớn thứ hai a[1]

void swap (int &a, int &b)
{
    int temp;
    temp = a;
    a=b;
    b=temp;
}

void descendingarrangement  (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (a[i]< a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
}

int find(int a[], int n)
{
    descendingarrangement (a,n);
    return a[1];
}

// cách 2: so sánh và tìm ra số lớn thứ hai

int findtwomax (int a[], int n)
{
    int firstmax, secondmax;
    int i;
    if (a[0] >a[1])
    {
        firstmax =a[0];
        secondmax=a[1];
    }
    else
    {
        firstmax=a[1];
        secondmax=a[0];
    }
    for (int i=2; i<n; i++)
    {
        if (a[i] >=  firstmax)
        {
            secondmax = firstmax;
            firstmax =a[i];
        }
        else if (a[i] > secondmax)
        {
            secondmax = a[i];
        }
    }
    return secondmax;
}

int main ()
{
    int a[max];
    int n;

    do
    {
        printf("input n :");
        scanf("%d", &n);
    } while (n<=1 || n>max);

    input (a,n);
    output (a,n);

    printf("\nthe second largest number in the array is : %d", find(a,n));
    printf("\nthe second largest number in the array is : %d", findtwomax(a,n));
    getch();
    return 0;
    
}