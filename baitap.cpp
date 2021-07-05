#include <iostream>
#include <conio.h>
#include <math.h>
// bài  của lục lập
using namespace std;

int  bai_mot(int n)
{
    int a,b,cv,dt;
    cout<<"\nnhap chieu dai : ";
    cin>>a;
    cout<<"\nnhap chieu rong : ";
    cin>>b;
    cv=(a+b)*2;
    dt=a*b;
    cout<<"\nchu vi hinh chu nhat la : "<<cv;
    cout<<"\ndien tich hinh chu nhat la : "<<dt;
    return 0;
}

int bai_hai (int n)
{
    float a,b,c;
    int cv;
    float dt,p;
    cout<<"\n nhap vao canh a : ";
    cin>>a;
    cout<<"\n nhap vao canh b : ";
    cin>>b;
    cout<<"\n nhap vao canh c : ";
    cin>>c;

    p=(a+b+c)/2;
    dt=sqrt(p*(p-a)*(p-b)*(p-b));
    cv=a+b+c;
    cout<<"\n dien tich hinh tam giac la : "<<dt;
    cout<<"\n chu vi hinh tam giac la : "<<cv;
    return 1;
}

int bai_ba (int n)
{
    float a,b,h;
    float dt;
    cout<<"\n nhap vao do dai day lon : ";
    cin>>a;
    cout<<"\n nhap vao do dai day be : ";
    cin>>b;
    cout<<"\n nhap vao chieu cao : ";
    cin>>h;
    dt=h*((a+b)/2);
    cout<<"\n dien tich hinh thang la : "<<dt;
    return 2;
}

bool bai_bon (int n)
{
    int a;
    cout<<"\n nhap so can kiem tra : ";
    cin>>a;
    if (a<2)
    {
        return false;
    }
    if (a==2)
    {
        return true;
    }
    else
    {
        for (int i=3; i<sqrt(a); i +=2)
        {
            if (a % i ==0)
            false;
        }
    }
    return true;
    if (a == false)
    {
        cout<<"\n"<<a<<" khong la so nguyen to";
    }
    else
    {
        cout<<"\n"<<a<<" la so nguyen to";
    }
    return  3;
}

int main ()
{
    int n;
    cout<<"\nmoi ban nhap bai toan can lam : ";
    cout<<"\n_______________________________________________";
    cout<<"\n 1: tinh chu vi va dien tich hinh chu nhat";
    cout<<"\n 2: tinh chu vi va dien tich hinh tam giac";
    cout<<"\n 3: tinh dien tich cua hinh thang ";
    cout<<"\n 4: xac dinh xem so do phai so nguyen to khong";
    cout<<"\n 5: tinh tong cac so chinh phuong";
    cout<<"\n_______________________________________________";
    do
    {
        cout<<"\n nhap bai ma ban muon chon : ";
        cin>>n;
    {   
        if (n<0 || n>6)
        {
            cout<<"\n lua chon cua ban khong phu hop !";
        }
    }
    } while (n<0 || n>6); 
    switch(n)
    {
        case 1:
        {
            bai_mot(n);
            break;
        }
        case 2:
        {
        bai_hai(n);
        break;
        }
        case 3:
        {
            bai_ba(n);
            break;
        }
        case 4:
        {
            bai_bon(n);
        }
    }
}