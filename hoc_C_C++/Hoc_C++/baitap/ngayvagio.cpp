#include <iostream>
#include <ctime>
using namespace std;

int main ()
{
    time_t now= time ('\0');
    cout<<"\n now = "<<now;
    char *t=ctime(&now);
    tm *a=localtime(&now);
    char *t1=asctime(a);
    cout<<"\ntime was formart : "<<t;
    cout<<"\ntime was formart type of structure : "<<t1;

    cout<<"\nngay : "<<a->tm_mday << " thang : "<<1+ a->tm_mon << " nam : "<<1900+a->tm_year;
    cout<<"\ngio : "<<a->tm_hour << " phut : "<<a->tm_min << " giay : "<<a->tm_sec;
    return 0;
}