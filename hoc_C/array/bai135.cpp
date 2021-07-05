// Bài 135: Viết hàm tìm giá trị dương đầu tiên trong mảng 1 chiều các số thực. 
// Nếu mảng không có giá trị dương thì trả về -1

#include <stdio.h>
#include <conio.h>
#include <math.h>
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
        printf("\t%5.f", a[i]);
    }
}
int timgiatri(float a[], int n)
{

    for (int i=0; i<n; i++)
    {
        if (a[i]>0)
        {
           return a[i];
        }
        else
        return -1;
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
    
    nhap (a,n);
    xuat (a,n);

    printf("\ngia tri duong dau tien %d", timgiatri(a,n));
    getch();
    return 0;
}
