#include <iostream>
using namespace std;
class Complex 
{
    public:
    int reality;
    int illusion;

    Complex operator+ (Complex y);
    Complex operator- (Complex y);
    Complex (int x, int y);
    friend ostream& operator<<(ostream&x , Complex y);

};

Complex::Complex (int x, int y)
{
    reality=x;
    illusion=y;
}

ostream&operator<<(ostream&x, Complex y)
{
    x<<y.reality<<"+ i*"<<y.illusion;
    return x;
}

Complex Complex::operator+ (Complex y)
{
    Complex tg(0,0);
    tg.reality = reality + y.reality;
    tg.illusion = illusion + y.illusion;
    return tg;
}

Complex Complex::operator- (Complex y)
{
    Complex tg(0,0);
    tg.reality = reality - y.reality;
    tg. illusion = illusion - y.illusion;
    return tg;
}