#include <iostream>

using namespace std;

long fibonaci(int n) 
{
    long result;
    if (n==0 || n==1) 
    result=1;
    else 
    result=fibonaci(n-1)+fibonaci(n-2);
    return result;
}

int main ()
{
    int n;
    cout<<"input n : ";
    cin>>n;
    cout<<fibonaci(n);
}