#include <iostream>
using namespace std;
class Date
{
    public:
    int day;
    int month;
    int year;

    void input();
    void output();
};

void Date::input()
{
    cout<<"input days : ";
    cin>>day;
    cout<<"input month : ";
    cin>>month;
    cout<<"input year : ";
    cin>>year;
}

void Date::output()
{
    cout<<"days : "<<day<<endl;
    cout<<"months : "<<month<<endl;
    cout<<"years : "<<year<<endl;
}