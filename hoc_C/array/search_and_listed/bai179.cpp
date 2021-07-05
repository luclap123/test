// Bài 179: Hãy liệt kê các giá trị trong mảng mà thỏa điều kiện lớn hơn giá trị 
// tuyệt đối của giá trị đứng liền sau nó

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

int find(int a[], int n)
{
	int flag;
	for (int i=0; i<n; i++)
	{
		if (a[i]> abs(a[i+1]))
		{
			flag=1;
			printf("\n%d", a[i]);
		}
	}
	if (flag==0)
	{
		printf("\nmang khong co gia tri do");
	}

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

	printf("\nvalue greater than the absolute value of the value immediately following it ");
	find (a,n);
	getch();
	return 0;
}