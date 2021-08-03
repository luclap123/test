#pragma once
#include <iostream>
#include <string>
using namespace std;
class Sheet 
{
    private :

    string code;
    int date;

    public:
   
    Sheet ()
    {

    }

    Sheet (string code, int date)
    {
        this->code = code;
        this->date = date;
    }

    void setcode (string code)
    {
        this->code = code;
    }
    string getcode()
    {
        return code;
    }

    void setdate (int date)
    {
        this->date = date;
    }
    int getdate()
    {
        return date;
    }

};