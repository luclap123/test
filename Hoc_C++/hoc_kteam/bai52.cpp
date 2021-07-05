#include <iostream>
#include <vector>
using namespace std;

void print(const vector<int> &stack)
{
    for (const auto &a : stack)
    cout<<a<<endl;
    cout<<"(cap "<<stack.capacity()<<"lenght"<<stack.size()<<")\n";
}

int main ()
{
    vector<int> stack;
    stack.push_back(5);
    print(stack);

}