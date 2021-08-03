#include <iostream>
using namespace std;
class File
{
    public:
    virtual void open()
    {
        cout<<"open file "<<endl;
    }
};
class folder :public File
{
    public:
    void open()
    {
        cout<<"delete file"<<endl;
    }
    void sound()
    {
        cout<<"very good"<<endl;
    }
};

int main ()
{
    File file;
    folder *a=(folder*)&file;
    // a->display();
    a->sound();
    a->open();
}