#include <iostream>
using namespace std;

class book 
{
private:
    string namebook;
    int amount;
    double price;
public:
    book (string a, int b, double c)
    {
        namebook=a;
        amount=b;
        price=c;
    }

    void display()
    {
        cout<<"name of book : "<<namebook<<endl;
        cout<<"amount book : "<<amount<<endl;
        cout<<"price book : "<<price<<endl;
    }
};

int main ()
{
    book s1("hai so phan", 20, 10000);
    s1.display();
}