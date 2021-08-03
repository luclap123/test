// Hãy khai báo biến kí tự ch và con trỏ kiểu kí tự pc trỏ vào biến ch.
//  Viết ra các cách gán giá trị ‘A’ cho biến ch.
#include <iostream>
using namespace std;

int main ()
{
    char ch;
    char *pc;
    pc=&ch;
    cout<<*pc<<endl;
    *pc='a';
    cout<<ch<<endl;

    ch='a';
    cout<<*pc;
    
}