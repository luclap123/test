#include "gender.cpp"
using namespace std;
class Boy : public Gender
{
    public:
    void speak()
    {
        cout<<"Hello babel!"<<endl;
    }
};