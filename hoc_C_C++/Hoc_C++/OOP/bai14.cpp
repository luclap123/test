#include <iostream>
using namespace std;

class math
{
    public:
    static int a;
};
    int math::a=10;
int main ()
{
    math s1;
    math s2;
    s1.a;
    cout<<s1.a<<" "<<s2.a<<endl;
}