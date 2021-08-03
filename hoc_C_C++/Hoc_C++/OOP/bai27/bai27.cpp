#include "person1.cpp"
#include "bracnh.cpp"
using namespace std;
int main ()
{
    Branch *a;
    int n;
    cout<<"input number : ";
    cin>>n;
    a=new Branch [n];
    for (int i=0; i<n; i++)
    {
        a[i].input();
    }
    print(a,n);
}