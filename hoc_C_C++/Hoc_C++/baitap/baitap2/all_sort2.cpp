#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
struct employee
{
    int code;
    string name;
    int age;
};

employee *input()
{
    employee *e = new employee;
    cout<<"input code employee : ";
    cin>>e->code;
    cin.ignore();
    cout<<"input name employee : ";
    getline(cin,e->name);
    cout<<"input age employee : ";
    cin>>e->age;
    return e;
}

void output(employee *e)
{
    cout<<e->code<<"\t"<<e->name<<"\t"<<e->age<<endl;
}

void list_input(employee **&a, int n)
{
    a = new employee*[n];
    for (int i=0; i<n; i++)
    {
        *(a+i) = input();
    }
}

void list_output(employee **a, int n)
{
    for (int i=0; i<n; i++)
    {
        employee *e = *(a+i);
        output(e);
    }
}

// sort increase by age
void interchange(employee **&a, int n)
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            employee *ej = *(a+j);
            employee *ei = *(a+i);
            if (ei->age > ej->age)
            {
                int code = ei->code;
                string name = ei->name;
                int age = ei->age;

                ei->code = ej->code;
                ei->name = ej->name;
                ei->age = ej->age;

                ej->code = code;
                ej->name = name;
                ej->age = age;
            }
        }
    }
}

// void quick(employee **&a, int left, int right)
// {
//     if (left >= right) return;
//     employee *pivot = *(a+((left+right)/2));
//     int i = left;
//     int j = right;
//     do
//     {
//         while (stricmp((*(a+i))->name, pivot->name)<0) i++;
//     }while (i<j);

// }

void bubble (employee **&a, int n)
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=n-1; j>i; j--)
        {
            employee *ej = *(a+j);
            employee *ei = *(a+i);
            if (ei->name > ej->name)
            {
                int code = ei->code;
                string name = ei->name;
                int age = ei->age;

                ei->code = ej->code;
                ei->name = ej->name;
                ei->age = ej->age;

                ej->code = code;
                ej->name = name;
                ej->age = age;
            }
        }
    }
}

int main ()
{
    int n;
    cout<<"input number : ";
    cin>>n;
    employee **a;
    list_input(a,n);
    cout<<"list"<<endl;
    list_output(a,n);
    interchange(a, n);
    cout<<"after sort interchange: "<<endl;
    list_output(a,n);
    bubble(a,n);
    cout<<"after sort bubble: "<<endl;
    list_output(a,n);
}
