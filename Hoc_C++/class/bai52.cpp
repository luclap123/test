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
        // setname(na);
        // setaddress(ad);
        // setphone(ph);
        cout<<"\ngood night";
    }       
    char *getname()
    {
        return name;
    }
    char *getaddress()
    {
        return address;
    }
    char *getphone()
    {
        return phone;
    }
    friend void printname(school n);
  
};

void printname(school n)
{
    cout<<"\nluc van lap";
}

int main ()
{
    char na[40],  ad[40],  ph[40];
    strcpy(na, "luc van lap ");
    strcpy(ad, "ha noi");
    strcpy(ph, "0012039839");
    school n(na,ad,ph);
    printname(n);
}