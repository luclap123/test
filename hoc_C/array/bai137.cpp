// Bài 137: Tìm 1 vị trí mà giá trị tại vị trí đó là giá trị nhỏ nhất trong mảng 1 chiều các số thực

#include <stdio.h>
#define max 100

void nhap (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("nhap a[%d] : ",i);
        scanf("\t%d", &a[i]);
    }
}

void xuat (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("\t%d", a[i]);
    }
}

int timvitri(int a[], int n)
{
    int vitri=0;
    for (int i=0; i<n; i++)
    {
        if (a[i]< a[vitri])
        {
            vitri=i;
        }
    }
    return vitri;
}

int main ()
{
    int a[max];
    int n;

    do
    {
        printf("nhap vao n: ");
        scanf("%d", &n);
    } while (n<0 || n>max);
    
    nhap (a,n);
    xuat (a,n);

    int vitri=timvitri(a,n);
    printf("\nvi tri chua phan tu nho nhat : %d",vitri);
}