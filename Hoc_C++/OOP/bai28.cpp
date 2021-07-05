#include <iostream>
#include <sstream>
#include <string>

template<typename T>
std::string tu_string(const T& val)
{
    std::ostringstream stream;
    stream  << val;
    return stream.str();
}
using namespace std;
class Date
{
    private:
    int day;
    int month;
    int year;
    public:
    Date (int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void setdate (int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    int getday()
    {
        return day;
    }
    void setday(int day)
    {
        this->day = day;
    }
    int getmonth()
    {
        return month;
    }
    void setmonth(int month)
    {
        this->month = month;
    }
    int getyear()
    {
        return year;
    }
    void setyear(int year)
    {
        this->year = year;
    }
    void display()
    {
        string day=tu_string(this->day);
        string month=tu_string(this->month);
        string year=tu_string(this->year);
        if (day.length() == 1)
        {
            day="0"+day;
        }
        if (month.length() == 1)
        {
            month="0"+month;
        }
        cout<<day<<"/"<<month<<"/"<<year;
    }

};