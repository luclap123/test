// Bài 231: Hãy liệt kê các giá trị xuất hiện trong mảng 1 chiều các số nguyên đúng 1 lần

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

int check (int a[], int n, int location)
{
    for (int i=location-1; i>=0; i--)
    {
        if (a[i]==a[location])
        return 0; // bị trùng
    }
    return 1; // không bị trùng
}

// Đếm xem từ vị trí hiện tại trở về sau có bao nhiêu phần tử bị trùng
int count(int a[], int n, int location)
{
    int amount=0;
    for (int i=location-1; i<n; i++)
    {
        if (a[i]==a[location])
        amount++;
    }
    return amount;
}

void number (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        int checkk=check(a,n,i);
        if (checkk==1)
        {
            int amount=count(a,n,i);
            if (amount==1)
            {
                printf("\nvalues appear exactly once : %d",a[i]);
            }
        }
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

    number(a,n);
    getch();
    return 0;
}