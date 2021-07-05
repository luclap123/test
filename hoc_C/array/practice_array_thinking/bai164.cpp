// Bài 164: Cho mảng 1 chiều các số nguyên. Hãy tìm giá trị đầu tiên thỏa mãn tính chất số gánh(số đối xứng)


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

int symmetrical_numbers(int x)
{
    int thay=x;
    int number=0,i;

    while(thay !=0)
    {
        number =number *10 + (thay%10);
        thay /=10;
    }
    if (x==number)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int result(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        if ((symmetrical_numbers(a[i]))==1)
        {
            return a[i];
        }
    }
    return -1;
}

int main ()
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

    printf("\nso ganh dau tien la : %d", result(a,n));

    getch();
    return 0;
}