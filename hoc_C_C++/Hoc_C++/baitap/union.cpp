#include <iostream>
using namespace std;

union tens
{
    int a;
    float c;
}ten;

int main ()
{
    ten.c=1.5;
    ten.a=10;
    cout<<ten.a<<endl;
    
    cout<<ten.c<<endl;


}