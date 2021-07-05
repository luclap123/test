//Bài 102: Viết chương trình nhập vào 1 ngày ( ngày, tháng, năm). Tìm ngày kế ngày vừa nhập (ngày, tháng, năm)

#include <stdio.h>
#include <conio.h>

int namnhuan(int nam)
{
    return (nam % 4 ==0 && nam % 100 !=0) || (nam % 400 ==0);
}

int demngay(int nam, int thang)
{   
    int ngaytrongthang;
    switch(thang)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
           ngaytrongthang=31;
        break;
        case 4: case 6: case 9: case 11:
            ngaytrongthang=30;
        break;
        case 2:
        int check=namnhuan(nam);
        if (check==1)
        {   
          ngaytrongthang=29;   
        }
        else
        {
           ngaytrongthang=28;
        }
    }
}

int ngaytieptheo(int ngay, int thang, int nam)
{
    int ngaytieptheo=demngay(nam,thang);
    if (ngay <31 )
    {
        ngay++;
    }
    if (thang <12)
    {
        thang++;
    }
    if (nam <3000)
    {
        nam++;
    }
    printf("ngay thang nam ke tiep la %d - %d- %d",ngay,thang,nam);
}


int main()
{
    int ngay, thang, nam;

    printf("nhap vao so ngay : ");
    scanf("%d", &ngay);
    
    printf("nhap vao so thang : ");
    scanf("%d", &thang);

    printf("nhap vao so nam : ");
    scanf("%d", &nam);

    ngaytieptheo(ngay, thang, nam);

    getch();
    return 0;
    
}