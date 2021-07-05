// Bài 189: Hãy liệt kê các giá trị trong mảng 1 chiều các số nguyên có chữ số đầu tiên là chữ số lẻ


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

int findodd(int n)
{
    int odd;
    while (n>=10)
    {
        odd +=n %10;
        n /=10;
    }
    if (n % 2==0)
    return 0;
    return 1;
}

int list(int a[], int n)
{
   
    for (int i=0; i<n; i++)
    {
        if (findodd(a[i])==1)
        {
            printf("\n%d", a[i]);
        }
    }
    return 0;
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

    printf("\nnumber odd in the array are");
    list(a,n);

    getch();
    return 0;
}