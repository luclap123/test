// Bài 254: Hãy đếm giá trị trong mảng thỏa: lớn hơn tất cả các giá trị đứng đằng trước nó

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

int count (int a[], int n)
{
    int amount=0;
    int flag;
    for (int i=1; i<n; i++)
    {
        flag=1;
        for (int j=0; j<n; j++)
        {
            if (a[i]<a[j] || a[i]==a[j])
            flag=0;
            break;
        }
    }
    if (flag==1)
    {
        amount++;
    }
    return amount;

}

int main()
{
    int a[max];
    int n;

    do
    {
        printf("\ninput n : ");
        scanf("%d", &n);
    } while (n<0 || n>max);
    
    input(a,n);
    output(a,n);

    int amount=count(a,n);
    printf("\nGia tri trong mang thoa: lon hon tat ca cac gia tri dang truoc no = %d", amount);
    getch();
    return 0;
}