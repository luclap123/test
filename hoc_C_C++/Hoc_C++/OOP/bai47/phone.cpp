#include "peopleo1.cpp"
using namespace std;
class Phone : public Person 
{
    protected:
    string number_phone;
    string address;
    public:
    void input();
    void output();
    int find(Phone *a, int n);
};

void Phone::input()
{
    Person::input();
    cout<<"input number phone : ";cin.ignore();
    getline(cin, number_phone);
    cout<<"input address : ";
    getline(cin, address);
}

void Phone::output()
{
    Person::output();
    cout<<"number phone : "<<number_phone<<endl;
    cout<<"address : "<<address<<endl;
}

int Phone::find(Phone *a, int n)
{
    string phone;
    int check=0;
    int count=0;
    cout<<"input number find : ";cin.ignore();
    getline(cin, phone);
    for (int i=0; i<n; i++)
    {
        if (a[i].number_phone==phone)
        {
            check=1;
            count=i;
        }
    }
    if (check==1)
    {
        a[count].output();
    }
    else
    cout<<"no find something";
}