#include <iostream>

using namespace std;

void permutation(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main ()
{
    int a,b;
    cout<<"nhap a : ";
    cin>>a;
    cout<<"nhap b : ";
    cin>>b;
    permutation(&a,&b);
    cout<<"a= "<<a<<" b= "<<b<<endl; // in ra giá trị
    cout<<"a= "<<&a<<" b= "<<&b<<endl; //in ra địa chỉ
    system("pause");
}