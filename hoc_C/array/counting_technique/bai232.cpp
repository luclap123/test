// Bài 232: Hãy liệt kê các giá trị xuất hiện trong dãy quá 1 lần. Lưu ý: mỗi giá trị liệt kê 1 lần


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

int count (int a[], int n, int location)
{
    for (int i=location-1; i>=0; i--)
    {
        if (a[i]==a[location])
        {
            return 0;   
        }
    }
    return 1;
}

int check(int a[], int n, int location)
{
    int amount=1;
    for(int i=location+1; i<n; i++)
    {
        if (a[i]==a[location])
        amount++;
    }
    return amount;
}

void listed(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        int Count=count(a,n,i);
        if (Count==1)
        {
            int Check=check(a,n,i);
            if (Check !=1)
            {
                printf("\nValues appear in the sequence more than 1 time : %d",a[i]);
            }
        }
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
    output (a,n);

    listed(a,n);
    getch();
    return 0;
}