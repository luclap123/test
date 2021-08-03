// Bài 138: Tìm vị trí của giá trị chẵn đầu tiên trong mảng 1 chiều các số nguyên. 
// Nếu mảng không có giá trị chẵn thì sẽ trả về -1

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

int timvitri(int a[], int n)
{
    
    for (int i=0; i<n; i++)
    {
        if (a[i] % 2==0)
        {
           return i;
        }
    }
    return -1;
}

int main()
{
    int a[max];
    int n;

    do
    {
        printf("nhap vao n :");
        scanf("%d", &n);
    } while (n<0 || n>max);

    nhap (a,n);
    xuat (a,n);

    printf("\ngia tri chan dau tien trong mang la %d", timvitri(a,n));
    return 0;
    
}