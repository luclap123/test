// Bài 213: Tính trung bình cộng các giá trị lớn hơn giá trị x trong mảng 1 chiều các số thực

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define max 100

void input(float a[], int n)
{
   

    for (int i=0; i<n; i++)
    {
        printf("input a[%d]: ",i);
        scanf("%f", &a[i]);
    }
}

void output (float a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("\t%5.f", a[i]);
    }
}

float summax(float a[], int n, int x)
{
    int dem =0;
    int sum=0;
    for (int i=0; i<n; i++)
    {
        if (a[i]>x)
        {
            sum +=a[i];
            dem++;
        }
    }
    if (dem==0)
    {
        printf("\narray nothing value");
        return 0;
    }
    return sum/dem;
}


int main()
{
    float a[max];
    int n;

    do
    {
        printf("input n : ");
        scanf("%d", &n);
    } while (n<0 || n>max);
    
    input (a,n);
    output (a,n);

    float x;
    printf("\ninput x : ");
    scanf("%f", &x);

    float average=summax(a,n,x);
    printf("\naverage values less than x : %2.f",average);
    
    getch();
    return 0;
}
