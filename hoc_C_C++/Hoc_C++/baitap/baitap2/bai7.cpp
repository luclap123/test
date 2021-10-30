#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct Class
{
    int code_class;
    char* name_class;
};

struct Student 
{
    int code_sv;
    char* name_sv;
};

Class *input_class(int a[], int n)
{
}

Student *input_sv(int a[], int n)
{
    Student s;
    for (int i = 0; i<n; i++)
    {
        cout<<"input code class : ";
        cin>>s.code_sv;
        cout<<"input name class : ";
        cin.ignore();
        gets(s.name_sv);
    }
}

int main ()
{
    int n;
    int a[100];
    cout<<"input number : ";
    cin>>n;

}