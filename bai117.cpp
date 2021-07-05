//Bài 117: Viết chương trình nhập n và tính tổng S(n) = x + x^2 + x^3 + … + x^n

#include <stdio.h>
#include <math.h>

float tong(int, float) ;
float luythua(int, float);

float luythua(float x, int n)
{
    float t=1;
    for (int i=1; i<=n; i++)
    {
        t =t * i;
    }
    return t;
}

float tong(float x, int n)
{
    float s=0;
    for (int i=1; i<=n; i++)
    {
        s = s+ luythua(x,i);
    }
    return s;
}

int main()
{
    int n;
    float x;

    printf("\nnhap vao n : ");
    scanf("%d", &n);

    printf("\nnhap vao x : ");
    scanf("%f", &x);

    float s=tong(x,n);

    printf("\n ket qua : %f",s);

}