#include "person1.cpp"
#include <string>
using namespace std;
class Branch : public Person
{
    public:
    string branch;
    int year;

    void input();
    void output();
    friend void print(Branch a[], int n);
};

void Branch::input()
{
    cout<<"input name : "; cin.ignore();
    getline(cin,name);
    
    cout<<"input birth : ";
    cin>>birth;
    cout<<"input address : "; cin.ignore();
    getline(cin,address);
    cout<<"input branch : "; cin.ignore();
    getline(cin,branch);
    cout<<"input year : ";
    cin>>year;
}

void Branch::output()
{
    cout<<"name : "<<name<<endl;
    cout<<"birth : "<<birth<<endl;
    cout<<"address : "<<address<<endl;
    cout<<"branch : "<<branch<<endl;
    cout<<"year : "<<year<<endl;
}

void print(Branch a[], int n)
{
    int Max=0;
    for (int i=0; i<n; i++)
    {
        if (a[i].year>Max)
        Max=a[i].year;
    }
    cout<<"year recently : ";
    for (int i=0; i<n; i++)
    {
        if (a[i].year==Max)
        a[i].output();
    }
}

