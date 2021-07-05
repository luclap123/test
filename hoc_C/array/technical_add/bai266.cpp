// Bài 266: Thêm 1 phần tử x vào mảng tại vị trí k

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

void addnumber(int a[], int n, int addlocation, int value)
{
    for(int i=n; i>addlocation; i--)
    {
        a[i]=a[i-1];
    }
    a[addlocation]=value;
    n++;
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

    int addlocation,value;
    do
    {
       printf("\ninput location need add %d --- %d  : ",0,n);
       scanf("%d", &addlocation);
       if (addlocation>n)
       {
       printf("\ninput illegal");
       }
    } while (addlocation<0 || addlocation>n);

    printf("\ninput value : ");
    scanf("%d", &value);

    addnumber(a,n,addlocation,value);
    printf("\nthe array after addnumber is ");
    output(a,n);
    getch();
    return 0;
}