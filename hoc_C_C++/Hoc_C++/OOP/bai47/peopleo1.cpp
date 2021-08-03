#include <iostream>
#include <iomanip>
using namespace std;
class Person
{
    protected:
    string code;
    string name;
    public:
    void input();
    void output();
};

void Person::input()
{
    cout<<"input code people : ";cin.ignore();
    getline(cin, code);
    cout<<"input name people : ";
    getline(cin, name);
}

void Person::output()
{
    cout<<"code : "<<code<<endl;
    cout<<"name : "<<name<<endl;
}
