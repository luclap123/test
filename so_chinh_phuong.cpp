// nhập vào một số kiểm tra số đó xem phải số chính phương không

#include <stdio.h>


int main ()
{
    int n;

    printf("\nnhap vao n :");
    scanf("%d", &n);

    int i=0;
    while (i*i <= n)
    {
        if (i*i == n)
        {
            printf("%d la so chinh phuong", n);
            return 0;
        }
        ++i;
        }
            printf("day khong phai so chinh phuong");
}