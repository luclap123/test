#include <iostream>
#include <cstring>

using namespace std;

class school
{
    private:
        char *name;
        char *address;
        char *phone;
    public:
    school (char *na, char *ad, char *ph)
    {
        name=na;
        address=ad;
        phone=ph;
        cout<<"\ngood night";
    }       
    char *getName()
    {
        return name;
    }
    char *getAddress()
    {
        return address;
    }
    char *getPhone()
    {
        return phone;
    }
};

int main ()
{
    char na[40],  ad[40],  ph[40];
    strcpy(na, "luc van lap ");
    strcpy(ad, "ha noi");
    strcpy(ph, "0012039839");
    school n(na,ad,ph);
    cout<<endl;
    cout<<n.getName()<<endl;
    cout<<n.getAddress()<<endl;
    cout<<n.getPhone()<<endl;

}