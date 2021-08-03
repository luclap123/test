// Bài 155: Hãy tìm giá trị trong mảng các số thực xa giá trị x nhất


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

void creat_array(float a[], int n, float b[], int x)
{
    
    for (int i=0; i<n; i++)
    {
        b[i]= abs(x-a[i]);
    }
}

// tìm max của mảng b

float findmax(float b[], int n)
{
    int maxx=b[0];
    for (int i=0; i<n; i++)
    {
        if (b[i]> maxx)
        {
            maxx =b[i];
        }
    }
    return maxx;
}

int result(float a[], float b[], int n)
{
    printf("\nGia tri trong mang xa gia tri x nhat la: ");
	int Max = findmax(b, n);
	for (int i = 0; i < n; i++)
	{
		if (b[i] == Max)    
		{
			printf("%5.f", a[i]); // Đối chiếu qua mảng a, in phần tử ở vị trí thứ i thỏa ĐK
		}
	}

}

int main()
{
    float a[max];
    float b[max];
    int n;

    do
    {
        printf("input n : ");
        scanf("%d", &n);
    } while (n<0 || n>max);

    float x;
    printf("input x: ");
    scanf("%f", &x);
    
    input(a,n);
    output(a,n);

    creat_array (a,n,b,x);
    printf("\n khoang cach tu x=%5.f den so phan tu trong mang la :\t", x);
    output (b,n);
    result(a,b,n);
    getch();
    return 0;
}