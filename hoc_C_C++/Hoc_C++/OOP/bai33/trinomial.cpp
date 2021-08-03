#include <iostream>
using namespace std;
class Trinomial 
{
    public:
    float a;
    float b;
    float c;

    Trinomial ();
    Trinomial (float x, float y, float z);
    friend ostream& operator<<(ostream&x, Trinomial y);
    Trinomial operator+(Trinomial y);
    Trinomial operator-(Trinomial y);
    Trinomial operator-();

};

Trinomial::Trinomial ()
{
    a=0;
    b=0;
    c=0;
}

Trinomial::Trinomial (float x, float y, float z)
{
    a=x;
    b=y;
    c=z;
}

Trinomial Trinomial::operator+(Trinomial y)
{
    Trinomial tg;
    tg.a = a + y.a;
    tg.b = b + y.b;
    tg.c = c + y.c;
    return tg;
}

Trinomial Trinomial::operator- (Trinomial y)
{
    Trinomial tg;
    tg.a = a - y.a;
    tg.b = b - y.b;
    tg.c = c - y.c;
    return tg;
}

Trinomial Trinomial::operator -()
{
    Trinomial tg;
    tg.a = -a;
    tg.b = -b;
    tg.c = -c;
    return tg;
}

ostream& operator<<(ostream&x, Trinomial y)
{
    x<<y.a<<"x2";
    if (y.b>0) 
    {
        x<<"+"<<+y.b;
    }
    else
    {
        x<<"-"<<-y.b;
    }
    if (y.c<=0)
    {
        x<<"+"<<+y.c;
    }
    else
    {
        x<<"-"<<-y.c;
    }
}