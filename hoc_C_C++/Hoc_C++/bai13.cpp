#include <iostream>

using namespace std;
int findmax(int *p, int n) 
{
    int max=p[0];
    for (int i=0; i<n; i++)
    {
        if (p[i]>max)
        max=p[i];
    }
    return max;
}

int main ()
{
    int a[100];
    int n;
    cout<<"input number n : ";
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cout<<"input : ";
        cin>>a[i];
    }

    cout<<"max in array : "<<findmax(a,n);
}