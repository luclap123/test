//Bài 105: Viết chương trình nhập 1 số nguyên có 2 chữ số.  Hãy in ra cách đọc của số nguyên này

#include <stdio.h>
#include <conio.h>

int main ()
{
    int n,s;
   
    printf("nhap vao so co hai chu so : ");
    scanf("%d", &n);

        int donvi = n %10;
        int chuc = n / 10;
    if (donvi ==2)
    {
        printf("hai");
    }
    if (donvi ==3)
    {
        printf("ba");
    }
    if (donvi == 4)
    {
        printf("bon");
    }
    if (donvi == 5)
    {
        printf("nam");
    }
    if (donvi == 6)
    {
        printf("sau");
    }
    if (donvi == 7)
    {
        printf("bay");
    }
    if (donvi == 8)
    {
        printf("tam");
    }
    if (donvi == 9)
    {
        printf("chin");
    }

    if (chuc == 1)
    {
        printf("mot");
    }
    if (chuc ==2)
    {
        printf("hai");
    }
    if (chuc ==3)
    {
        printf("ba");
    }
    if (chuc == 4)
    {
        printf("bon");
    }
    if (chuc == 5)
    {
        printf("nam");
    }
    if (chuc == 6)
    {
        printf("sau");
    }
    if (chuc == 7)
    {
        printf("bay");
    }
    if (chuc == 8)
    {
        printf("tam");
    }
    if (chuc == 9)
    {
        printf("chin");
    }
    
    getch();
    return 0;
}