// Bài 132: Viết hàm liệt kê các giá trị chẵn trong mảng 1 chiều các số nguyên

#include <stdio.h>
#define max 100

void nhap (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("nhap a[%d] : ", i);
        scanf("%d", &a[i]);
    }
}

void xuat (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("\t%d", a[i]);
    }
}

int sochan(int a[], int n)
{
    int s;
    for (int i=0; i<n; i++)
    {
        if (a[i] %2==0)
        {
            printf("%5d", a[i]);
        }
    }
}


int main()
{
    int a[max];
    int n;
    do
    {
        printf("nhap vao n : ");
        scanf("%d", &n);
    } while (n<0 || n>100);

    nhap (a,n);
    xuat (a,n);
     
    printf("\ncac so chan la: ");
     sochan(a,n);
     return 0;
    
}