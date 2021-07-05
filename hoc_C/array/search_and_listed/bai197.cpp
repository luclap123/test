// Bài 197: Hãy liệt kê các giá trị trong mảng các số nguyên có chữ số đầu tiên là chữ số lẻ


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

int odd(int n)
{
    int check;
    for (int i=10; i<n; i++)
    {
        check +=n%10;
        n /=10;
    }
    if (n % 2 ==0)
    return 0;
    return 1;
}

int listed(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        if (odd(a[i])==1)
        printf("\n%d",a[i]);
    }
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

    printf("\nvalue odd in the array are");
    listed(a,n);
    getch();
    return 0;
}