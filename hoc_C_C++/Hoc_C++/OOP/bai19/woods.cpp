#include "product.cpp"
using namespace std;
class Woods 
{
    public:
    int idwoods;
    string namewoods;
    Product a;
    void input();
    void output();

};

void Woods::input()
{
    cout<<"input idwoods :";
    cin>>idwoods;
    cout<<"input namewoods :";
    cin>>namewoods;
    a.input();
}

void Woods::output()
{
    cout<<"id woods : "<<idwoods<<endl;
    cout<<"namewoods : "<<namewoods<<endl;
    a.output();
}
