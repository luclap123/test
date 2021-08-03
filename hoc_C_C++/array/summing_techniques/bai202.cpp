// Bài 202: Tính tổng các giá trị có chữ số đầu tiên là chữ số lẻ trong mảng 1 chiều các số nguyên



#include <stdio.h>
#include <conio.h>

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

int odd(int n)
{
    int check;
    for (int i=10; i<n; i++)
    {
        check +=n %10;
        n /=10;
    }
    if (n %2 ==0)
    return 0;
    return 1;
}

int sum(int a[], int n)
{
    int Sum=0;
    for (int i=0; i<n; i++)
    {
        if (odd(a[i])==1)
        {
            Sum +=a[i];
        }
    }
    return Sum;
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

    printf("\nSum odd in the array is : %d", sum(a,n));
    getch();
    return 0;
}