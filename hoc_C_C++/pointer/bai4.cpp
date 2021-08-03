//  Cho p, q là các con trỏ trỏ đến biến nguyên x = 5. Đặt *p = *q + 1; Hỏi *q ?
#include <iostream>
using namespace std;

int main ()
{
    int *p,*q;
    int x=5;
    p=&x;
    q=&x;
    *p=*q+1;
    cout<<*q;

}