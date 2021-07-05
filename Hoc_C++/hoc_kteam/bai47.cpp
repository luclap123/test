#include <iostream>
using namespace std;

int main ()
{
    int size=5;
    // cấp phát động và khởi tạo mảng
    int *array= new int [size] ;

    int newsize=10;
    // cấp phát động và khởi tạo mảng
    int *newarray= new int [newsize];

    // sao chép phần tử
    for (int i=0; i<size; i++)
    {
        newarray[i]=array[i];
    }
    delete[] array; // xóa mảng hiện tại
    array = newarray; // trỏ sang mảng
    size=newsize; // kích thước mảng

    cout<<array[4]<<endl;

    delete[] array; //thu hồi mảng
    system("pause");
}