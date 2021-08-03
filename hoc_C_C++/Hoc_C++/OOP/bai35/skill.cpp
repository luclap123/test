#include <iostream>
using namespace std;
class Skill 
{
    public:
    float *a;
    int n;

    friend istream& operator>>(istream&x, Skill &y);
    friend ostream& operator<<(ostream&x, Skill y);
    Skill operator++ ();
    Skill operator-- ();
};

istream& operator>>(istream&x, Skill &y)
{
    cout<<"x = "; x>>y.n;
    y.a = new float [y.n];
    for (int i=0; i<y.n; i++)
    {
        cout<<"input a["<<i<<"] : ";
        cin>>y.a[i];
    }
    return x;
}

ostream& operator<<(ostream&x, Skill y)
{
    for (int i=0; i<y.n;i++)
    {
        x<<y.a[i]<<endl;
    }
    return x;
}

Skill Skill::operator++ ()
{
    float tg;
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (a[i]>a[j])
            {
                tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
        }
    }
    return *this;
}

Skill Skill::operator--()
{
        float tg;
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (a[i]<a[j])
            {
                tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
        }
    }
    return *this;
}