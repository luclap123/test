#include <iostream>
using namespace std;
class Base 
{
    public:
    virtual ~Base ()
    {
        cout<<"Base's destructor"<<endl;
    }
};
class derived :public Base
{
    ~derived()
    {
        cout<<"derived's destructor"<<endl;
    }
};
int main ()
{
    Base *d= new derived();
    delete d;
    return 0;
}