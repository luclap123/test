// chuyển đổi số nhị phân sang thập phân

#include <stdio.h>
#include <math.h>

int dec(long long nhiphan)
{
    int p=0;
    int thapphan=0;
    while(nhiphan >0)
    {
        thapphan +=(nhiphan %10) * pow(2,p);
        p++;
        nhiphan /=10;
    }
    return thapphan;
}

int main ()
{
    long long nhiphan;

    printf("nhap vao nhi phan : ");
    scanf("%d", &nhiphan);

    printf("doi sang thap phan : %d", dec(nhiphan));
}