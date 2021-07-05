// Bài 136: Tìm số chẵn cuối cùng trong mảng 1 chiều các số nguyên.
//  Nếu mảng không có giá trị chẵn thì trả về -1

#include <stdio.h>
#include <conio.h>
#define max 100

void nhap (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("nhap a[%d] : ",i);
        scanf("%d", &a[i]);
    }
}

void xuat (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("\t%d",a[i]);
    }
}

int timsochan (int a[],int n)
{
    for (int i=n-1; i>=0; i--)
    {
        if (a[i] %2 ==0)
        {
            return a[i];
        }
    }
    return -1;
}

int main ()
{
    int a[max];
    int n;

    do
    {
       printf("nhap vao n : ");
       scanf("%d", &n);
    } while (n<0 || n>max);

    nhap(a,n);
    xuat(a,n);

    printf("\ngia tri chan cuoi cung la : %d", timsochan(a,n));

    getch();
    return 0;   
}