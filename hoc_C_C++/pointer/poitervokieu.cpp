#include <iostream>

using namespace std;

int main ()
{
    int x=20;
    float y=12.5;
    char z='c';

    void *p;
    p=&x;
    cout<<*((int*)p)<<endl;

    p=&y;
    cout<<*((float*)p)<<endl;

    p=&z;
    cout<<*((char*)p)<<endl;
}