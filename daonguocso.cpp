// đảo ngược số

#include <stdio.h>

int daoso(int n)
{
    int renum=n %10; // lấy chữ số cuối cùng
    n /=10; // bỏ chữ số cuối cùng
    int last;

    while (n >0)
    {
        last =n %10;
        n /=10;
        renum=renum *10 +last;
    }
    return renum;
}

int main()
{
    int num;

    printf("nhap vao so : ");
    scanf("%d", &num);

    printf("chu so dao nguoc la : %d", daoso(num));
}