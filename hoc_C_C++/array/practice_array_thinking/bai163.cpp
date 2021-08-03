//Bài 163: Tìm số chính phương đầu tiên trong mảng 1 chiều các số nguyên


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

int squarenumber(int n)
{
    if  (sqrt((float)n)==(int)(sqrt((float)n)))
    {
        return 1;
    }
    else
    {
    return 0;
    }
}

int result(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
       if(squarenumber(a[i]) == 1)
       {
           return a[i];
       }
    }
       return -1;        
} 

int main ()
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

    printf("\nso chinh phuong dau tien trong mang la : %d", result(a,n));
    getch();
    return 0;
}