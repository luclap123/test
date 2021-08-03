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
        setname(na);
        setaddress(ad);
        setphone(ph);
        cout<<"\ngood night";
    }       

    void setname(char *na)
    {
        name=na;
    }
    void setaddress(char *ad)
    {
        address=ad;
    }
    void setphone(char *ph)
    {
        phone=ph;
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

    void display()
    {
        cout<<endl;
        cout<<getname()<<endl;
        cout<<getaddress()<<endl;
        cout<<getphone()<<endl;
    }
};

int main ()
{
    char na[40],  ad[40],  ph[40];
    strcpy(na, "luc van lap ");
    strcpy(ad, "ha noi");
    strcpy(ph, "0012039839");
    school n(na,ad,ph);
    n.display();
    strcpy(na, "con mi ngu");
    n.setname(na);
    n.display();

}