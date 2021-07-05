#include <iostream>

using namespace std;

class school
{
    public:
    char name[40];
    char phone[40];
    char address[40];
    char *getname()
    {
        return name;
    }
    char *getphone()
    {
        return phone;
    }
    char *getaddress();
};

char *school::getaddress()
{
    return address;
}


int main ()
{
    school school1;
    cout<<"\ninput name  : ";
    cin.getline(school1.name,40);
    cout<<"\ninput age : ";
    cin.getline(school1.phone,40);
    cout<<"\ninput address : ";
    cin.getline(school1.address,40);

    cout<<"list information : ";
    cout<<"\n";
    cout<<school1.getname();
    cout<<"\n";
    cout<<school1.getphone();
    cout<<"\n";
    cout<<school1.getaddress();
    return 0;
}