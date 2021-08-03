#include "date.cpp"
using namespace std;
class Tivi : public Date
{
    public:
    int size;
    Date date;

    void input();
    void output();
};

void Tivi::input()
{
    cout<<"input size : ";
    cin >> size;
    date.input();
}

void Tivi::output()
{
    cout<<"size : "<<size<<endl;
    date.output();
}

