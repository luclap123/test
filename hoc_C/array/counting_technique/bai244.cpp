// Bài 244: Kiểm tra mảng thỏa tính chất: mảng không có số hoàn thiện lớn hơn 256.
//  Có trả về 1, không có trả về 0

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

int finishing(int n)
{
    int sum=0;
    for (int i=1; i<n; i++)
    {
        if (n %i ==0)
        {
        sum +=i;
        }
    }
    if (sum==n)
    {
    return 1;
    }
    else
    {
    return 0;
    }
}

int check(int a[], int n)
{   
    int flag=0;
    for (int i=0; i<n; i++)
    {
        if (finishing(a[i])==1 && a[i]<256)
        {
        flag=1;
        break;
        }
    }
   return flag;
}

int main ()
{
    int a[max];
    int n;

    do
    {
        printf("input n: ");
        scanf("%d", &n);
    } while (n<0 || n>max);
    
    input (a,n);
    output (a,n);

    int flag = check(a, n);
	if(flag == 1)
	{
		printf("\nMang khong co so hoan thien lon hon 256");
	}
	else
	{
	printf("\nKhong tim thay");
	}
    getch();
    return 0;
}