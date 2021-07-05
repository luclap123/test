// chuyển đổi thập phân sang nhị phân

#include <stdio.h>
#include <math.h>

long long bin(long long thapphan )
{
    int p=0;
   long long nhiphan=0;
    while (thapphan> 0)
    {
        nhiphan +=( thapphan % 2) * pow(10,p);
        p++;
        thapphan /=2;
    }
    return nhiphan;
}

int main ()
{
    long long thapphan;
    printf("nhap vao so thap phan : ");
    scanf("%d", &thapphan);

    printf("chuyen doi thanh so nhi phan : %d", bin(thapphan));
}