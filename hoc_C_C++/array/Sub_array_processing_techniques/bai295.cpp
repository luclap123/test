// Bài 295: Liệt kê dãy con tăng dần

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

int check_assending(int b[], int nb)
{
    for (int i=0; i<nb-1; i++)
    {
        if (b[i]>b[i+1])
        return 0;
    }
    return 1;
}

void output2(int b[], int nb)
{
    for (int i=0; i<nb; i++)
    {
        printf("%4d", b[i]);
    }
    printf("\n");
}

void list(int a[], int n)
{
    int chieudai;
    int b[max],nb;
    for (int i=0; i<n; i++)
    {
        
        for (chieudai=1; chieudai<=n; chieudai++)
        {
            nb=0;
            for (int j=i; j<chieudai; j++)
            {
                b[nb]=a[j];
                nb++;
            }
            if (check_assending(b,nb)==1)
            {
                output2(b,nb);
            }
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

    printf("\nmang sau khi thay doi ");
    list(a,n);
    getch();
    return 0;
}