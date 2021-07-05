#include <iostream>

using namespace std;

inline int max (int a, int b)
{
    return a<b ?b :a;
}

int main ()
{
    cout<<max(10,2)<<endl;
    cout<<max(4,6)<<endl;
}