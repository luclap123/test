#include <iostream>
#include <cstring>

using namespace std;

class check 
{
    char name[100];
    public:
    void setname (char n[])
    {
        strcpy (name,n);
    }
    char *getName()
    {
        return name;
    }
};

int main ()
{
    check n1;
    cout<<"\n input name : ";
    char name[100];
    cin.getline(name,100);
    n1.setname (name);

    cout<<"\nname : ";
    cout<<n1.getName();
}