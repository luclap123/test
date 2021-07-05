// Bài 124: Viết hàm kiểm tra trong mảng các số nguyên có tồn tại giá trị chẵn nhỏ hơn 2004 hay không

#include <stdio.h>
#include <conio.h>
#define max 100

void nhap (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("nhap gia tri a[%d] : ", i);
        scanf("%d", &a[i]);
    }
}

void xuat (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("\nin %d",a[i]);
    }
}

int tim(int a[], int n){
    int timkiem=0;
    for (int i=0; i<n;i++)
    {
        if (a[i] % 2==0 && a[i] <2004)
        {
            timkiem=1;
        }
    }
     return timkiem;
}

int main()
{
    int a[max];
    int n;

    do
    {
        printf("nhap vao n: ");
        scanf("%d", &n);
    } while (n<0 || n>100);
    
    nhap (a,n);
    xuat(a,n);

    int s=tim(a,n);
    if (s==1)
    {
        printf("\ntim thay");
    }
    else 
    {
        printf("\nkhong tim thay cai deo gi");
    }
    getch();
    return 0;
}