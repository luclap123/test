// 2. Cho mảng nguyên cost. Viết ra các cách gán giá trị 100 cho phần tử thứ 3 của mảng.
#include <iostream>

using namespace std;

int main ()
{
    int a[]={1,2,3,4,5,6,7,8,9,10,11};
    int *p;
    p=&a[3];
    *p=100;
    for (int i=0;i<10; i++)
    cout<<a[i]<<endl;
}