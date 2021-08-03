#include "phone.cpp"
using namespace std;
int main ()
{
    Phone *lap;
    int g;
    cout<<"input number : ";
    cin>>g;
    lap = new Phone [g];
    for (int i=0; i<g; i++)
    {
        lap[i].input();
    }
   
    lap[0].find(lap,g);
    

}