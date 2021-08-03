#include <iostream>
using namespace std;

class student 
{
public:
    string name;
    int age;
    int score;

    void information ()
    {
        cout<<"input name : "<< endl;
        cin>>name;
        cout<<"input age : "<< endl;
        cin>>age;
        cout<<"input score : "<< endl;
        cin>>score;
    }

    void display()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<score<<endl;
    }
};

int main ()
{
    student a;
    a.information();
    a.display();
    return 0;
}