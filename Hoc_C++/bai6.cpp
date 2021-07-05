#include <iostream>
using namespace std;

struct Sinhvien 
{
    char hoten[25] ;
    long ns;
    int ng;
    int gt;
    float diem ;
} x, y, *p ;
int main ()
{
    cout << " Nhập dữ liệu cho sinh viên x:" << endl ;
    cin.getline(x.hoten, 25);
    cin >> x.ns.ng >> x.ns.th >> x.ns.nam;
    cin >> x.gt;
    cin >> x.diem;
    y = x ; // Đối với biến mảng, phép gán này là không thực hiện được
    p = new Sinhvien[1] ; *p = x ;
    cout << "Thông tin về sinh viên y là:" << endl ;
    cout << "Họ và tên: " << y.hoten << endl;
    cout << "Sinh ngày: " << y.ns.ng << "/" << y.ns.th << "/" << y.ns.nam ;
    cout << "Giới tính: " << (y.gt = 1) ? "Nam": "Nu ";
    cout << y.diem;
}