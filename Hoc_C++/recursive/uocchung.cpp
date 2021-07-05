// tìm ước chung 
#include <iostream>
using namespace std;

int UCLN (int a, int b)
{
    if (a>b) return UCLN (a-b,b);
    if (a == b) return a;
    if (a < b) return UCLN (a,b-a);
}

int main ()
{
    int a,b;
    cout << "input a : ";
    cin>>a;
    cout << "input b : ";
    cin>>b;
    cout<<UCLN (a,b);
}