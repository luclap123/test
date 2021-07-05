// Bài 247: Ta định nghĩa 1 mảng có tính chất lẻ, khi tổng của 2 phần tử liên tiếp luôn là lẻ.
//  Kiểm tra mảng có tính chất lẻ hay không


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

int check_odd(int a[], int n)
{
    int sum=1;
    for (int i=0; i<n; i++)
    {
        if ((a[i] +a[i+1])% 2==0)
        sum=0;
        break;
    }
    return sum;
}

int main()
{
    int a[max];
    int n;

    do
    {
        printf("\ninput n : ");
        scanf("%d", &n);
    } while (n<0 || n>max);
    
    input(a,n);
    output(a,n);

    int check=check_odd(a,n);
    if (check==0)
    {
        printf("\narray even");
    }
    else
    {
        printf("\narray odd");
    }
    getch();
    return 0;
}