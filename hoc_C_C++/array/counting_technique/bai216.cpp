// Bài 216: Đếm số lượng số chẵn trong mảng


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

void count(int a[], int n)
{
    int dem=0;
    for (int i=0; i<n; i++)
    {
        if (a[i] % 2==0)
        dem++;
    }
    printf("\namount even number in the array: %d",dem);
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

    count(a,n);
    getch();
    return 0;
}