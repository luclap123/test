#include "vehicle.cpp"
using namespace std;
class Motor : public Vehicle
{
    public:
    int cubi_meters;

    void input();
    void output();
};

void Motor::input()
{
    Vehicle::input();
    cout<<"input cubi meter : ";
    cin>>cubi_meters;
}

void Motor::output()
{
    Vehicle::output();
    cout<<"cubi meter : "<<cubi_meters<<endl;
}