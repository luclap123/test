#include <iostream>
using namespace std;

class Student 
{
    private :
    string name;
    int age;
    public :
    static int get;
    Student (string name, int age)
    {
        this->name = name;
        this->age = age;
        get++; 
    }

};

    int Student::get=0;
int main ()
{
    Student s1("lap vo",18);
    Student s2("gao o",18);
    Student s3("mm",2);
    cout<<s1.get << endl;

}