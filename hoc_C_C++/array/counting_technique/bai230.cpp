// Bài 230: Liệt kê tần suất xuất hiện các giá trị trong mảng (mỗi giá trị liệt kê 1 lần)


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

void list (int a[], int n)
{
   
    for (int i=0; i<n; i++)
    {
         int amount=0;
        for (int j=0; j<n; j++)
        {
            if (a[i]==a[j])
            {
                if (i<=j)
                {
                    amount++;
                }
                else
                {
                    break;
                }
            }
        }
        if (amount !=0)
        printf("\nvalue %d appeared time %d ", a[i],amount);
    }
     
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

    list(a,n);
    getch();
    return 0;
}