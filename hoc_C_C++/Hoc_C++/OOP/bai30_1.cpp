#include "bai30.cpp"
using namespace std;
int main ()
{
    point p1(2.3,5.4);
    point p2(4.2,1.2);
    cout<<p1.distance(p2)<<endl;
    cout<<p1.distance(2.3,4.1)<<endl;
}