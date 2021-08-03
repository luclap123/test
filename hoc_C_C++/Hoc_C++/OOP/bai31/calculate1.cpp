#include <iostream>
#include <math.h>
using namespace std;
class Calculate 
{
    public:
    int ts;
    int ms;

    Calculate operator+ (Calculate y);
    Calculate operator- (Calculate y);
    Calculate operator* (Calculate y);
    Calculate operator/ (Calculate y);

    double entertainment();
    friend istream& operator>>(istream&x, Calculate& y);
    friend ostream& operator<<(ostream&x, Calculate y);
};

Calculate Calculate::operator+ (Calculate y)
{
    Calculate tg;
    tg.ts=ts*y.ms + ms*y.ts;
    tg.ms = ms*y.ms;
    return tg;
}

Calculate Calculate::operator- (Calculate y)
{
    Calculate tg;
    tg.ts = ts*y.ms - ms*y.ts;
    tg.ms = ms*y.ms;
    return tg;
}

Calculate Calculate::operator* (Calculate y)
{
    Calculate tg;
    tg.ts = ts*y.ts;
    tg.ms = ms*y.ms;
    return tg;   
}

Calculate Calculate::operator/ (Calculate y)
{
    Calculate tg;
    tg.ts = ts*y.ms;
    tg.ms = ms*y.ts;
    return tg;
}

double Calculate::entertainment ()
{
    return (double) ts/ms;
}

istream&operator>>(istream&x, Calculate & y)
{
    cout<<"input tu so : ";x>>y.ts;
    cout<<"input mau so : ";x>>y.ms;
    return x;
}

ostream& operator<<(ostream&x, Calculate y)
{
    x<<y.ts<<"/"<<y.ms;
    return x;
}