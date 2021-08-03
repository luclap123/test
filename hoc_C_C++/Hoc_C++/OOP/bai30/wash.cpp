#include "puissance.cpp"
using namespace std;
class Wash : public Electronic
{
    public:
    int capacity2;
    string type;

    Wash (int a, int b, int c, string d);
    // {
    //     this->capacity2 = capacity2;
    //     this->type = type;
    // }
    void output();
};

Wash::Wash(int a, int b, int c, string d):Electronic(int a, int b)
{
    capacity2 =c;
}

void Wash::output()
{
    cout<<"wattage : "<<wattage<<endl;
    cout<<"voltage : "<<voltage<<endl;
    cout<<"capacity : "<<capacity2<<endl;
    cout<<"type : "<<type<<endl;
}