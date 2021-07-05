// Bài 218: Đếm số đối xứng trong mảng


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

int symmetrical_numbers (int n)
{
    int num=0;
    int thay=n;
    int count=0;
    while (thay>0)
    {
        num = thay %10;
        thay /=10;
        count = count *10 +num;
    }    
    if (count ==n)
    return 1;
    return 0;
} 

int count(int a[], int n)
{
    int Count=0;
   for (int i=0; i<n; i++)
   {
       if (symmetrical_numbers(a[i])==0)
       {
           break;
       }
       if (symmetrical_numbers(a[i])==1)
       {
            Count++;
       }
    }
   return Count;
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

    printf("\namount symmetrical number in the array : %d", count(a,n));

    getch();
    return 0;
}