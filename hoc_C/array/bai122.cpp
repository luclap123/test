// Bài 122: Viết hàm tìm giá trị lớn nhất trong mảng 1 chiều các số thực

#include <stdio.h>
#include <conio.h>
#define max 100

int nhap(int a[], int n)
{
   

    for (int i=0; i<n; i++)
    {
        printf("nhap a[%d]: ",i);
        scanf("%d", &a[i]);
    }
}

int solon(int a[], int n)
{
    int sl=a[0];
    for (int i=0;i<n; i++)
    {
        if (a[i] > sl)
        {
            sl=a[i];
        }
    }
    return sl;
}

void xuat(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%d", a[i]);
    }
}

int main()
{
    int n;
    int a[max];
     printf("nhap vao so phan tu : ");
    scanf("%d", &n);

    nhap(a,n);

    xuat(a,n);

    printf("\nso lon nhat la : %d", solon(a,n));

}