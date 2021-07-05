// đảo ngược chữ số sử dụng hàm đệ quy

#include <stdio.h>
#include <conio.h>

void daoso()
{
    char n;
    scanf("%c", &n);
    if (n != '\n')
    {
        daoso();
        printf("%c", n);
    }
}

int main()
{

    printf("nhap vao : ");
    daoso();
}