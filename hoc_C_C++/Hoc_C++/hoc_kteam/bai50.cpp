#include <iostream>

using namespace std;

int main ()
{
    int value=10;
    void *in=&value;
    
    int *a=static_cast<int*>(in);
    cout<<*a;

}