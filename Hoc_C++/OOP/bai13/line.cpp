#include "point.cpp"
#include <math.h>
using namespace std;
class Line
{
    private:
    Point begin;  
    Point end;
    public:
    Line (Point begin, Point end)
    {
        this->begin = begin;
        this->end = end;
    }
    Line (int x1, int x2, int y1, int y2)
    {
        this->begin=Point(x1,x2);
        this->end=Point(x2,y2);
    }
    void setbegin(Point begin)
    {
        this->begin = begin;
    }
    Point getbegin()
    {
        return begin;
    }
    void setend(Point end)
    {
        this->end = end;
    }
    Point getend()
    {
        return end;
    }
    double getlength()
    {
        return sqrt(pow(end.getx()-begin.getx(),2)+pow(end.gety()-begin.gety(),2));
    }
};