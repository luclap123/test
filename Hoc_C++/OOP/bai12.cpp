#include <iostream>
#include <math.h>
using namespace std;

class circle
{
    private :
    double radius;
    public :
    circle ( double radius)
    {
        this->radius = radius;
    }
    
    double getarea()
    {
        return 3.14 * radius*radius;
    }

    double getCircumference ()
    {
        return 3.14 *2 * radius;
    }
};

int main ()
{
    circle s(5);
    cout<<s.getarea()<< endl;
    cout<<s.getCircumference()<< endl;
}
