#include <iostream>
#include <string>
using namespace std;

struct student
{
    string name;
    int age;
    void display()
    {
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
    }
};

int main ()
{
    int n;
    cout<<"input amount student : ";
    cin>>n;
    student *a=new student[100];
    for (int i=0;i <n; i++)
    {
        cout<<"input name : ";cin.ignore();getline(cin,a[i].name);
        cout<<"input age : ";cin>>a[i].age;
    }

    for (int i=0; i < n; i++)
    {
        a[i].display();
    }
    delete [] a;
}