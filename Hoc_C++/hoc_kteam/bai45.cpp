#include <iostream>

using namespace std;

// void change (int *a)
// {
//     cout<<a<<endl;
//     cout<<*a<<endl;
// }

// int main ()
// {
//     int value=10;
//     int *a=&value;

//     change(a);
//     cout<<a<<endl;
//     cout<<a+1<<endl;
//     cout<<a+2<<endl;
// }
int main ()
{
    const  int length=5;
    int array[length]={10,4,2,6,8};
    for (int *a=array; a<array+length; a++)
    {
        cout<<*a<<endl;
    }
}