#include <iostream>
using namespace std;

int main ()
{
    int value=20;
    int *poi=&value;

    int **poi2=&poi;
    cout<<*poi<<endl;
    cout<<*poi2<<endl;
    cout<<**poi2<<endl;
}