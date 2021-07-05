// Bài 289: Xuất mảng: chẵn nằm trên 1 mảng, lẻ nằm trên hàng tiếp theo

#include <stdio.h>
#include <math.h>
#include <conio.h>
#define max 100

void input (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("input a[%d] : ",i);
        scanf("%d", &a[i]);
    }
}

void sort (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        if (a[i] % 2== 0)
        printf("\n %d", a[i]);
    }
    printf("\n \t");
    for (int i=0; i<n; i++)
    {
        if (a[i] % 2 !=0)
        {
            printf("\n %d",a[i]);
        }
    }
}

int main()
{
    int a[max];
    int n;

    do
    {
        printf("\n input n :");
        scanf("%d", &n);
    } while (n<0 || n>max);
    
    input(a,n);
    sort(a,n);

    getch();
    return 0;
}