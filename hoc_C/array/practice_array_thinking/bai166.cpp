// Bài 166: Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm giá trị đầu tiên trong mảng có dạng 2^k.
//  Nếu mảng không có giá trị dạng 2k thì hàm sẽ trả về 0


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

int check2k(int n)
{
    if (n<=1)
        return 1;
    while (n>1)
    {
        if (n % 2!=0)
            return 0;
            n /=2;
    }
    return 1;
}

int result(int a[],int n)
{
    for (int i=0; i<n; i++)
    {
        if (check2k(a[i])==1)
        {
            return a[i];
        }
    }
    return -1;
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

    printf("\nso 2k dau tien trong mang la : %d", result(a,n));

    getch();
    return 0;
}