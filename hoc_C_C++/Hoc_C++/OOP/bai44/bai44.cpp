#include "result.cpp"
using namespace std;
int main ()
{
    int n;
    Result *a;
    cout<<"input number students :";
    cin>>n;
    a=new Result [n];
    for (int i=0; i<n; i++)
    {
        a[i].input();
    }
    for (int i=0; i<n; i++)
    {   
        
        a[i].display();
    }
    delete [] a;
}