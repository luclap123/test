#include <iostream>
using namespace std;

void change(int *&arr, int n)
{
    delete[] arr;
    arr=new int[n];
}

int main ()
{
    int *arr;
    // int n;
    arr= new int [10];
    change(arr,1000);
    for (int i = 0; i <1000; i++)
    {
       arr[i]=i;
    }
    for (int i = 0; i <1000; i++)
    {
       cout<<arr[i]<<" ";
    }
    delete[] arr;
    return 0;
}