#include "printer.cpp"
#include <string>
using namespace std;
class Laser : public Print
{
    public:
    int resolution;

    void input();
    void output();
};

void Laser::input()
{
    cout<<"input weight : ";
    cin>>weight;
    cout<<"input name: "; cin.ignore();
    getline(cin,brand);
    cout<<"input year produce : "; 
    cin>>year_produce;
    cout<<"input speed : ";
    cin>>speed;
    cout<<"input resolution : ";
    cin>>resolution;
}

void Laser::output()
{
    cout<<"weight : "<<weight<<endl;
    cout<<"brand : "<<brand<<endl;
    cout<<"year produce : "<<year_produce<<endl;
    cout<<"speed : "<<speed<<endl;
    cout<<"resolution : "<<resolution<<endl;
}