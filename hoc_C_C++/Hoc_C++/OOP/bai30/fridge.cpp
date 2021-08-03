#include "puissance.cpp"
using namespace std;
class Fridge : public Electronic
{
    public:
    int capacity;
    int number_compartments;

    Fridge(int capacity, int number_compartments);
    // {
    //     this->capacity = capacity;
    //     this->number_compartments = number_compartments;
    // }

    void output();
};

void Fridge::output()
{
    cout<<"wattage : "<<wattage<<endl;
    cout<<"voltage : "<<voltage<<endl;
    cout<<"capacity : "<<capacity<<endl;
    cout<<"number_compartments : "<<number_compartments<<endl;
}