#include <iostream>
using namespace std;
class students 
{
    public:
    int id_students;
    string name_students;
    double math;
    double geography;
    double chemistry;

    void input();
    friend void sort(students a[], int n);
    void output();
};

void students::input()
{
    cout<<"input id students : ";
    cin>>id_students;
    cout<<"input name students : ";
    cin>>name_students;
    cout<<"input math students : ";
    cin>>math;
    cout<<"input geography students : ";
    cin>>geography;
    cout<<"input chemistry students : ";
    cin>>chemistry;
}

void sort (students a[], int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        if ((a[i].math + a[i].geography + a[i].chemistry) > (a[j].math + a[j].geography + a[j].chemistry))
        {
            students tg;
            tg=a[i];
            a[i]=a[j];
            a[j]=tg;
        }
    }
}

void students::output()
{
    cout<<"id students : "<<id_students<<endl;
    cout<<"name students : "<<name_students<<endl;
    cout<<"math students : "<<math<<endl;
    cout<<"geography students : "<<geography<<endl;
    cout<<"chemistry students : "<<chemistry<<endl;
    cout<<"sum socre : "<<math+geography+chemistry<<endl;
}