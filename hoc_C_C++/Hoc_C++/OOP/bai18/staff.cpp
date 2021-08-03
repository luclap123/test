#include "date.cpp"
#include <iostream>

using namespace std;
class Staff  
{
    public:
    string name;
    int id;
    Date ns;

    void input()
    {
        cout<<"name : ";
        cin>>name;
        cout<<"id : ";
        cin>>id;
        ns.input();
    }
    void output()
    {
        cout<<"name : "<<name<<endl;
        cout<<"id : "<<id<<endl;
        ns.output();
    }
};

