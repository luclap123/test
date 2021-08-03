#include <iostream>
#include <string>

using namespace std;

struct student 
{
    string name;
    int age;
    int score;
};

void input (int n)
{
    cout<<"input amount student : ";
    cin>>n;
    student *a=new student[100];
    for (int i=0; i<n; i++)
    {
        cout<<"input name : "; cin.ignore();getline(cin,a[i].name);
       
        cout<<"input age : ";
        cin>>a[i].age;
        cout<<"input score : ";
        cin>>a[i].score;
    }delete[] a;
}

void max (int n)
{
    student *a=new student[100];
     student s = a[0];
	for (int i = 1; i < n; i++) 
    {
		if (a[i].score > s.score) 
        {
			s = a[i];
		}
	}
    cout<<"name :"<<s.name<<endl;
    cout<<"age : "<<s.age<<endl;
    cout<<"score : "<<s.score<<endl;
    delete[] a;
}

int main ()
{
    int n;
    
    input(n);
    max(n);
    
}