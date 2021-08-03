// Bài 127: Viết hàm sắp xếp mảng 1 chiều các số thực tăng dần, giam dan

#include <stdio.h>
#include <math.h>
#include <conio.h>
#define max 100

void nhap (float a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("nhap a[%d] : ", i);
        scanf("%f", &a[i]);
    }
}

void xuat (float a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("\t%2.f", a[i]);
    }
}


float sapxeptangdan(float a[], int n)
{
    int s;
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (a[i] > a[j])
            {
                s=a[i];
                a[i]=a[j];
                a[j]=s;
            }
        }
    }
}


float sapxepgiamdan(float a[], int n)
{
    int giam;
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++ )
        {
            if (a[i]<a[j])
            {
                giam=a[i];
                a[i]=a[j];
                a[j]=giam;
            }
        }
    }
}

int main ()
{
    float a[max];
    int n;

    do
    {
        printf("nhap vao n : ");
        scanf("%d", &n);
    } while (n<0 || n>100);

    nhap (a,n);
    
    sapxeptangdan(a,n);
    printf("\nmang sau khi sap xep la:");
    xuat (a,n);

    sapxepgiamdan(a,n);
    printf("\nmang sau khi giam dan la:");
    xuat(a,n);

    getch();
    return 0;
    
}