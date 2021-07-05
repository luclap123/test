// Bài 183: Hãy liệt kê các vị trí mà giá trị tại đó là giá trị tại đó là 
// giá trị lớn nhất trong mảng 1 chiều các số thực


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

float find_even(float a[], int n)
{
    float Max=a[0];
    for (int i=1; i<n; i++)
    {
        if (a[i]>Max)
        {
            Max=a[i];
        }
    }
    return Max;
}

void location(float a[], int n)
{
    float site=find_even(a,n);
    for (int i=0; i<n; i++)
    {
        if (a[i]==site)
        {
            printf("%d", i);
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

    printf("\nmax location in array is ");
    location(a,n);
    getch();
    return 0;
}
