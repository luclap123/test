#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
    int number_book_find=0;

using namespace std;
struct product 
{
    int code;
    string name;
    int year;
};

void input(product a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"input "<<i+1<<" :"<<endl;
        cout<<"input code: ";
        cin>>a[i].code;
        cout<<"input name: ";cin.ignore();
        getline(cin, a[i].name);
        cout<<"input price: ";
        cin>>a[i].year;
    }
}

void output (product a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].code<<setw(5)<<a[i].name<<setw(5)<<a[i].year<<endl;
    }
}

product *findyear(product a[], int n, int findyear) 
{
    number_book_find=0;
    product list[n];
    for (int i = 0; i < n; i++)
    {
        product b=a[i];
        if (b.year==findyear)
        {
            list[number_book_find]=b;
            number_book_find++;
        }
    }
    return list;
}

int main ()
{
    product a[100];
    int n;
    cout<<"input number n : ";
    cin>>n;
    input(a,n);
    output(a,n);
    int find_year;
    cout<<"input year need to find : ";
    cin>>find_year;
    product *listfind = findyear(a,n,find_year);
    if (number_book_find ==0)
    {
        cout<<"can not find any thing";
    }
    else
    {
        cout<<"find out : "<<endl;
        output(listfind,number_book_find);

    }
}