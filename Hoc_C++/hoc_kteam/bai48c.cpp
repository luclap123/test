#include <iostream>
using namespace std;
int main ()
{
    int value=20;
    const int *a= &value;
    cout <<a;
}