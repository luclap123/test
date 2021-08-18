#include <iostream>
using namespace std;

    int Logarit(int n)
{
       if(n<0)
              return -1;
    else
          if(n>=2)
                   return 1+Logarit(n/2);
        else
        return 0;
}

int main ()
{
    int n=4;
    int s=Logarit(n);
    cout<<s;
    return 0;
}