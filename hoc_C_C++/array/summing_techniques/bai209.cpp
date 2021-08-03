// Bài 209: Tính tổng các giá trị đối xứng trong mảng các số nguyên


#include <stdio.h>
#include <conio.h>
#include <math.h>
#define max 100

void input(int a[], int n)
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


int symmetry(int n)
{
	int donvi, tam = n;
	int sodaonguoc = 0;
	while(tam != 0)
	{
		donvi = tam % 10;
		sodaonguoc = sodaonguoc * 10 + donvi;
		tam /= 10;
	}
	if(sodaonguoc == n)
	{
		return 1;
	}
	return 0;
}

int Sum(int a[], int n)
{
    int sum=0;
    for (int i=0; i<n; i++)
    {
        if (symmetry(a[i])==1)
        sum +=a[i];
    }
    return sum;
}


int main()
{
    int a[max];
    int n;

    do
    {
        printf("input n : ");
        scanf("%d", &n);
    } while (n<0 || n>max);
    
    input (a,n);
    output (a,n);

    printf("\nnumber symmetry in the array are : %d", Sum(a,n));
    getch();
    return 0;
}