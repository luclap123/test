// 5. Cho p, q, r, s là các con trỏ trỏ đến biến nguyên x = 10. 
// Đặt *q = *p + 1; *r = *q + 1; *s = *r + 1. Hỏi giá trị của biến x ?
#include <iostream>
using namespace std;

int main ()
{
    int *p,*q,*r,*s;
    int x=10;
    p=&x;
    q=&x;
    r=&x;
    s=&x;
    *q = *p + 1; //10+1  
    *r = *q + 1; //11+1
    *s = *r + 1; //12+1
    cout<<x;

}