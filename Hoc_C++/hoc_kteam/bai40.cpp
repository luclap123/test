#include <iostream>
#define MAX 5

using namespace std;

int main ()
{
    int a[]={1,3,4,5,6,7,8,9};
    for (int &item : a)
    {
        cout<<item<<" ";
    }
    cout<<endl;
}
