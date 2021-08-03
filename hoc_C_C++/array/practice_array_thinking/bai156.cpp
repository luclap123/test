// Bài 156: Hãy tìm giá trị trong mảng các số thực gần giá trị x nhất

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define max 100

void input(float a[], int n)
{
   

    for (int i=0; i<n; i++)
    {
        printf("input a[%d]: ",i);
        scanf("%f", &a[i]);
    }
}

void output (float a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("\t%5.f", a[i]);
    }
}

// tạo mảng b chứa khoảng cách từ x đến các giá trị của mảng a
void creatarray(float a[], int n, float b[], int x)
{   
    int i;
    for (i=0; i<n; i++)
    {
        b[i]= abs(x-a[i]);
    }
}

// tìm giá trị nhỏ nhất của mảng b
float findmin(float b[], int n)
{
    int min = b[0];
	for (int i = 1; i < n; i++)
	{
		if (b[i] < min)
		{
			min = b[i];
		}
	}
	return min;
}
void result(float a[], float b[], int n)
{
	printf("\nGia tri trong mang gan gia tri x nhat la: ");
	int Min = findmin(b, n);
	for (int i = 0; i < n; i++)
	{
		if (b[i] == Min)    
		{
			printf("%5.f", a[i]); // Đối chiếu qua mảng a, in phần tử ở vị trí thứ i thỏa ĐK
		}
	}
}

int main ()
{
    float a[max];
    float b[max];
    int n;
    do
    {
        printf("input n :");
        scanf("%d", &n);
    } while (n<0 || n>max);

    input (a,n);
    output(a,n);

    float x;
    printf("\ninput x :");
    scanf("%f", &x);

    creatarray(a,n,b,x);
    printf("\nkhoang cac cua x=%5.f den cac so trong mang a la:\n", x);
    output(b,n);
    result(a,b,n);

    getch();
    return 0;
    
}