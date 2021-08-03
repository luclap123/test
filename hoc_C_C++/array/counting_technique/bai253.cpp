// Bài 253: Hãy cho biết tất cả các phần tử trong mảng a có nằm trong mảng b không


#include <stdio.h>
#include <conio.h>
#include <math.h>
#define max 100

void input(int a[], int &n)
{
    do
    {
        printf("\ninput n : ");
        scanf("%d", &n);
    } while (n<0 || n>max);
    
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

int check(int a[],int b[], int n, int m)
{
    int dem=0;
    int flag=0;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        if (a[i]==b[j])
        {
            dem++;
        }
    }
    if (dem==n)
    {
        flag=1;
    }
    return flag;
}


int main()
{
    int a[max],b[max];
    int n,m;

    
    input(a,n);
    output(a,n);

    input (b,m);
    output(b,m);
    int result=check(a,b,n,m);
    if (result==1)
    {
        printf("\nall elements in array A are in array B");
    }
    else
    {
        printf("\nall elements in array A are not in array B");
    }
    getch();
    return 0;
}