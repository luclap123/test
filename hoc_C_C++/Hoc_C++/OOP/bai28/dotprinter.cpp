#include "printer.cpp"
#include <string>
using namespace std;
class dot : public Print
{
    public:
    int amount_sewing;

    void input();
    void output();
};

void dot::input()
{
    cout<<"input weight : ";
    cin>>weight;
    cout<<"input name: "; cin.ignore();
    getline(cin,brand);
    cout<<"input year produce : "; 
    cin>>year_produce;
    cout<<"input speed : ";
    cin>>speed;
    cout<<"input amount sewing : ";
    cin>>amount_sewing;
}

void dot::output()
{
    cout<<"weight : "<<weight<<endl;
    cout<<"brand : "<<brand<<endl;
    cout<<"year produce : "<<year_produce<<endl;
    cout<<"speed : "<<speed<<endl;
    cout<<"amount sewing : "<<amount_sewing<<endl;
}