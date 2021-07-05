// Bài 219: Đếm số lần xuất hiện của giá trị x trong mảng


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

int check(int a[], int n, int x)
{
    int count=0;
    for (int i=0; i<n; i++)
    {
        if (a[i]==x)
        count++;
    }
    return count;
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
    int x;
    printf("\ninput x: ");
    scanf("%d", &x);

    printf("\nthe number of occurrences : %d",check(a,n,x));
    getch();
    return 0;
}