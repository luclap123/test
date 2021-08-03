#include "school1.cpp"
#include "ban.cpp"
#include "khoa.cpp"
using namespace std;
class University : public School
{
    public:
    Ban *x;
    int n;
    Khoa *y;
    int m;

    void input ();
    void output();

};

void University :: input()
{
    School :: input();
    cout<<"input number : ";
    cin>>n;
    x = new Ban [n];
    for (int i = 0; i < n;i++)
    {
        cout<<"number : "<<i+1<<endl;
        cout<<"input code ban : ";
        cin>>x[i].ma_ban;
        cout<<"inpupt name ban : ";cin.ignore();
        getline(cin,x[i].name_ban);
        cout<<"input date ban : ";
        cin>>x[i].date_ban;
    }
    cout<<"input number : ";
    cin>>m;
    y = new Khoa [m];
    for (int i = 0; i < m;i++)
    {
        cout<<"number : "<<i+1<<endl;
        cout<<"input science code : ";
        cin>>y[i].science_code;
        cout<<"input science name : ";cin.ignore();getline(cin,y[i].science_name);
        
        cout<<"input dean : ";cin>>y[i].dean;
        
    }
}


void University::output()
{
    School::output();
    for (int i = 0; i < n;i++)
    {
        cout<<"number : "<<i+1<<endl;
        cout<<"ma ban : "<<x[i].ma_ban<<endl;
        cout<<"name ban : "<<x[i].name_ban<<endl;
        cout<<"date ban : "<<x[i].date_ban<<endl;
    }
    for (int i = 0; i < m;i++)
    {
        cout<<"number : "<<i+1<<endl;
        cout<<"science code : "<<y[i].science_code<<endl;
        cout<<"science name : "<<y[i].science_name<<endl;
        cout<<"dean : "<<y[i].dean<<endl;
    }
}
