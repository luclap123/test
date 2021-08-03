#include "shape.cpp"
using namespace std;
class Circle : public Shape
{
    private:
    double radius;
    public:
    Circle (double radius)
    {
        this->radius = radius;
    }
    double getarea()
    {
        return 3.14* radius* radius;
    }
    double getpermimeter()
    {
        return 2*3.14* radius;
    }
};