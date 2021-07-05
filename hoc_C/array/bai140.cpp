// Bài 140: Hãy tìm giá trị dương nhỏ nhất trong mảng 1 chiều các số thực. 
// Nếu mảng không có giá trị dương thì sẽ trả về -1

#include <math.h>
#include <stdio.h>
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

float timsobedautien(float a[], int n)
{
    for (int i=0; i<n; i++)
    {
        if (a[i]>0)
        {
            return a[i];
        }
    }
    return -1;
}

float timsobe(float a[], int n)
{
    float sobe=timsobedautien(a,n);
    if (sobe==-1)
    {
        return -1;
    }
    for (int i=0; i<n; i++)
    {
        if (a[i]>0 && a[i]<sobe)
        {
            sobe=a[i];
        }
    }
    return sobe;
}

int main()
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

    printf("\nso be nhat trong mang la : %5.f", timsobe(a,n));
    return 0;
    
}