#include <iostream>

using namespace std;

// void  call (int *a)
// {
//     *a=50;
// }

// int main ()
// {
//     int value=10;
//     cout<<value<<endl;
//     call(&value);
//     cout<<value<<endl;
// }

void print(const int *array, int n)
{
    if (!array)
    return;
    for (int i=0; i<n; ++i)
    {
        cout<<array[i]<<endl;
    }
}

int main ()
{
    int array[5]={1,2,3,4,5};
    print(array,5);
    system("pause");
}