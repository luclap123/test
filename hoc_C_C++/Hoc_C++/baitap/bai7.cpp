#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// cấu trúc nhân viên 
struct employee 
{
    int code;
    string name;
    string address;
    int CBQL;
};

void input(employee a[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<"number of employee : "<<i+1<<endl;
        cout<<"input code employee : ";
        cin>>a[i].code;
        cout<<"input name : ";cin.ignore();
        getline(cin,a[i].name);
        cout<<"input address : ";
        getline (cin,a[i].address);
        cout<<"input CBQ : ";
        cin>>a[i].CBQL;        
    }
}

void output(employee a[], int n)
{
    for (int i=0; i<n; i++) 
    {
        cout<<setw(3)<<a[i].code<<setw(8)<<a[i].name<<setw(10)<<a[i].address<<setw(12)<<a[i].CBQL<<endl;
    }
}

// đếm số lượng nhân viên quản lý
int count(employee a[], int n)
{
    int amount = 0;
    for (int i=0; i<n; i++) 
    {
        if (a[i].CBQL==1)
        amount++;
    }
    return amount;
}

// xuất nhân viên không phải quản lý
void find(employee a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i].CBQL !=1)
        {
            cout<<setw(3)<<a[i].code<<setw(8)<<a[i].name<<setw(10)<<a[i].address<<setw(12)<<a[i].CBQL<<endl;    
        }
    }
}

int main ()
{
    employee a[100];
    int n;
    cout<<"input n : ";
    cin>>n;
    input (a,n);
    output (a,n);
    int mass = count(a,n);
    cout<<"number officer : "<<mass;
    find (a,n);
}