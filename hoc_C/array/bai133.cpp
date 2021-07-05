// Bài 133: Viết hàm liệt kê các vị trí mà giá trị tại đó là giá trị âm trong mảng 1 chiều các số thực

#include <stdio.h>
#include <math.h>
#define max 100

void nhap(float a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("nhap a[%d] : ", i);
        scanf("%f", &a[i]);
    }
}

void xuat(float a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("\t%5.f", a[i]);
    }
}

float listam(float a[], int n)
{
    
    for (int i=0; i<n; i++)
    {
        if (a[i]<0)
        {
           printf("\n%d",i);
        }
    }
   
}


int main ()
{
    float a[max];
    int n;

    do
    {
        printf("nhap vao n :");
        scanf("%d", &n);
    } while (n<0 || n>max);

    nhap(a,n);
    xuat(a,n);

    printf("\nvi tri cac so am :");
     listam(a,n);
    return 0;
}