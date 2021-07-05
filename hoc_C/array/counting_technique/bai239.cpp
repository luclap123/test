// Bài 239: Hãy đếm số lượng số nguyên tố phân biệt trong mảng


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

bool prime(int x)
{
    if (x<2)
    return false;
    if (x>2)
    {
        if (x % 2 ==0)
        return false;
    }
    else
    {
        for (int i=3; i<sqrt(x); i +=2)
        {
            if (x%i==0)
            return false;
        }
    }
    return true;
}
// kiểm tra bị trùng
int check(int a[], int n, int location)
{
    for (int i=location-1; i>=0; i--)
    {
        if (a[i]==a[location])
        return 0;
    }
    return 1;
}

int count(int a[], int n)
{
    int amount=0;
    for (int i=0; i<n; i++)
    {   
        int conincide=check(a,n,i);
        if (conincide==1)
        {
            if (prime(a[i])==true)
            amount++;
        }
    }
    return amount;
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

    printf("\namount prime in the array are : %d",count(a,n));
    getch();
    return 0;
}