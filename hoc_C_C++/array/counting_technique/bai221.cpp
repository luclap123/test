/* Bài 221: Cho biết sự tương quan giữa số lượng chẵn và lẻ trong mảng
Hàm trả về 1 trong 3 giá trị -1, 0, 1
Giá trị -1 là chẵn nhiều hơn lẻ
Giá trị 0 là chẵn bằng lẻ
Giá trị 1 là chẵn ít hơn lẻ */



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
    for (int i=0; i<n; i++)
    {
        if (a[i] % 2==0)
        amount++;
    }
    if (amount > n -amount)
    return -1;
    if (amount == n-amount)
    return 0;
    return 1;
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

    printf("\namount even and odd : %d", count(a,n));    
    getch();
    return 0;
}