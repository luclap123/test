// Bài 702: Tính S(n) = 1 + 2 + 3 + … + n
#include <iostream>

using namespace std;

int tinh(int n) 
{
    if (n==0) return 0;
    return tinh(n-1)+n;
}

int main ()
{
    int n;
    cout<<"input n :";
    cin>>n;
    int result=tinh(n);
    cout<<result;
}