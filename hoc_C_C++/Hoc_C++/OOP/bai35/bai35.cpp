#include "skill.cpp"
using namespace std;
int main ()
{
    Skill n;
    cout<<"input n : "<< endl;
    cin>>n;
    cout<<n<<endl;
    n=--n;
    cout<<"reducton : "<< endl;
    cout<<n;
    n=++n;
    cout<<"increase n : "<< endl;
    cout<<n;
}