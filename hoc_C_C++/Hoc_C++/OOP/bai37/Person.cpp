#include <iostream>
#include <cstring>
using namespace std;
class Person 
{
    public:
    string name;
    int age;
    string address;

    void input();
    void output();    
};

void Person::input()
{
    cout<<"input name person : ";cin.ignore();
    getline(cin,name);
    cout<<"input age person: ";
    cin>>age;
    cout<<"input address person: ";cin.ignore();
    getline(cin,address);
}

void Person::output()
{
    cout<<"name person : "<<name<<endl;
    cout<<"age person : "<<age<<endl;
    cout<<"address person : "<<address<<endl;
}