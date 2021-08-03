// Bài 158: Cho mảng 1 chiều các số thực, 
// hãy tìm giá trị x sao cho đoạn [-x, x] chứa tất cả các giá trị trong mảng

#include <stdio.h>
#include <math.h>
#define max 100

void input (float a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("input a[%d] : ", i);
        scanf("%f", &a[i]);
    }
}

void output (float a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%5.f", a[i]);
    }
}

float findx(float a[], int n)
{
    float x=a[0];
    for (int i=1; i<n; i++)
    {
        x= (x> (fabs(a[i])) ? x : (fabs(a[i])));
    }
    return x;
}

int main ()
{
    float a[max];
    int n;
    do
    {
        printf("input n : ");
        scanf("%d", &n);
    } while (n<0 || n>100);
    
    input (a,n);
    output (a,n);

    float x = findx(a,n);
    printf("\ngia tri %.5f thoa man dieu kien doan [-%.5f %.5f] chua tat ca gia tri trong mang ",x,x,x);
}