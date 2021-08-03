// Bài 250: Hảy cho biết các phần tử trong mảng có lập thành cấp số cộng hay không?
//  Nếu có chỉ ra công sai d

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

int level_plus(int a[], int n, int &s)
{
    s=a[1]-a[0];
    int flag=1;
    for (int i=2; i<n-1; i++)
    {
        if (a[i+1]-a[i] !=s)
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

    int wrongwork=level_plus(a,n,s);
    if (wrongwork==1)
    {
        printf("\nwrong work in level plus : %d",s);
    }
    else
    {
        printf("\nnothing level plus");
    }

    getch();
    return 0;
}