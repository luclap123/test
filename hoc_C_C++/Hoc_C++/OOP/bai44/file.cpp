#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class File 
{
    protected:
    string code_students;
    string first_name;
    string last_name;
    public:
    void input();
    void output();
};

void File::input()
{
    cout<<"input code students : ";cin.ignore();
    getline(cin, code_students);
    cout<<"input first name : ";
    getline(cin, first_name);
    cout<<"input last name : ";
    getline(cin, last_name);
}

void File::output()
{
    cout<<setw(2)<<code_students<<setw(6)<<first_name<<setw(10)<<last_name<<endl;
}