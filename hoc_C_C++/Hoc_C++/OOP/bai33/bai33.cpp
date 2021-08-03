#include "trinomial.cpp"
using namespace std;
int main ()
{
    Trinomial x(1,5,3);
    Trinomial y(2,4,1);
    x=-x;
    y=-y;
    cout<<"after changing sign : "<<x<<endl;
    cout<<"after changing sign : "<<y<<endl;
    Trinomial T=x+y;
    Trinomial H=x-y;
    cout<<"sum : "<<T<<endl;
    cout<<"subtraction : "<<H<<endl;
}