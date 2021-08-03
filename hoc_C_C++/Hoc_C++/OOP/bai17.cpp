#include <iostream>
#include <math.h>

using namespace std;
class math   
{
    public :
    static int min (int a, int b)
    {
        return a < b ? a : b;
    }

    static int min (int a, int b,int c)
    {
        return min(min(a,b),c);
    }
};

int main ()
{
    cout<<math::min(2,45)<<endl;
    cout<<math::min(24,93,5)<<endl;
}