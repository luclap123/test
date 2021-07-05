// Bài 271: Xóa các phần tử có chỉ số k trong mảng


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

void erase (int a[], int &n, int location)
{
    for (int i=location; i<n; i++)
    {
        a[i]=a[i+1];
    }
    n--;
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
    int location;
    do
    {
        printf("\ninput location : ");
        scanf("%d", &location);
    } while (location<0 || location >n);
    
    erase(a,n,location);
    printf("\nthe array after erase : ");
    output(a,n);
    getch();
    return 0;
}