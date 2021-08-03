#pragma once
#include <iostream>
using namespace std;
class Electronic 
{
    public:
    int wattage;
    int voltage;

    Electronic (int a, int b);
    // {
    //     wattage = a;
    //     voltage = a;
    // }
};

Electronic::Electronic(int a, int b)
{
        wattage = a;
        voltage = a;
}


