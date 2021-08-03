// Bài 188: Hãy liệt kê các vị trí chẵn lớn nhất trong mảng 1 chiều các số nguyên


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

// tìm số chẵn
int even(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        if (a[i] % 2 ==0 )
        {
            return a[i];
        }
    }
    return -1;
}
// tìm vị trí
int location(int a[], int n)
{
    int number=even(a,n);
    for (int i=0; i<n; i++)
    {
        if (a[i] %2==0 && a[i]>number)
        {
            number=a[i];
        }
    }
    return number;
}

void list (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        if (a[i]==location(a,n))
        printf("\n%d", i);
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

    printf("\nlocation even in the array are ");
    list(a,n);
    getch();
    return 0;
}