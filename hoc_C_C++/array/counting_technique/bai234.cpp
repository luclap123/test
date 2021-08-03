// Bài 234: Cho 2 mảng a, b. Đếm số lượng giá trị chỉ xuất hiện 1 trong 2 mảng


#include <stdio.h>
#include <conio.h>
#include <math.h>
#define max 100

void input(int a[], int &n)
{
    do
    {
        printf("\ninput n: ");
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


int count(int a[], int b[], int na, int nb)
{
    int flag=0;
    int amount=0;

    for (int i=0; i<na; i++)
    {
        flag=1;
        for (int j=0; j<nb; j++)
        {
            if (a[i]==a[j])
            flag=0;
            break;
        }
    }
    if (flag==1)
    {
        amount++;
    }

    for (int i=0; i<nb; i++)
    {
        flag=1;
        for (int j=0; j<na; j++)
        {
            if (b[j]==a[i])
            flag=0;
            break;
        }
    }
    if (flag==1)
    {
        amount++;
    }
    return amount;

}


int main ()
{
    int a[max], b[max];
    int na,nb;

   
    printf("\ninput a: ");
    input (a,na);
    output (a,na);

    printf("\ninput b:");
    input(a,nb);
    output(a,nb);

    int amount=count(a,b,na,nb);
    printf("\nCount the number of values that appear only 1 in 2 arrays :%d",amount);
    getch();
    return 0;
}