#include "manager.cpp"
#include "computer.cpp"
using namespace std;
class Room
{
    public:
    int id_room;
    string name_room;
    int acreage_room;
    Manager x;
    Computer *a;
    int n;

    void input();
    void output();
};

void Room::input()
{
    cout<<"input id room : ";
    cin>>id_room;
    cout<<"input name room : ";
    cin>>name_room;
    cout<<"input acreage room : ";
    cin>>acreage_room;
    x.input();
    cout<<"input number computer : ";
    cin>>n;
    a=new Computer[n];
    for (int i=0; i<n; i++)
    {
        a[i].input();
    }
}

void Room::output()
{
    cout<<"id room : "<<id_room<<endl;
    cout<<"name room : "<<name_room<<endl;
    cout<<"acreage room :"<<acreage_room<<endl;
    x.output();
    for (int i=0; i<n; i++)
    {
        a[i].output();
    }
}