#include "Point2.cpp"
#include <vector>
#include <math.h>
using namespace std;
class Polyline
{
    private:
    vector <Point> points;
    public:
    Polyline()
    {

    }
    Polyline (vector <Point> points)
    {
        this->points = points;
    }
    void appendpoint(Point point)
    {
        points.push_back(point);
    }
    void appendpoint(int x, int y)
    {
        points.push_back(Point(x, y));
    }
    double getlength()
    {
        double length =0;
        for (int i=0; i<points.size()-1; i++)
        {
            int x1 =points[i].getx();
            int y1 =points[i].gety();
            int x2=points[i+1].getx();
            int y2=points[i+1].gety();
            double distance =sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
            length += distance;
        }
        return length;
    }
};