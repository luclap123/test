#include "shape.cpp"

class Rectangle : public Shape
{
    private:
    double length;
    double width;
    public:
    Rectangle(double length, double width)
    {
        this->length = length;
        this->width = width;
    }
    double getarea()
    {
        return length* width;
    }    
    double getpermimeter()
    {
        return (length+ width)*2;
    }
};