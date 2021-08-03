#include "producter.cpp"
using namespace std;
class Loads 
{
    public:
    int id_load;
    string name_load;
    int price;
    int weight;
    Product a;
    
    void input();
    void output();
};

void Loads::input()
{
    cout<<"input id load : ";
    cin>>id_load;
    cout<<"input name load : ";
    cin>>name_load;
    cout<<"input price load : ";
    cin>>price;
    cout<<"input weight load : ";
    cin>>weight;
    cout<<"input id product : ";
    cin>>a.id_product;
    cout<<"input name product : ";
    cin>>a.name_product;
    cout<<"input dc product : ";
    cin>>a.dc_product;
}

void Loads::output()
{
    cout<<"id load : "<<id_load<<endl;
    cout<<"name load : "<<name_load<<endl;
    cout<<price<<endl;
    cout<<weight<<endl;
    cout<<a.id_product<<endl;
    cout<<a.name_product<<endl;
    cout<<a.dc_product<<endl;
}