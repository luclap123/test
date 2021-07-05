// Bài 123: Viết hàm tìm 1 vị trí mà giá trị tại vị trí đó là giá trị nhỏ nhất trong mảng 1 chiều các số nguyên

#include <stdio.h>
#include <conio.h>
#define max 100

void nhap(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("nhap a[%d] :", i);
        scanf("%d", &a[i]);
    }
}

void xuat(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("\n%d ", a[i]);
    }
}

int timvitrinho(int a[], int n)
{
    int vitri=0;
    for (int i=0; i<n; i++)
    {
        if (a[i]<a[vitri])
        {
            vitri=i;
        }
    }   
    return vitri;
}

int main()
{
    int a[max];
    int n;

    do
    {
        printf("nhap vao n :");
        scanf("%d", &n);
    } while (n<0 || n>100);
    
    nhap (a, n);
    xuat (a, n);

    printf("\nvi tri nho nhat la : %d",  timvitrinho(a,n));
}
