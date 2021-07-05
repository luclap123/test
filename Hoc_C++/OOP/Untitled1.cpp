#include <iostream>
using namespace std;
class File
{
    public:
    int x=10;
    virtual void open()
    {
        cout<<"x = "<<x<<endl;
    }
};
class Folder : public File
{
    public:
    int x=100;
    void open()
    {
        cout<<"x = "<<x<<endl;
    }
};
int main ()
{
    File *file=new Folder();
    cout<<file->x<<endl;
    file->open();
}
