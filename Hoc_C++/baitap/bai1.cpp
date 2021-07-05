#include <iostream>
#include <string>

using namespace std;
int main ()
{
    
    char *hoten[30];
    int n;
    cout<<"nhap so luong sinh vien : ";
    cin>>n;
    cin.ignore();
    for (int i=0; i<n; i++)
    {
        hoten[i]=new char [40];
        cout<<"nhap ten sinh vien : ";
        cin.getline(hoten[i],29);
    }
    cout<<"ho ten cac sinh vien : "<<endl;
    for (int i=0; i<n; i++)
    cout<<&hoten[i]<<endl;
}