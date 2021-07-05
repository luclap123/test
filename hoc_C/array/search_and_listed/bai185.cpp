// Bài 185: Hãy liệt kê các vị trí mà giá trị tại đó là số chính phương trong mảng 1 chiều các số nguyên


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

bool squarenumber(int n)
{
    for (int i=0; i<n; i++)
    {
        if (n== i*i)
        return true;
    }
    return false;
}

void location(int a[],int n)
{
    int flag;
    for (int i=0; i<n ;i++)
    {
        if (squarenumber(a[i])==true)
        {
            flag=1;
            printf("\n%d", i);
        }
    }
    if (flag==0)
    printf("array nothing");
}

int main()
{
    int a[max];
    int n;

    do
    {
        printf("input n : ");
        scanf("%d", &n);
    } while (n<0 || n>max);
    
    input (a,n);
    output (a,n);

    printf("\nlocation square in the array are ");
    location(a,n);
    getch();
    return 0;
}