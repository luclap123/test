#include <iostream>

using namespace std;
class Person 
{
    private :
    string name;
    string gender;
    public :
    Person (string name, string gender)
    {
        this->name = name;
        this->gender = gender;
    }
    void setname (string name)
    {
        this->name = name;
    }
    string getname ()
    {
        return name;
    }
    void setgender (string gender)
    {
        this->gender = gender;
    }
    string getgender ()
    {
        return gender;
    }
    void display ()
    {
        cout<<"name : "<<name<<endl;
        cout<<"gender : "<<gender<<endl;
    }
};