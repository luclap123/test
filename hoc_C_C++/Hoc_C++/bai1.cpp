#include <iostream>
#include <conio.h>

using namespace std;
int main ()
{
    int a[5];
    int *p=a;
    cout<<"nhap vao 5 phan tu : ";
    cin>>*p>>*(p+1)>>*(p+2)>>*(p+3)>>*(p+4);
    for (int i=0; i<5; i++)
    {
        cout<<"\n"<<a[i]<<endl;
    }
}