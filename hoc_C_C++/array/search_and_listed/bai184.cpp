// Bài 184: Hãy liệt kê các vị trí mà giá trị tại đó là số nguyên tố trong mảng 1 chiều các số nguyên


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

bool prime(int n)
{
	if (n < 2)
	{
		return false;
	}
	else if (n > 2)
	{
		if (n % 2 == 0)
		{
			return false;
		}
		for (int i = 3; i <= sqrt((float)n); i += 2)
		{
			if (n % i == 0)
			{
				return false;
			}
		}
	}
	return true;
}

void location_prime(int a[], int n)
{
    int flag;
    for (int i=0; i<n; i++)
    {
        if (prime(a[i])==true)
        {
            flag=1;
            printf("\n%d",i);
        }
    }
    if (flag == 0)
    printf("array nothing");
    
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

    printf("\nprime in the array are ");
    location_prime(a,n);
    getch();
    return 0;
}