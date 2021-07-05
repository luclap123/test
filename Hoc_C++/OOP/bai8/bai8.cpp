#include "gender.cpp"
#include "girl.cpp"
#include "boy.cpp"
#include "two.cpp"
using namespace std;
int main ()
{
    Gender *gender[4];
    gender[0] =new Gender();
    gender[1] =new Girl();
    gender[2] =new Boy();
    gender[3] =new two();
    for (int i = 0; i <4; i++)
    {
        gender[i]->speak();
    }
    return 0;
}