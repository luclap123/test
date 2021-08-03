#include "complex.cpp"
using namespace std;
int main ()
{
    Complex a1(1,2);
    Complex a2(9,5);
    Complex T=a1+a2;
    Complex H=a1-a2;
    cout<<"a1 : "<<a1<<endl;
    cout<<"a2 : "<<a2<<endl;
    cout<<"T : "<<T<<endl;
    cout<<"H : "<<H<<endl;
    return 0;
}