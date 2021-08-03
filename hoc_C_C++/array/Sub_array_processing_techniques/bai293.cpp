// Bài 293: Liệt kê tất cả các mảng con


#include <stdio.h>
#include <conio.h>
#include <math.h>
#define max 100

void input(int a[], int &n)
{    
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

void list (int a[], int n)
{
	int length;
	for (int i=0; i<n; i++)
	{
		for (length=1; length<=n; length++)
		{
			for (int j=i; j<length; j++)
			{
				printf("%4d",a[j]);
			}
			printf("\n");
		}
	}
}

int main ()
{
	int a[max];
	int n;
	do
	{
		printf("\n input n :");
		scanf("%d", &n);
	} while (n<0 || n> max);
	input(a,n);
	output(a,n);

	printf("\n out put sub array");
	list(a,n);

	getch();
	return 0;
}