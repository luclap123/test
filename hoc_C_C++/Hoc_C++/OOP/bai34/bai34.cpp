#include "matrix.cpp"
using namespace std;
int main ()
{
    Matrix a,b;
    cout<<"input matrix a : "<<endl;
    cin>>a;
    cout<<"input matrix b : "<<endl;
    cin>>b;
    a=-a;
    b=-b;
    cout<<"matrix a chancing sign : "<<endl;
    cout<<a;
    cout<<"matrix b chancing sign : "<<endl;
    cout<<b;
    Matrix T=a+b;
    Matrix H=a-b;
    cout<<"sum of matrix : "<<T<<endl;
    cout<<"subtract of matrix : "<<H<<endl;
    return 0;
}