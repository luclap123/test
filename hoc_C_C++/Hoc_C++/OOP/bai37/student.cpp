#include "Person.cpp"
#include "Faculty.cpp"
using namespace std;
class Student : public Person
{
    public:
    Faculty y;
    string level;
    float score;

    void input();
    void output();
};

void Student::input()
{
    Person::input();
    y.input();
    cout<<"input level : ";cin.ignore();
    getline(cin, level);
    cout<<"input score : ";
    cin>>score;
}

void Student::output()
{
    y.output();
    Person::output();
    cout<<"level : "<<level<<endl;
    cout<<"score : "<<score<<endl;
}