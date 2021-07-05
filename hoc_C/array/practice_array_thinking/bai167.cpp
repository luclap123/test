// Bài 167: Hãy tìm giá trị thỏa điều kiện toàn chữ số lẻ và là giá trị lớn nhất thỏa điều kiện ấy trong mảng 1 chiều các số nguyên.
//  Nếu mảng không có giá trị thỏa điều kiện trên thì trả về 0


#include <stdio.h>
#include <conio.h>
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

bool checkodd(int n)
{
    int temp=0;
    do
    {
        temp +=n%10;
        n /=10;
        if (temp %2==0)
        return false;
    } while (n <0);
    return true;
}

int result(int a[], int n)
{
    int Max;
    int dem=0;
    for (int i=0; i<n; i++)
    {
        if (checkodd(a[i])==true)
        {
            Max=a[i];
            dem++;
            break;
        }
    }
    if (dem==0)
    return 0;
    
    for (int i=0; i<n; i++)
    {
        if (checkodd(a[i])==1)
        {
            Max = Max>a[i] ? Max : a[i];
        }
    }
    return Max;
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

    printf("\nthe number odd and max in array is : %d", result(a,n));
    getch();
    return 0;
}