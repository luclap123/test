//Bài 125: Viết hàm đếm số lượng số nguyên tố nhỏ hơn 100 trong mảng

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define max 100

void nhap(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("nhap a[%d] :",i);
        scanf("%d", &a[i]);
    }
}

// tìm số nguyên tố
bool songuyento( int n)
{
    if (n<2)
    {
         return false;
    }
    else if (n>2)
    {   
        if (n%2==0)
        {
        return false;
        }
    }
    else
    {
        for (int i=3; i<sqrt(n); i +=2)
        {
            if ( n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

void xuat (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf ("\nin %d", a[i]);
    }
}


// đếm số nguyên tố
int demso (int a[], int n)
{   
    int  count=0;
   
    for (int i=0; i<n; i++)
    {
        if (songuyento(a[i]) == true && a[i]<100)
        {
            count ++;
        }
    }
    return count;
}

// liệt kê các số nguyên tố
void list(int a[], int n)
{
    for (int i =0; i<n; i++)
    {
        if (songuyento(a[i]) == true && a[i]<100)
        {   
             printf("\nso nguyen to la %d", a[i]);
        }
    }
}

int main ()
{
    int a[max];
    int n;
    do
    {
       printf("nhap vao so phan tu :");
       scanf("%d", &n);
    } while (n<0 || n >100);

    nhap (a,n);
    xuat(a,n);

    int dem =demso(a,n);
    printf("\nso  luong so nguyen to : %d", dem);

    list(a,n);
    getch();
    return 0;
    
}