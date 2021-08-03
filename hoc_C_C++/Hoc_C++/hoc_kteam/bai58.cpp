#include <iostream>
using namespace std;

// int funtion(int a)
// {
//     return a;
// }

// int main ()
// {
//     cout<<funtion<<endl;
//     cout<<funtion(0)<<endl;
//     return 0;
// }

void swap (int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main ()
{
    void (*swapnumber)(int &, int &) =swap;
    int a=11, b=4;
    cout<<a  <<" " <<b <<endl;

    // change
    (*swapnumber)(a,b);
    cout<<a <<" "<<b <<endl;

    // change
    swapnumber (a,b);
    cout<<a <<" "<<b <<endl;
    return 0;
}