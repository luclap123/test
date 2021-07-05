//Bài 103: Viết chương trình nhập vào 1 ngày ( ngày, tháng, năm). Tìm ngày trước ngày vừa nhập (ngày, tháng, năm)

#include <stdio.h>
#include <conio.h>

int namnhuan(int nam)
{
    return (nam % 4 == 0 && nam % 100 !=0) || (nam % 400 ==0);
}

int demngay(int thang, int nam)
{
    int songaytrongthang;
    switch(thang)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        songaytrongthang=31;
        break;
        case 4: case 6: case 9: case 11:
        songaytrongthang=30;
        break;
        case 2:
        int check=namnhuan(nam);
        if (check ==1)
        {
            songaytrongthang= 29;
        }
        else
        {
            songaytrongthang=28;
        }
    }
    return songaytrongthang;
}

void timngaytruoc(int ngay, int thang, int nam)
{
    int songaytrongthang=demngay(thang,nam);
    if (ngay ==1)
    {
        ngay=songaytrongthang;
        if (thang==1)
        {
            thang=12;
            nam--;
        }
            else
            thang--;
        }
        else
        ngay--;
        printf("ngay thang nam sau khi giam : %d - %d - %d ",ngay, thang, nam);
    
}

int main ()
{
    int ngay,thang,nam;
    
    printf("nhap vao so ngay : ");
    scanf("%d", &ngay);
        
    printf("nhap vao so thang : ");
    scanf("%d", &thang);
    
    printf("nhap vao so nam : ");
    scanf("%d", &nam);

    timngaytruoc(ngay,thang,nam);
    
    getch();
    return 0;

}