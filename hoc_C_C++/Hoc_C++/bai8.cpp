// Nhập mảng K41T. Tính tuổi trung bình của sinh viên nam, nữ. 
// Hiện danh sách của sinh viên có điểm thi cao nhất.

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

struct sinhvien
{
    string hoten;
    int ngay;
    int gt;
    float diem;
}x,a[100];
int n,i;

int main ()
{
    
    cout<<"nhap so sinh vien :";
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cout<<"nhap sinh vien thu " <<i+1;
        cout<<"nhap ten \n:";
        getline(cin,x.hoten);
        cin.ignore();
        cout<<"nhap ngay : ";
        cin>>x.ngay;
        cout<<"gioi tinh : ";
        cin>>x.gt;
        cout<<"diem tbm : ";
        cin>>x.diem;
    }

}