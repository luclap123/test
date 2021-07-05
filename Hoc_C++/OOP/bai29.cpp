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
class Time
{
    private:
    int hour;
    int minute;
    int second;
    public:
    Time (int hour, int minute, int second)
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    void sethour(int hour)
    {
        this->hour = hour;
    }
    int gethour()
    {
         return hour;
    }
    void setminute()
    {
        this->minute =minute;
    }
    int getminute(int minuete)
    {
        return minute;   
    }
    void setsecond(int second)
    {
        this->second = second;
    }
    int getsecond()
    {
        return second;
    }
    void nextseconds()
    {
        if (hour ==23 && minute ==59 && second ==59)
        {
            hour=0;
            minute=0;
            second=0;
            return;
        }
        if (minute ==59 && second ==59)
        {
            hour++;
            minute=0;
            second=0;
            return;
        }
        if (second==59)
        {
            minute++;
            second=0;
            return;
        }
        second++;
    }

    void previoussecond()
    {
        if (hour==0 && minute==0 && second==0)
        {
            hour=23;
            minute=59;
            second=59;
            return;
        }
        if (minute==0 && second==0)
        {
            minute=59;
            second=59;
            return ;
        }
        if (second==0)
        {
            minute--;
            second=59;
            return ;
        }
        second--;
    }
    void display()
    {
        string hour=to_string(this->hour);
        string minute=to_string(this->minute);
        string second=to_string(this->second);
        if (hour.length()==1)
        {
            hour="0"+hour;
        }
        if (minute.length()==1)
        {
            minute="0"+minute;
        }
        if (second.length()==1)
        {
            second="0"+second;
        }
        cout<<hour+":"+minute+":"+second;
    }


}; 