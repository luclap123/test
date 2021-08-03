#pragma once
#include "hang.cpp"
#include <string>
using namespace std;
class Bill: public Hang
{
    public:
    string code;
    int date;
    Hang *x;
    int n;

    void input();
    void output();
};

void Bill::input()
{
    cout<<"input code bill : ";cin.ignore();
    getline(cin, code);
    cout<<"input date : ";
    cin>>date;
    cout<<"number : ";
    cin>>n;
    x= new Hang [n];
    for (int i=0; i<n; i++)
    {
        x[i].input();
    }
}

void Bill::output()
{
    cout<<"code bill : "<<code<<endl;
    cout<<"date : "<<date<<endl;
    for (int i=0; i<n; i++)
    {
        x[i].output();
    }
    float sum=0;
    for (int i=0; i<n; i++)
    {
        sum +=x[i].price * x[i].amount;
    }
    cout<<"sum : "<<sum<<endl;
}