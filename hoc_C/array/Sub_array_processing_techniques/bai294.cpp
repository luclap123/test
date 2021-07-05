// Bài 294: Liệt kê mảng con có độ dài lớn hơn 2 phần tử

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define max 100

void input(int a[], int &n)
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

void list(int a[], int n)
{
    int solong;
    for (int i=0; i<n; i++)
    {
        for (solong=3+i; solong<=n; solong++)
        {
            for (int j=i; j<solong; j++)
            printf("%4d",a[j]);
        }
        printf("\n");
    }
}

int main ()
{
    int a[max];
    int n;
    do
    {
        printf("\n input n :");
        scanf("%d", &n);
    } while (n<0 || n>max);
    input(a,n);
    output(a,n);

    printf("\nall array son :\n");
    list(a,n);
    getch();
    return 0;
}