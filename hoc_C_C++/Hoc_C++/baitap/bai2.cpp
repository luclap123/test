#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;
struct product 
{
    int code;
    string name;
    int price;
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
        cin>>a[i].price;
    }
}

void output (product a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].code<<setw(5)<<a[i].name<<setw(5)<<a[i].price<<endl;
    }
}

product * reseach (product a[], int n, int find)
{
    int left=0, right=n-1;
    int mid=0;
    do 
    {
        mid = (left+right)/2;
        product &sp = a[mid];
        if (find == sp.price)
        {
            return &sp;
        }
        else if (find < sp.price)
            right = mid -1;
        else
            left = mid +1;
    }while (left<=right);
    return NULL;
}
int main ()
{
    product a[100];
    int n;
    cout<<"input number n : ";
    cin>>n;
    input(a,n);
    output(a,n);
    int find;
    cout<<"input number find : ";
    cin>>find;
    product *search = reseach(a,n,find);
    if (search==NULL)
    {
        cout<<"can not find any thing == "<<find;
    }
    else
    {
        cout<<search->code<<setw(4)<<search->name<<setw(4)<<search->price;
    }
}