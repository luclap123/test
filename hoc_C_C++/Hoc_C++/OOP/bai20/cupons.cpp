#include "loads.cpp"
using namespace std;
class Cupons 
{
    public:
    int code;
    Loads *a;
    int n;
    void input();
    void output();
};

void Cupons::input()
{
    cout<<"input number loads : ";
    cin>>n;
    cout<<"input code : ";
    cin>>code;
    a= new Loads[n];
    for (int i=0; i<n; i++)
    {
        
        a[i].input();
    }
}

void Cupons::output()
{
    cout<<"code : "<<code<<endl;
    for (int i=0; i<n; i++)
    {
        
        a[i].output();
    }
}