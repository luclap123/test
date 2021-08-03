// Bài 177: Hãy liệt kê các số trong mảng 1 chiều các số thực thuộc đoạn [x, y] cho trước


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
        printf("%5.f", a[i]);
    }
}

int listed(float a[], int n,float x, float y)
{
    for (int i=0; i<n; i++)
    {
        if ((a[i]>=x) && (a[i])<=y)
        printf("\n%5.f", a[i]);

    }
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

    float x,y;
    printf("\ninput x: ");
    scanf("%f", &x);

    printf("\ninput y: ");
    scanf("%f", &y);

    printf("\nparagraph numbers [%5.f %5.f] are :  ",x,y);
    listed(a,n,x,y);
    getch();
    return 0;
}