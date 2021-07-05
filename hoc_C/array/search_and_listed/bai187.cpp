// Bài 187: Hãy liệt kê các vị trí mà giá trị tại các vị trí đó 
// bằng giá trị dương nhỏ nhất trong mảng 1 chiều các số thực


#include <stdio.h>
#include <conio.h>
#include <math.h>
#define max 100

void input(float a[], int n)
{
   

    for (int i=0; i<n; i++)
    {
        printf("input a[%d]: ",i);
        scanf("%f", &a[i]);
    }
}

void output (float a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("\t%5.f", a[i]);
    }
}

// tìm số dương
float positive(float a[], int n)
{
    
    for (int i=0; i<n; i++)
    {
        if (a[i]>0)
        return a[i];
    }
    return -1;
}

// tìm số dương nhỏ nhất
float min (float a[], int n)
{
    int MIN=positive(a,n);
    for (int i=0; i<n; i++)
    {
        if (a[i]> 0 && a[i]<MIN)
        {
           MIN =a[i];
        }
    }
    return MIN;
}

// tìm vị trí nhỏ nhất
void location (float a[], int n)
{
    int Min=min(a,n);
    int flag;
    for (int i=0; i<n; i++)
    {
        if (a[i] ==Min)
        {
            flag=1;
            printf("\n%d", i);
        }
    }
    if (flag==0)
    printf("\narray nothing");
}

int main()
{
    float a[max];
    int n;

    do
    {
        printf("input n : ");
        scanf("%d", &n);
    } while (n<0 || n>max);
    
    input (a,n);
    output (a,n);

    printf("\nlocation min and positive are ");
    location(a,n);

    getch();
    return 0;
}