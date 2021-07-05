//nhập vào một số. Kiểm tra xem số đó phải số armstrong

/*
    1. đếm số lượng chữ số
    2. tính lũy thừa
    3. kiểm tra
*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

int demso(int n)
{   
    int dem;
    while (n>0)
    {
        n /=10;
        dem++;
    }
    return dem;
}

int tinh(int n)
{   
    int soluong=demso(n);
    int a=n, last, sum=0;
    while (a>0)
    {
        last= a %10;
        a /=10;
        sum += pow (last,soluong);
    }
    if (sum==n) return true;
    return false;
}

int main ()
{
    int n;

    printf("nhap vao n : ");
    scanf("%d", &n);

    if (tinh(n)== true)
    {
        printf("%d la so armstrong", n);
    }
    else
    {
        printf("%d khong phai so armstrong", n);
    }
    getch();
    return 0;
}