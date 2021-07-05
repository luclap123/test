#include <iostream>
#include <string>
using namespace std;

class student 
{
    public:
    string code;
    string name;
    int age;
    double score;

    void input()
    {
        cout<<"input code student : ";
        cin>>code;
        cout<<"input name student : ";cin.ignore();
        getline(cin,name);
        cout<<"input age student : ";
        cin>>age;
        cout<<"input score student :";
        cin>>score;
    }

    void output()
    {
        cout<<code<<endl;
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<score<<endl;
    }
};

int main ()
{
    student s;
    s.input();
    s.output();
    return 0;
}