#include <iostream>
#include <string>
using namespace std;

struct Sinhvien 
{
char hoten[25] ;
int Ngay;
int thang;
int ns;
int gt;
float diem ;
} lop[60], *p, x = { "NVA", 1,1,1980, 1, 9.0} ;
int main ()
{
    lop[10] = x; p = &lop[10] ; // p trỏ đến sinh viên thứ 10 trong lop
    char *ht; int *gt; float *d; // các con trỏ kiểu thành phần
    ht = x.hoten; // cho ht trỏ đến thành phần hoten của x
    gt = &(lop[10].gt) ; // gt trỏ đến gt của sinh viên thứ 10
    // d = x.diem; // p trỏ đến diem của sv p đang trỏ
    cout << ht ; // in họ tên sinh viên x
    cout << *gt ; // in giới tính của sinh viên thứ 10
    cout << *d ; // in điểm của sinh viên p đang trỏ.
}