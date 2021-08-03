#include "calculate1.cpp"
using namespace std;
int main ()
{
    Calculate a,b;
    cout<<"input one : ";
    cin>>a;
    cout<<"input two : ";
    cin>>b;
    Calculate T=a+b;
    Calculate H=a-b;
    Calculate N=a*b;
    Calculate C=a/b;

    cout<<a<<" + "<<b<<" = "<<T<<" = "<<T.entertainment()<<endl;
    cout<<a<<" - "<<b<<" = "<<H<<" = "<<H.entertainment()<<endl;
    cout<<a<<" * "<<b<<" = "<<N<<" = "<<N.entertainment()<<endl;
    cout<<a<<" / "<<b<<" = "<<C<<" = "<<C.entertainment()<<endl;
    return 0;
}