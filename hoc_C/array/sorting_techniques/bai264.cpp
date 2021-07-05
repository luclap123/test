// Bài 264: Trộn 2 mảng đã tăng thành 1 mảng được sắp xếp tăng


#include <stdio.h>
#include <conio.h>
#include <math.h>
#define max 100

void input(int a[], int &n)
{     
    do
    {
        printf("\ninput n : ");
        scanf("%d", &n);
    } while (n<0 || n>max);

    for (int i=0; i<n; i++)
    {
        printf("input a[%d]: ",i);
        scanf("%d", &a[i]);
    }
}

void output (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("\t%d", a[i]);
    }
}

void permutation(int &a, int &b)
{
    int tg;
    tg=a;
    a=b;
    b=tg;
}

void sort(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (a[i]>a[j])
            permutation(a[i],a[j]);
        }
    }
}

void mixarray(int a[], int b[],int c[], int na, int nb, int &nc)
{
    nc=na+nb; //số phần tử mảng cần gộp
    sort(a,na);
    sort(b,nb);
    int locationA=0, locationB=0;
    for (int i=0; i<nc; i++)
    {
        if ((locationA<na) && (locationB)<nb)
        {
            if (a[locationA]<b[locationB]) 
            {
                c[i]=a[locationA++];
            }
            else
            {
                c[i]=b[locationB++];
            }
        }
        else if(locationB==nb)
        {
            c[i]=a[locationA++];
        }
          else
            {
                c[i]=b[locationB++];
            }

    }

}

int main()
{
    int a[max],b[max],c[max];
    int na,nb,nc;
    input(a,na);
    output(a,na);

    input(b,nb);
    output(b,nb);

    mixarray(a,b,c,na,nb,nc);
    printf("\nthe array after mix");
    output(c,nc);
    getch();
    return 0;
}