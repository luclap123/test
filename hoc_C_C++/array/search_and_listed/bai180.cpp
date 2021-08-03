// Bài 180: Hãy liệt kê các giá trị trong mảng mà thỏa điều kiện nhỏ hơn trị tuyệt đối của giá trị đứng liền sau nó 
// và lớn hơn trị tuyệt đối của giá trị đứng liền trước nó


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

int find(int a[], int n)
{
    int flag;
    for (int i=0; i<n; i++)
    {
        if ( a[i] > abs(a[i-1]) && a[i] < abs(a[i+1]))
        {
            flag=1;
            printf("\n%d",a[i]);
        }
    }
    if (flag==0)
    {
        printf("mang khong co gia tri do");
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

    printf("\ngia tri thoa man dieu kien");
    find (a,n);
    getch();
    return 0;
}