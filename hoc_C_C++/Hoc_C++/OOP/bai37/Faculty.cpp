#include "school.cpp"
#include <string>
using namespace std;
class Faculty 
{
    public:
    string name;
    int date;
    School x;

    void input();
    void output();
};

void Faculty::input()
{
    cout<<"input name faculty : ";cin.ignore();
    getline(cin,name);    
    cout<<"input date faculty : ";
    cin>>date;
    cout<<"school";
    cout<<"input name schoool : ";
    cin>>x.name;
    cout<<"input date schoool : ";
    cin>>x.date;
}

void Faculty::output()
{
    cout<<"name Faculty : "<<name<<endl;
    cout<<"date Faculty : "<<date<<endl;
    cout<<"name school : "<<x.name<<endl;
    cout<<"date school : "<<x.date<<endl;
}