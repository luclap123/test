// Bài 211: Tính trung bình cộng các số nguyên tố trong mảng 1 chiều các số nguyên


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

float sum_prime (int a[], int n)
{
    float dem=0;
    int  sum=0;
    for (int i=0; i<n; i++)
    {
        if (prime(a[i])==1)
        {
            sum +=a[i];
            dem++;
        }
    }
    if (dem==0)
    {
    printf("\narray nothing prime");
    return 0;
    }
    return sum/dem;
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

    float average=sum_prime(a,n);
    printf("\naverage prime in the array is : %f", average);
    getch();
    return 0;
}