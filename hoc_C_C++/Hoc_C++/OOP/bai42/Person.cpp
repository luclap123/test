#include "1information.cpp"
#include <iomanip>
using namespace std;
class Person : public Information
{
    protected :
    float salary;
    int day;
    bool BC,HD;

    public :
    void checker ()
    {
        int check;
        cout<<"check person \n 1: Payroll \n 2: contract \n ";
        cin>>check;
        if (check==1)
        {
            BC=true;
            HD=false;
            cout<<"input salary : ";
            cin>>salary;
        }
        else if (check==2)
        {
            BC=false;
            HD=true;
            cout<<"input days work : ";
            cin>>day;
        }
        else
        {
            BC=false;
            HD=false;
            cout<<"you choose wrong ";
        }
    }
    float allowance ()
    {
        float pc;
        if (position=="GD")
        {
            return pc = 150000;
        }
        if (position=="PGD")
        {
            return pc = 100000;
        }
        return pc;
    }
    float money_hour()
    {
        if (day<26)
        {
            return (-((26-day)*50000)/1000000);
        }
        if (day>=26)
        {
            return (((day-26)*100000)/1000000);
        }
    }
    void displayBC()
    {
        if (BC==true &&HD==false)
        {
            cout<<setw(3)<<++dem1<<setw(8)<<name<<setw(10)<<salary<<setw(18)<<(salary*0.83 +allowance())/1.05<<setw(22)<<"USD"<<endl;
        }
    }
    void displayHD()
    {
        if (BC==false && HD ==true)
        {
            cout<<setw(3)<<++dem2<<setw(8)<<name<<setw(10)<<day<<setw(18)<<(1.5+money_hour())/1.05<<setw(22)<<"USD"<<endl;
        }
    }

    

};