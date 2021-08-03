#include <iostream>
using namespace std;
class enterprise
{
    private:
    string name;
    int money;
    int amount;
    public:
    enterprise (string name,int money, int amount)
    {
        this->name = name;
        this->money = money;
        this->amount = amount;
    }
    string getname()
    {
        return name;
    }
    int getmoney()
    {
        return money;
    }
    int getamount()
    {
        return amount;
    }

};