// Bài 226: Hãy xác định số lượng phần tử kề nhau mà cả 2 đều chẵn


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

int count(int a[],int n)
{
    int amount=0;
    for (int i=0; i<n; i++)
    {
        if (a[i] % 2== 0 && a[i+1] % 2==0)
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

    printf("\nthe number of contiguous elements, both of which are even : %d",count(a,n));
    getch();
    return 0;
}