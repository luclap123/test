// Bài 194: Cho mảng 1 chiều các số nguyên có nhiều hơn 2 giá trị. 
// Hãy viết hàm liệt kê các cặp giá trị gần nhau nhất


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

void list(int a[], int n)
{   
    int i,j;
    int listed =abs(a[0]-a[i]);

    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n-1; j++)
        {
            if ((abs(a[i] - a[j])) <listed)
            {
                listed=abs(a[i]-a[j]);
            }
        }
    }
    printf("\nthe closest values ");
    for(i=0; i<n; i++)
    {
        for (j=i+1; j<n-1; j++)
        {
            if (abs(a[i]- a[j])==listed)
            printf("\n<%d, %d> location <a[%d], a[%d]",a[i],a[j],i,j);
        }
    }
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

    list(a,n);
    getch();
    return 0;
}