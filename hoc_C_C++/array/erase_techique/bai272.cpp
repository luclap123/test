// Bài 272: Hãy xóa tất cả số lớn nhất trong mảng các số thực

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define max 100

void input(float a[], int n)
{
   

    for (int i=0; i<n; i++)
    {
        printf("input a[%d]: ",i);
        scanf("%f", &a[i]);
    }
}

void output (float a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("\t%5.f", a[i]);
    }
}

void erase (float a[], int &n, int location)
{
    for (int i=location; i<n; i++)
    {
        a[i]=a[i+1];
    }
    n--;
}

float findmax (float a[],int n)
{
    int Max=a[0];
    for (int i=0; i<n; i++)
    {
        Max=(Max <a[i]) ? a[i] : Max;
    }
    return Max;
}

void erasemax(float a[], int n)
{
    int MAX=findmax(a,n);
    for (int i=0; i<n; i++)
    {
        if (a[i]==MAX)
        {
            erase(a,n,i);
            i--;
        }
    }
}

int main ()
{
    float a[max];
    int n;

    do
    {
        printf("input n: ");
        scanf("%d", &n);
    } while (n<0 || n>max);
    
    input (a,n);
    output (a,n);

    erasemax(a,n);
    printf("\nthe array after erase max : ");
    output(a,n);
    getch();
    return 0;
}