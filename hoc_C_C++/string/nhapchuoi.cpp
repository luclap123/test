#include <stdio.h>

int main()
{
    int age;
    char name[100];
    printf("\nnhap tuoi : ");
    scanf("%d", &age);
    fflush(stdin);

    printf("\nnhap ten : ");
    fgets(name, sizeof(name), stdin);
    
    printf("%d - %s",age,name);
}