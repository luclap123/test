// Bài 208: Tính tổng các giá trị chính phương trong mảng 1 chiều các số nguyên


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

/*Số chính phương là số mà kết quả khai căn bậc 2 là 1 số nguyên
	sqrt(4) = 2.00000 => ép về nguyên = 2 => vì 2.000  == 2 (true) => là số chính phương
	sqrt(5) = 2.23234 => ép về nguyên = 2 => vì 2.4324 != 2 (false) => không là số chính phương*/
int square(int n)
{
    return (sqrt(float(n)))==(int)(sqrt(float(n)));// So sánh 2 số khi chưa ép về kiểu nguyên và số đã ép về kiểu nguyên
}

int sum(int a[], int n)
{
    int Sum=0;
    for (int i=0; i<n; i++)
    {
        if (square(a[i])==1)
        Sum +=a[i];
    }
    return Sum;
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

    printf("\nsum square number in the array are : %d", sum(a,n));
    getch();
    return 0;
}