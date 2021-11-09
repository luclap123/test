#include <iostream>
#include <stdlib.h>

using namespace std;

//tạo một lớp car
class Car
{
private:
    int speed;
    int name;

public:
    //tạo constructor có đối số
    Car(int s, int g)
    {
        speed = s;
        name = g;
    }
    void setSpeed(int s)
    {
        speed = s;
    }
    void setGear(int g)
    {
        name = g;
    }
    int getSpeed()
    {
        return speed;
    }
    int getGear()
    {
        return name;
    }
};