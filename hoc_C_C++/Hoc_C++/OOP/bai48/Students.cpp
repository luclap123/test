#include <iostream>
#include <string>
using namespace std;
class Student 
{
    protected:
    string last_name;
    string name;
    public:
    void input();
    void output();
};

void Student::input()
{
    cout<<"input last name : ";cin.ignore();
    getline(cin, last_name);
    cout<<"input name : ";
    getline(cin, name);
}

void Student::output()
{
    cout<<"last name : "<<last_name<<endl;
    cout<<"name : "<<name<<endl;
}