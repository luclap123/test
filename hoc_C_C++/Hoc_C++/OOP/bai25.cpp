#include <iostream>
#include <math.h>
using namespace std;
class Rectangle 
{
    private:
    double length;
    double width;
    public:
    Rectangle ()
    {

    }   
    Rectangle (double length, double width)
    {
        this->length = length;
        this->width = width;
    }
    double getlength()
    {
        return length;
    }
    void setlength (double length)
    {
        this->length = length;
    }
    double getwidth()
    {
        return width;
    }
    void setwidth(double width)
    {
        this ->width = width;
    }
    double area()
    {
        return width*length;
    }
    double perimeter()
    {
        return (length + width)*2;
    }
};