// Bài 210: Tính tổng các giá trị có chữ số đầu tiên là chữ số chẵn trong mảng các số nguyên


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

int even (int n)
{
    int s=0;
    while (n>0)
    {
        s= n%10;
        n /=10;
    }
    if (n % 2==0)
    return 1;
    return 0;
}

int sum_even(int a[], int n)
{
    int sum=0;
    for (int i=0; i<n; i++)
    {
        if (even(a[i])==1)
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

    printf("\nthe sum in value of array are : %d", sum_even(a,n));
    getch();
    return 0;
}