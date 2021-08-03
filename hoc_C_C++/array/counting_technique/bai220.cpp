// Bài 220: Đếm số lượng giá trị tận cùng bằng 5 trong mảng


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
        if (a[i] %10 ==5)
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

    printf("\nthe number of terminal values equal five :%d ", count(a,n));
    getch();
    return 0;
}