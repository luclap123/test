// Bài 237 + 238(*): Hãy liệt kê các giá trị có số lần xuất hiện nhiều nhất trong mảng


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

int find_frequency_max(int a[], int n)
{
    int Max=1; // một phần tử tối thiểu xuất hiện
    for (int i=0; i<n; i++ )
    {
        int count=1;
        for (int j=i+1; j<n; j++)
        {
            if (a[i]==a[j])
            count++;
        }
         if (Max<count)
         Max=count;
    }
   return Max;
}

int check_duplication(int a[], int n, int location)
{
    for (int i=location-1; i>=0; i--)
    {
        if (a[i]==a[location])
        return 0;
    }
    return 1;
}

int count_frequency(int a[], int n, int location)
{
    int count=1;
    for (int i=location +1; i<n; i++)
    {
        if (a[i]==a[location])
        count++;
    }
    return count;
}

void result (int a[], int n)
{   
    int findmax=find_frequency_max(a,n);
    for (int i=0; i<n; i++)
    {
        int checkduplication=check_duplication(a,n,i);
        if (checkduplication==1)
        {
            int count=count_frequency(a,n,i);
            if (findmax==count)
            {
            printf("\nvalues appear max : %d",a[i]);
            }
        }
    }
    printf("\ncount the number of occurrences : %d",findmax );

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

    result(a,n);
    getch();
    return 0;
}