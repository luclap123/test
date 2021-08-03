#pragma once 
#include <iostream>
using namespace std;
class Point 
{
    private:
    int x;
    int y;
    public:
    Point()
    {

    }
    Point (int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void setx(int x)
    {
        this->x = x;
    }
    int getx()
    {
        return x;
    }
    void sety(int y)
    {
        this->y = y;
    }
    int gety()
    {
        return y;
    }
};