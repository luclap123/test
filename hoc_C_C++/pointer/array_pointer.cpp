// con trỏ mảng một chiều
#include <iostream>

using namespace std;
//a + i <=> &a[0 + i] ;

//*(a+i) <=> a[i]

void input(int *a, int n)
{
    for (int i = 0; i < n;i++)
    {
        cout<<"input a["<< i<<"] :";
        cin>>*(a+i);
    }
}

void output(int *a, int n)
{
    for (int i = 0; i < n;i++)
    {
        cout<<*(a+i)<<endl;
    }
}

int main ()
{
    int *a=NULL;
    int n=0;

    cout<<"input n :";
    cin>>n;
    a= new int [n]; // xin cấp phát n ô nhớ ở vùng HEAP
    input(a,n);
    output(a,n);
    if (a != NULL)
    {
        delete [] a; // thu hồi n ô nhớ vừa cấp
    }
    system("pause");

}