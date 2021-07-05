//Bài 101: Viết chương trình nhập tháng, năm. Hãy cho biết tháng đó có bao nhiêu ngày

#include <stdio.h>
#include <conio.h>

int namnhuan (int nam)
{   
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

int demngay (int nam, int thang)
{
    switch(thang)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("thang %d co 31 ngay", thang);
        break;
        case 4: case 6: case 9: case 11:
        printf("thang %d co 30 ngay", thang);
        break;
        case 2:
        int check=namnhuan(nam);
        if (check == 1)
        {
            printf("thang 2 co 29 ngay");
        }
        else 
        {
            printf("thang 2 co 28 ngay");
        }
    }    
    
}

int main()
{
    int nam,thang;

    printf("nhap vao nam : ");
    scanf("%d", &thang);

    printf("nhap vao thang : ");
    scanf("%d", &nam);

    demngay(thang,nam);
}