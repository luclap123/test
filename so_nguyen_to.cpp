//nhập vào một số kiểm tra số đó phải số nguyên tố không

#include <stdio.h>
#include <math.h>
int kiemtra(int n)
{   
    int count=0;
    int i;
    if (n== 2)
    {
        printf("2 la so nguyen to");
        return 0;
    }
    if (n <2)
    {
        printf("%d khong phai so nguyen to",n);
        return 0;
    }
    else
    {   
        for (i = 3; i<=sqrt(n); i++)
        {
            if (n % i == 0)
        {
            count++;
        }
        }
        if (count !=0)
        {
            printf("%d khong phai so nguyen to", n);
        }
        else 
        {
            printf("%d la so nguyen to ", n);
        }

    }
    return 0;
}

int main()
{   
    int n;
    printf("nhap vao n :");
    scanf("%d", &n);

    kiemtra(n);

}