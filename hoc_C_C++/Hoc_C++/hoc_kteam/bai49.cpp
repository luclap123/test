#include <iostream>
using namespace std;

int main ()
{
    int value=20;
    int &a=value;
    a=30;
    cout<<value;

}