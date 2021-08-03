#include "vehicle.cpp"
using namespace std;
class Oto : public Vehicle
{
    public:
    int number_seats;
    int capacity;

    void input();
    void output();
};

void Oto::input()
{
    Vehicle::input();
    cout<<"input Number of seats : ";
    cin>>number_seats;
    cout<<"input capacity : ";
    cin>>capacity;
}

void Oto::output()
{
    Vehicle::output();
    cout<<"Number of seat : "<<number_seats<<endl;
    cout<<"capacity : "<<capacity<<endl;
}