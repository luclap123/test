#include <stdio.h>
#include <conio.h>

int test(int m,int n)
{
    if (m == 0)
    {
        return n+1;
    }
    if (n==0)
    {
        return test(m-1,1);
    }
    else
    {
        return test(m-1,test(m,n-1));
    }
}

int main ()
{
    int a,b;
    printf("input : ");
    scanf("%d\n%d",&a,&b);
    int n=test(a,b);
    printf("result : %d\n", n);;
}