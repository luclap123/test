#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

struct Sinhvien 
{
    char *hoten ;
    float diem ;
} lop[4] ;

Sinhvien* nhap()
{
    Sinhvien* kq = new Sinhvien[1]; // nhớ cấp phát vùng nhớ
    kq->hoten = new char[15]; // cho cả con trỏ hoten
    cout << "name: "; cin.getline(kq->hoten,30);
    cout << "point: "; cin >> kq->diem; cin.ignore();
    return kq; // trả lại con trỏ kq
}

Sinhvien& svmax()
{
    int sosv = sizeof(lop)/sizeof(Sinhvien)-1; // bỏ thành phần thứ 0
    float maxdiem = 0;
    int kmax; // chỉ số sv có điểm max
    for (int i=1; i<sosv; i++)
        if (maxdiem < lop[i].diem)
            {
            maxdiem = lop[i].diem ;
            kmax = i;
            }
    return lop[kmax]; // trả lại sv có điểm max
}

void in(Sinhvien x)
{
cout << x.hoten << "\t";
cout << x.diem << endl;
}

int main()
{
    int i;
    int sosv = sizeof(lop)/sizeof(Sinhvien)-1; // bỏ thành phần thứ 0
    for (i=1; i<=sosv; i++) 
        lop[i] = *nhap(); // nhập danh sách lớp
    for (i=1; i<=sosv; i++) 
        in(lop[i]); // in danh sách lớp
    Sinhvien &b = svmax(); // khai báo tham chiếu b và cho
    // tham chiếu đến sv có điểm max
    in(b); // in sinh viên có điểm max
    getch();
}