// Bài 186: Hãy liệt kê các vị trí trong mảng 1 chiều 
// các số thực mà giá trị tại đó bằng giá trị âm đầu tiên trong mảng


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

// tìm số âm
float negative(float a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] < 0)
		{
			return a[i];
		}
	}
	return -1;
}

// tìm vị trí
void location(float a[], int n)
{
	float Negative = negative(a, n);
	for(int i = 0; i < n; i++)
	{
		if(a[i] == Negative)
		{
			printf("%4d", i);
		}
	}
}

int main()
{
    float a[max];
    int n;

    do
    {
        printf("input n : ");
        scanf("%d", &n);
    } while (n<0 || n>max);
    
    input (a,n);
    output (a,n);

    printf("\nlocation negative in the array are");
    location(a,n);
    getch();
    return 0;
}