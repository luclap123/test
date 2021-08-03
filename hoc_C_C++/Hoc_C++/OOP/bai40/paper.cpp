#include "table.cpp"
using namespace std;
class Paper : public Table
{
    private:
    string MSV;
    string name;
    string level;
    int course;

    public:
    Paper (string MSV, string name, string level, int course)
    {
        this->MSV = MSV;
        this->name = name;
        this->level = level;
        this->course = course;
    }
    void setMSV(string MSV)
    {
        this->MSV = MSV;
    }
    string getMSV()
    {
        return MSV;
    }

    void setname(string name)
    {
        this->name = name;
    }
    string getname()
    {
        return name;
    }

    void setlevel(string level)
    {
        this->level = level;
    }    
    string getlevel()
    {
        return level;
    }

    void setcourse(int course)
    {
        this->course = course;
    }
    int getcourse()
    {
        return course;
    }

};