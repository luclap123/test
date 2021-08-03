// Bài 249: Kiểm tra mảng có giảm dần hay không


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

int decrease(int a[], int n)
{
    int flag=1;
    for (int i=0; i<n; i++)
    {
        if (a[i]>a[i+1])
        {
            flag=0;
            break;
        }
    }
    return flag;
}

int main()
{
    int a[max];
    int n;

    do
    {
        printf("\ninput n : ");
        scanf("%d", &n);
    } while (n<0 || n>max);
    
    input(a,n);
    output(a,n);

    int check=decrease(a,n);
    if (check==1)
    {
        printf("\narray is not x`decrease");
    }
    else
    {
        printf("\narray is decrease");
    }

    getch();
    return 0;
}