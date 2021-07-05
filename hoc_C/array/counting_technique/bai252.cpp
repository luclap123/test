// Bài 252: Ta định nghĩa 1 mảng được gọi là dạng song, khi phần tử có trị số I lớn hơn 
// hoặc nhỏ hơn 2 phần tử xung quanh. Hãy viết hàm kiểm tra mảng có dạng sóng không


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

int wave(int a[], int n)
{
    int flag=1;
    for (int i=1; i<n-1; i++)
    {
        if((a[i] < a[i - 1] && a[i] > a[i + 1]) || (a[i] > a[i - 1] && a[i] < a[i + 1]))
        flag=0;
        break;
    }
    return flag;
}

int main()
{
    int a[max];
    int n,s;

    do
    {
        printf("\ninput n : ");
        scanf("%d", &n);
    } while (n<0 || n>max);
    
    input(a,n);
    output(a,n);

    int check=wave(a,n);
    if (check==1)
    {
        printf("\nthe array is wave");
    }
    else
    {
        printf("\nthe array is not wave");
    }
    getch();
    return 0;
}