// Bài 203: Tinh tổng các chữ số có chữ số hàng chục là 5 trong mảng 1 chiều các số nguyên


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

int find(int n)
{
    n=abs(n);
    n= n /10;
    int tens= n%10;
    if (tens == 5)
    return 1;
    return 0;
}

int sumtens(int a[], int n)
{
    int sum=0;
    for (int i=0; i<n; i++)
    {
        if (find(a[i])==1)
        sum +=a[i];
    }
    return sum;
}




int main()
{
    int a[max];
    int n;

    do
    {
        printf("input n : ");
        scanf("%d", &n);
    } while (n<0 || n>max);
    
    input (a,n);
    output (a,n);

    printf("\nsum tens in the array are : %d",sumtens(a,n));
    getch();
    return 0;
}