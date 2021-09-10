#include <iostream>
#include <math.h>
using namespace std;
int gt (int n)
{
    int s=1;
    for (int i = 1; i <= n; i++)
    {
        s *=i;
    }
    return s;
}

int result (int n, int k)
{
    return gt(n)/(gt(k)*gt(n-k));
}
int main ()
{
    int n, k;
    cout<<"input n: ";
    cin>>n;
    cout<<"input k: ";
    cin>>k;
    int kq = result(n, k);
    cout<<"result "<<kq;
}