// tìm ước chung lớn nhất bằng đệ quy đuôi
#include <iostream>
#include <iomanip>
using namespace std;

int gcd (int x, int y)
{
    int r;
    if (x<y)
    return gcd(y,x);
    r=x%y;
    if (r==0)
    return y;
    else
    return gcd(r,y);

}

int main() 
{
    int x=25;
    int y=5;
    int a=gcd(x,y);
    cout<<a;
}