#include <iostream>
#include <string>
using namespace std;
class Datesx
{
    public:
    string namesx;
    string address;

    void input();
    void output();
};

void Datesx::input()
{
    cout<<"input name product : ";
    cin>>namesx;
    cout<<"input address : ";
    cin>>address;
}

void Datesx::output()
{
    cout<<"name product : "<<namesx<<endl;
    cout<<"address : "<<address<<endl;
}