#include <iostream>
using namespace std;
class base 
{
    public:
    virtual void display()
    {
        cout<<"hello world";
    }
    
};
class temp : public base
{
    public:
    void display()
    {
        cout<<"who i am";
    }
};
 
int main ()
{
    temp a;
    base *b=&a;
    b->display();
}