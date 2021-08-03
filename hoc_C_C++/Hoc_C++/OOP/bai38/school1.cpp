#include <iostream>
#include <string>
using namespace std;
class School 
{
    public:
    int code_school;
    string name_school;
    string address_school;

    void input();
    void output();
};

void School::input()
{
    cout<<"input code school : ";
    cin>>code_school;
    cout<<"input name school : ";cin.ignore();
    getline(cin, name_school);
    cout<<"input address school : ";cin.ignore();
    getline(cin, address_school);
}

void School::output()
{
    cout<<"code school : "<<code_school<<endl;
    cout<<"name school : "<<name_school<<endl;
    cout<<"address school : "<<address_school<<endl;
}