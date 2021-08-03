#include <iostream>
using namespace std;
int main ()
{
    int a[]={1,2,3,4,5};
    int *p=&a[0];
    cout<<(int)(&a[0])<<endl;
    for (int i=0; i<5; i++)
    {
        cout<<(int)(*p+i);
    }
}