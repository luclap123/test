// Bài 201: Tính tổng các giá trị dương trong mảng 1 chiều các số thực


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

// tìm số dương
int positive(float a[], int n)
{
    int sum=0;
    for (int i=0; i<n; i++)
    {
        if (a[i]>0)
        sum +=a[i];
    }
    return sum;
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

    printf("\nsum positive in the array is : %d", positive(a,n));
    getch();
    return 0;
}