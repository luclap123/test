#include <stdio.h>
#define max 100

int main ()
{
    int a[max];
    int n,i,solon;

    do
    {
        printf("nhap so phan tu : ");
        scanf("%d", &n);
    } while (n <0 || n>100 );
    
    for (i=0; i<n; i++)
    {
        printf("\nnhap gia tri cua phan tu thu %d: ", i);
        scanf("%d", &a[i]);
    }

   
    for (i=0; i<n; i++)
    {
        printf("\n %d",  a[i]);
    }
    
    solon=a[0];
    for (i=1;i<n; i++)
    {
        if (solon<a[i])
        {
            solon=a[i];
        }
    }

    printf("so lon nhat la : %d", solon);
}