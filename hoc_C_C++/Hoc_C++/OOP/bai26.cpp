#include <iostream>
using namespace std;

class Student 
{
    private:
    int id;
    string name;
    int age;
    string address;
    int score;
    public:
    Student ()
    {

    }
    Student (int id, string name, int age, string address, int score)
    {
        this->id = id;
        this->name = name;
        this->age = age;
        this->address = address;
        this->setscore(score);
    }

    void setid (int id)
    {
        this->id = id;
    }
    int getid ()
    {
        return id;
    }
    void setname (string name)
    {
        this->name = name;
    }
    string getname ()
    {
        return name; 
    }
    void setage (int age)
    {
        this ->age = age;
    }
    int getage ()
    {
        return age;
    }

    void setaddress (string address)
    {
        this->address = address;
    }
    string getaddress ()
    {
        return address;
    }

    void setscore(int score)
    {
        if (score<0) 
        {
            this->score=0;
        }
        else if (score >10)
        {
            this->score=10;
        }
        else
        {
            this->score=score;
        }
    }

    int getscore()
    {
        return score;
    }
};