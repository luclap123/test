#include "datesx.cpp"
using namespace std;
class Goods : public Datesx
{
    public:
    string name_goods;
    int price;
    Datesx x;

    void input();
    void output();
};

void Goods::input()
{
    cout<<"input name goods : ";
    cin>>name_goods;
    cout<<"input price : ";
    cin>>price;
    x.input();
}

void Goods::output()
{
    cout<<"name : "<<name_goods<<endl;
    cout<<"price : "<<price<<endl;
    x.output();
}