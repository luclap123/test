// Bài 259: Sắp xếp số hoàn thiện giảm dần nhưng giá trị khác giữ nguyên vị trí

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define max 100

void input(int a[], int &n)
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

int perfect(int n)
{
    int sum=0;
    for (int i=1; i<n; i++)
    {
        if (n % i==0)
        sum +=i;
    }
    if (sum==n)
    return 1;
    return 0;
}

void permutation (int &a, int &b)
{
    int tg;
    tg=a;
    a=b;
    b=tg;
}

void sort(int a[], int n)
{
    for (int i=0;i<n; i++)
    {
        if (perfect(a[i])==1)
        {
            for (int j=i+1; j<n; j++)
            {
                if ((perfect(a[j])==1) && a[i]<a[j])
                permutation(a[i],a[j]);
            }
        }
    }
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

    sort(a,n);
    printf("\nthe number perfect in the array ");
    output(a,n);
    getch();
    return 0;
}