// Bài 191: Hãy liệt kê các giá trị cực đại trong mảng 1 chiều các số thực.
//  Một phần tử được gọi là cực đại khi lớn hơn các phần tử lân cận


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

void maximum(float a[], int n)
{
    for (int i=0; i<n-1; i++)
    {
        if (a[i]>a[i-1] && a[i]>a[i+1])
        {
            printf("\n%5.f", a[i]);
        }
    }
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

    printf("\nmaximum in the array is ");
    maximum(a,n);
    getch();
    return 0;
}