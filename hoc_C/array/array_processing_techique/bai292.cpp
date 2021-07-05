// Bài 292: Biến đổi mảng  số thực bằng cách thay tất cả phần tử trong mảng bằng số nguyên gần nó
// nhất (giống làm tròn)

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define max 100

void input(float a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("input a[%d]: ",i);
        scanf("%f", &a[i]);
    }
}

void output (float a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("\t%8.3f", a[i]);
    }
}

/*
n=6.5
phan nguyen =int (6.5)=6
phan le= n-phan nguyen= 6.5 - 6 =0.5
*/
void change (float &n)
{
    int phannguyen= int(n);
    float phanle= n- phannguyen;
    for (int i=0; i<n; i++)
    {
        if (phanle <=0.5)
        {
            n= (float(phannguyen));
        }
        else
        {
            n=(float(phannguyen +1));
        }
    }
}

void result(float a[], int n)
{
    for (int i=0; i<n; i++)
    {
        change(a[i]);
    }
}

int main ()
{
    float a[max];
    int n;
    
    do
    {
        printf("\n input n :");
        scanf("%d", &n);
    } while (n<0 || n>max);
    
    input(a,n);
    output(a,n);

    result(a,n);
    printf("\nthe array after chance");
    output(a,n);
    getch();
    return 0;
}