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
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    int getx()
    {
        return x;
    }
    void setx(int x)
    {
        this->x = x;
    }
    int gety()
    {
        return y;
    }
    void sety(int y)
    {
        this->y = y;
    }
};