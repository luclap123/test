// chuyển đổi hệ 8 sang hệ 10

#include <stdio.h>
#include <math.h>

int chuyen(int num)
{
    int p= 0;
    int dec=0;
    while (num >0)
    {
        dec += (num %  10) *pow (8, p);
        p++;
        num /=10;
    }
    return dec;
}

int main ()
{
    int n;
    printf("nhap vao so : ");
    scanf("%d", &n);

    printf("sau khi chuyen doi la : %d",chuyen(n));
}