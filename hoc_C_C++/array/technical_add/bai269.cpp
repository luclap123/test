// Bài 269: Thêm x vào trong mảng tăng nhưng vẫn giữ nguyên tính tăng của mảng


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

void permutation(int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void acsending (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (a[i]>a[j])
            permutation(a[i],a[j]);
        }
    }
}

/*
cho chạy từ cuối về đầu, nếu thấy số nào lớn hơn x thì cho nó dịch về sau một vị trí
*/
void insertx (int a[], int &n, int x)
{
    for (int i=0; i<n; i++)
    {
        if (x<a[i])
        {
            int temp=x;
            for (int j=n; j>i; j--)
            {
                a[j]=a[j-1];
            }
            a[i]=temp;
            break;
        }
    }
    n++;
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
    
    acsending(a,n);
    int insert;
    printf("\ninput number : ");
    scanf("%d", &insert);

    insertx(a,n,insert);
    printf("\n the array after insert : ");
    output(a,n);

    getch();
    return 0;
}