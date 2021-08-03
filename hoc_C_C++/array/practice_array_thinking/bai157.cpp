// Bài 157: Cho mảng 1 chiều các số thực, 
// hãy tìm đoạn [a, b] sao cho đoạn này chứa tất cả các giá trị trong mảng

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

void find_paragraph(float a[], int n)
{
    float Max= a[0];
    float Min= a[0];
    for (int i=0; i<n; i++)
    {
        Max =(a[i]>Max) ? a[i] :Max;
        Min = (a[i]<Min) ? a[i] :Min;
    }
    printf("\nThe paragraph that contains all the values in the array is :%5.f \t %5.f", Min, Max);
}

int main()
{
    float a[max];
    int n;

    do
    {
        printf("input n :");
        scanf("%d", &n);
    } while (n<0 || n>max);
    
    input (a,n);
    output (a,n);
    find_paragraph(a,n);

    getch();
    return 0;
}