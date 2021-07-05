// Bài 176: Hãy liệt kê các số âm trong mảng 1 chiều các số thực

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
        printf("%5.f", a[i]);
    }
}

int list(float a[],int n)
{
    for (int i=0; i<n; i++)
    {
        if (a[i]<0)
        {
            printf("\nnegative numbers in the array are : %5.f", a[i]);
        }
    }
    return -1;
}

int main()
{
    float a[max];
    int n;

    do
    {
        printf("input n : ");
        scanf("%d", &n);
    } while (n<0 || n>max);
    
    input (a,n);
    output (a,n);

    list(a,n);
    getch();
    return 0;
}