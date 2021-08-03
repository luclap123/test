// Bài 126: Viết hàm tính tổng các giá trị âm trong mảng 1 chiều các số thực

#include <stdio.h>
#include <math.h>
#include <conio.h>
#define max 100

void nhap (float a[], int n)
{
    for (int i =0; i<n; i++)
    {
        printf("nhap a[%d] : ", i);
        scanf("%f", &a[i]);
    }
}

void xuat (float a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("\n%f", a[i]);
    }
}

float tinhtong(float a[], int n)
{
    float s=0;
    for (int i=0; i<n; i++)
    {
        if (a[i] < 0) 
        {
        s +=a[i];
        }
    }
    return s;
}

int main ()
{
    float a[max];
    int n;
    do
    {    printf("nhap vao n :");
        scanf("%d", &n);
    } while (n>100);

    nhap(a,n);
    xuat(a,n);

    printf("\ntong cac so am trong mang la : %f", tinhtong(a,n));
    getch();
    return 0;

}