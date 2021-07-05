#include <iostream>
#include <math.h>

using namespace std;
class math
{
    public:
    string name;
    int age;
    double value;
   

    void input ()
    {
        cout<<"input name : "; 
        cin>>name;
        cout<<"input age : ";
        cin>>age;
        cout<<"input value : ";
        cin>>value;
    }

    int add ()
    {

        return age+value;
    }

    void output ()
    {
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"value : "<<value<<endl;
    }
};

int main ()
{
    math s;
    s.input();
    s.output();
    cout<<s.add();

}