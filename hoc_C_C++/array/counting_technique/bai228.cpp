// Bài 228: Hãy xác định số lượng phần tử kề nhau mà số đứng sau cùng dấu số đứng trước
// và có giá trị tuyệt đối lớn hơn

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

int count (int a[], int n)
{
    int amount=0;
    for (int i=0; i<n; i++)
    {
        if (a[i] *a[i-1]>0 && abs(a[i-1])<abs(a[i]))
        amount++;
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

    printf("\ncounts the number of contiguous elements where the number comes after the number followed by :%d",count(a,n));
    getch();
    return 0;
}