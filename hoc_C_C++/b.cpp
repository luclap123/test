#include <iostream>
using namespace std;
int tinh(int num){
   int sum = 0, rem;
   if(num==0)
   {
       return 0;
   }
   else
      rem = num % 10;
      sum = (sum*10) + rem;
      tinh(num/10);
      return sum;
}
   

int main ()
{
    // int n=1234;
    // int s=tinh(123);
    int n;
    int s;
    cin>>n;
    s= tinh(n);
    cout<<s;
}