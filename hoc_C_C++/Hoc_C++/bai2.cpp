#include <iostream>
#include <string>
using namespace std;

struct student
{
  string name;
  int age;
}a;

int main ()
{
  cout<<"input name : ";getline(cin,a.name);
  cin.ignore();
  cout<<"input age :";
  cin>>a.age;

  cout<<a.name;
  cout<<a.age;
  return 0;
}