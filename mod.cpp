#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    int n;
    cout<<"nhap vao n : ";
    cin>>n;
    int s=1;
    for(int i=0; i<n; i++)
    {
            s *=n;
    }
    cout<<s;
}