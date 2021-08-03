#include "bai28.cpp"
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    Date a(1,1,1000);
    cout<<"day : "<<a.getday()<<endl;
    cout<<"month : "<<a.getmonth()<<endl;
    cout<<"year : "<<a.getyear()<<endl;
    a.display();
}
