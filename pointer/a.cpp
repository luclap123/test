#include <iostream>
#include <cstring>
#include <conio.h>


using namespace std;

void cong(int a, int b) 
{ 
    cout << a << " + " << b << " = " << a+b <<endl;
}

void tru(int a, int b) 
{ 
    cout << a << " - " << b << " = " << a-b <<endl; 
}

void nhan(int a, int b) 
{ 
    cout << a << " x " << b << " = " << a*b <<endl;
}

void chia(int a, int b)
{ 
    cout << a << ": " << b << " = " << a/b <<endl; 
}

main()
{
    void (*f[4])(int, int) = {cong, tru, nhan, chia}; // khai báo, khởi tạo 4 con trỏ
    int m, n;
    cout <<"input m, n " ; 
    cin >>m  ;
    cin >> n ;
    for (int i=0; i<4; i++) 
    f[i](m,n);
    cout<<endl;
    getch();
}