#include "information.cpp"
#include <string>
using namespace std;
class Property
{
    public:
    string name_property;
    int amount;
    string status;
    Property *x;
    int n;

    void input()
    {
        cout<<"number : ";
        cin>>n;
        x = new Property [n];
        for (int i = 0; i < n; i++)
        {
            cout<<"number of : "<<i+1<<endl;
            cout<<"input name property : ";cin.ignore();
            getline(cin,x[i].name_property);
            cout<<"input amount : ";
            cin>>x[i].amount;
            cout<<"input status : ";cin.ignore();
            getline(cin, x[i].status);
        }
    }
    void output()
    {
        for (int i = 0; i < n; i++)
        {
            cout<<"name property : "<<x[i].name_property<<endl;
            cout<<"amount : "<<x[i].amount<<endl;
            cout<<"status : "<<x[i].status<<endl;
        }
        cout<<"sum of property : "<<amount<<endl;
        int sum=0;
        for (int i = 0; i < n; i++)
        sum +=x[i].amount;
        cout<<"sum all : "<<sum << endl;
    }


    // private:
    
    // public:
    // Property(string name_property, int amount, string status)
    // {
    //     this->name_property = name_property;
    //     this->amount = amount;
    //     this->status = status;
    // }

    // void setnameproperty(string name)
    // {
    //     this->name_property = name_property;
    // }
    // string getnameproperty()
    // {
    //     return name_property;
    // }

    // void setamount(int amount)
    // {
    //     this->amount = amount;
    // }
    // int getamount()
    // {
    //     return amount;
    // }

    // void setstatus(string status)
    // {
    //     this->status = status;
    // }
    // string getstatus()
    // {
    //     return status;
    // }

    // void display()
    // {
    //     cout<<"sum property : "<<amount<<endl;

    // }
};