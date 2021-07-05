#include <iostream>
#include <conio.h>

using namespace std;

struct sinhvien 
{
    char name[100];
    int age;
    int mark;
    int ID;
};

void input(sinhvien &a)
{
    for (int i = 0; i <n; i++)
    {
        cout<<"input name : ";
        cin.get(a.name,99);
        cout<<"input age : ";
        cin>>a.age;
        cout<<"input mark : ";
        cin>>a.mark;
        cout<<"input ID : ";
        cin>>a.ID;
    }
    
}

void output(sinhvien &a)
{
    cout<<"========info==========\n";
    cout<<"name : "<<a.name<<endl;
    cout<<"age: "<<a.age<<endl;
    cout<<"mark: "<<a.mark<<endl;
    cout<<"ID : "<<a.ID<<endl;
    cout<<"======================\n";
}

int main ()
{
    sinhvien a;
    input(a);
    output(a);
}