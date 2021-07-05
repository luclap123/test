// Bài 276: Xóa tất cả các phần tử trùng với x

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define max 100

void nhap (int a[], int &n)
{
	do
	{
		printf("\nNhap so phan tu: ");
		scanf("%d", &n);
		if(n <= 0 || n > max)
		{
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
		}
	}while(n <= 0 || n > max);
	for(int i = 0; i < n; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}


void xuat(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%4d", a[i]);
	}
}

void erase (int a[], int &n, int location)
{
	for(int i = location; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}


void check(int a[], int &n, int x)
{
	for(int i = 0; i < n; i++)
	{
		if((a[i]) == x)
		{
			erase(a, n, i);
			i--;
		}
	}
}

int main()
{
	int n;
	int a[max];

	int ViTriXoa, x;
	nhap(a, n);
	xuat(a, n);

	printf("\nNhap x: ");
	scanf("%d", &x);

	check(a, n, x);
	printf("\nMang sau khi xoa tat cac cac gia tri trung voi %d: ", x);
	xuat(a, n);
	getch();
	return 0;
}