// Bài 235: Cho 2 mảng a, b. Liệt kê các giá trị chỉ xuất hiện 1 trong 2 mảng


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

void listed(int a[], int b[], int na, int nb)
{
	int i, j, flag;
	for(i = 0; i < na; i++)
	{
		flag = 1;
		for(j = 0; j < nb; j++)
		{
			if(a[i] == b[j])
			{
				flag = 0;
				break;
			}
		}
		if(flag == 1)
		printf("\n%d", a[i]);
	}
	for(i = 0; i < nb; i++)
	{
		flag = 1;
		for(j = 0; j < na; j++)
		{
			if(b[i] == a[j])
			{
				flag = 0;
				break;
			}
		}
		if(flag == 1)
		printf("\n%d", b[i]);
	}
}

int main ()
{
    int a[max], b[max];
    int na,nb;

   
    printf("\ninput a: ");
    input (a,na);
    output (a,na);

    printf("\ninput b:");
    input(b,nb);
    output(b,nb);

    listed(a,b,na,nb);
    getch();
    return 0;
}
