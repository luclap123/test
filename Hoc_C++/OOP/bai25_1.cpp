#include "bai25.cpp"
using namespace std;
int main ()
{
    Rectangle r(2,3);
    cout<<"area : "<<r.area()<<endl;
    cout<<"perrimeter : "<<r.perimeter()<<endl;
    r.setlength(5);
    r.setwidth(2);
    cout<<"area 2 : "<<r.area()<<endl;
    cout<<"perimeter 2 : "<<r.perimeter()<<endl;
}