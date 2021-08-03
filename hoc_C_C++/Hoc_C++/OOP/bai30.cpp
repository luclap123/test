#include <iostream>
#include <math.h>
using namespace std;
class point 
{
    private :
    double x;
    double y;
    public :
    point ()
    {

    }
    point (double x, double y)
    {
        this->x = x;
        this->y = y;
    }
    void setx(double x)
    {
        this->x = x;
    }
    double getx()
    {
        return x;
    }
    void sety(double y)
    {
        this->y = y;
    }
    double gety()
    {
        return y;
    }
    void setxy(double x, double y)
    {
        this->x = x;
        this->y = y;
    }
    double distance (double x, double y)
    {
        return sqrt((this->x - x) * (this->x - x) + (this->y - y) * (this->y - y));
    }
    double distance (point another)
    {
        return (another.getx(), another.gety());
    }
};