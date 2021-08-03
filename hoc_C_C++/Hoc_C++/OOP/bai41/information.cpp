#pragma once
#include "sheet.cpp"
#include <string>
using namespace std;
class Information : public Sheet
{
    private:
    string name_staff;
    string position;
    string room;
    string code_room;
    string name_manager;
    public:
    Information (string code, int date, string name_staff, string position, string room, string code_room, string name_manager) : Sheet (code, date)
    {
        this->name_staff = name_staff;
        this->position = position;
        this->room = room;
        this->code_room = code_room;
        this->name_manager = name_manager;
    }

    void setnamestaff (string name_staff)
    {
        this->name_staff = name_staff;
    }
    string getnamestaff()
    {
        return name_staff;
    }

    void setposition (string position)
    {
        this->position = position;
    }
    string getposition()
    {
        return position;
    }

    void setroom(string room)
    {
        this->room = room;
    }
    string getroom()
    {
        return room;
    }

    void setcoderoom(string code_room)
    {
        this->code_room = code_room;
    }
    string getcoderoom()
    {
        return code_room;
    }

    void setnamemanager(string name_manager)
    {
        this->name_manager = name_manager;
    }
    string getnamemanager()
    {
        return name_manager;
    }

};