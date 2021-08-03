#include "gender.cpp"
using namespace std;
class Girl : public Gender
{
    public:
    void speak()
    {
        cout<<"hi guys"<<endl;
    }
};