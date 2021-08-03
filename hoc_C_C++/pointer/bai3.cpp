// Cho p, q là các con trỏ cùng trỏ đến kí tự c. 
// Đặt *p = *q + 1. Có thể khẳng định: *q = *p - 1 ?

#include <iostream>
using namespace std;
int main ()
{
    char *p;
    char *q;
    *p='c';
    *q='c';
    *p= *q+1;
    cout<<p;
    *q= *p-1;
    cout<<q;
}