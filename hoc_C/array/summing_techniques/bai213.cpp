// Bài 214: Tính trung bình nhân các giá trị dương có trong mảng 1 chiều các số thực

#include <stdio.h>
#include <math.h>
#include <conio.h>
#define max 100

void input (float a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("\ninput a[%d] : ",i);
        scanf("%f", &a[i]);
    }
}

void output (float a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%5.f",a[i]);
    }
}

float average(float a[], int n)
{
    float sum=1;
    float dem =0;
    for(int i =0; i<n; i++)
    {
        if (a[i]>0)
        {
            sum *=a[i];
            dem++;
        }
    }
    if (dem==0)
    {
        printf("\narray nothing");
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
        printf("input n: ");
        scanf("%d", &n);
    } while (n<0 || n> max);

    input(a,n);
    output(a,n);

    printf("\naverage multiplies positive values : %f", average(a,n));    
    getch();
    return 0;
}