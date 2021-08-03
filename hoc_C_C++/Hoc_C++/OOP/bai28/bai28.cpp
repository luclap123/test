#include "printer.cpp"
#include "dotprinter.cpp"
#include "laserprinter.cpp"
using namespace std;
int main ()
{
    dot a;
    a.input();
    a.output();
    Laser b;
    b.input();
    b.output();
}