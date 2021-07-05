#include <iostream>
using namespace std;
class Animal 
{
    public:
    virtual void display()
    {
        cout<<"the Animals"<<endl;
    }
};
class Cat : public Animal
{
    public:
    void display()
    {
        cout<<"the cats"<<endl;
    }
};

class Dog : public Animal
{
    public:
    void display()
    {
        cout<<"the dogs"<<endl;
    }
};

int main ()
{
    Cat a;
    Animal *b=&a;
    b->display();
    Dog h;
    Animal *c=&h;
    c->display();
}
