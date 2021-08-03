// chuyển đổi hệ 10 sang hệ 8

#include <stdio.h>
#include <math.h>

int chuyen(int num)
{
    int p=0;
    int oct=0;
    while (num >0)
    {
        oct +=(num % 8) * pow(10, p);
        p++;
        num /=8;
    }
    return oct;
}

int main ()
{   
    int n;

    printf("nhap vao n :");
    scanf("%d", &n);

    printf("sau khi chuyen doi : %d", chuyen(n));

}