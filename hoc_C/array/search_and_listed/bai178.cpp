//Bài 178: Hãy liệt kê các số chẵn trong mảng 1 chiều các số nguyên thuộc đoạn [x, y] cho trước (x, y là các số nguyên)


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
        printf("%d", a[i]);
    }
}

int  evennumber(int a[], int n, int x, int y)
{
    for (int i=0; i<n; i++)
    {
        if (a[i] %2==0 && a[i]>=x && a[i]<=y)
        printf("\n%d",a[i]);
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

    int x,y;
    printf("\ninput x: ");
    scanf("%d", &x);

    printf("\ninput y: ");
    scanf("%d", &y);

    printf("\neven numbers in [%d %d] are : ",x,y);
    evennumber(a,n,x,y);
    getch();
    return 0;
}