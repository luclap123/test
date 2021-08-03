// Bài 229: Đếm số lượng các giá trị phân biệt có trong mảng

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

int count (int a[], int n)
{
    int amount=0;
    int flag;

    for (int i=0; i<n; i++)
    {
        flag=1;
        for (int j=i+1; j<n; j++)
        {
            if (a[i]==a[j])
            flag=0;
            break;
        }
        if (flag==1)
        {
            amount++;
        }    
    }
    return amount;

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

    printf("\nnumber of distinct values in the array : %d",count(a,n));
    getch();
    return 0;
}