#include <iostream>
#include <conio.h>
using namespace std;
struct Phanso 
{
    int tu ;
    int mau ;
} a, b, c ;

void tinh()
{
    c.tu = a.tu*b.mau + a.mau*b.tu; // tính và in a+b
    c.mau = a.mau*b.mau;
    cout << "a + b = " << c.tu << "/" << c.mau<<endl;
    c.tu = a.tu*b.mau - a.mau*b.tu; // tính và in a-b
    c.mau = a.mau*b.mau;
    cout << "a - b = " << c.tu << "/" << c.mau<<endl;
    c.tu = a.tu*b.tu; // tính và in axb
    c.mau = a.mau*b.mau;
    cout << "a * b = " << c.tu << "/" << c.mau<<endl;
    c.tu = a.tu*b.mau; // tính và in a/b
    c.mau = a.mau*b.tu;
    cout << "a / b = " << c.tu << "/" << c.mau<<endl;
}

int main()
{
    cout << "input a:" << endl ; // nhập a
    cout << "Tu:"; cin >> a.tu;
    cout << "Mau:"; cin >> a.mau;
    cout << "input b:" << endl ; // nhập b
    cout << "Tu:"; cin >> b.tu;
    cout << "Mau:"; cin >> b.mau;
    tinh();
    getch();
}