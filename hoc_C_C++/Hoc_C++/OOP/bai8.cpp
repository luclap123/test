#include <iostream>
using namespace std;

class goods 
{
private:
    string code;
    string name;
    double price;
    int amount;
public :
    goods (string code, string name, double price, int amount)
    {
        this->code = code;
        this->name = name;
        this->price = price;
        this->amount = amount;
    }

    void display()
    {
        cout<<code<<" "<<name<<" "<<price<<" "<<amount<<endl;
    }
};

int main ()
{
    goods a("sdaf","con mea",342,5);
    a.display();
    return 0;
}