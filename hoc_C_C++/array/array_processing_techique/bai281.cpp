// Bài 281: Hãy đưa chẵn về đầu, lẻ về cuối, phần tử 0 nằm giữa mảng


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

void puteven(int a[], int putlocation)
{
    int replace=a[putlocation];
    for (int i=putlocation; i>0; i--)
    {
        a[i]=a[i-1];
    }
    a[0]=replace;
}

void put0(int a[], int putlocation, int locationend)
{
    for (int i=putlocation; i>locationend; i--)
    {
        a[i]=a[i-1];
    }
    a[locationend]=0;
}

void result (int a[], int n)
{
    int i;
    int location=0;
    for (i=0; i<n; i++)
    {
        if (a[i]%2==0 && a[i] !=0)
        puteven(a,i);
    }
    for (i=0; i<n; i++)
    {
        if (a[i] % 2 !=0)
        {
        location=i;
        break;
        }
    }
    for (i; i<n; i++)
    {
        if (a[i]==0)
        put0(a,i,location);
    }

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
    output(a,n);
    result(a,n);
    printf("\nthe array after change");
    output(a,n);
    getch();
    return 0;
}