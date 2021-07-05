// Bài 190: Hãy liệt kê các giá trị có toàn chữ số lẻ trong mảng 1 chiều các số nguyên


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

// tìm chữ số lẻ
int findodd(int n)
{
    int odd;
    while (n !=0)
    {
        odd +=n %10;
        if (odd % 2==0)
        return 0;
        n /=10;
    }
    return 1;
}

// liệt kê
void list(int a[], int n)
{
    
    for (int i=0; i<n; i++)
    {
        if (findodd(a[i])==1)
        printf("\n%d ", a[i]);
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

    printf("\nlist number odd in the array are");
    list(a,n);
    getch();
    return 0;
}