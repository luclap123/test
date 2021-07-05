#include <iostream>
#include <typeinfo>

using namespace std;

// {
//     int array [5]={10,2,3,4};

//     cout<<*array<<endl;

//     int *a=array;
//     cout<<*a<<endl;

//    
// }
// {
//     double array[5]={10,2,3,4};

//     cout<<typeid(array).name()<<endl;
//     cout<<sizeof(array)<<endl;

//     double *a=array;
//     cout<<typeid(a).name()<<endl;
//     cout<<sizeof(a)<<endl;
//      system("pause");

// }

void size (int *array)
{
    cout<<sizeof(array)<<endl;
}

int main ()
{
    int array[5]={10,2,3,4};
    cout<<sizeof(array)<<endl;

    size(array);
}