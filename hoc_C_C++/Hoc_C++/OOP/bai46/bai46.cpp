#include<iostream>
#include<string.h>
using namespace std;
class St
{
	char s[100];
	public:
		St()
		{
			*s='\0';
		}
		St(char *p)
		{
			strcpy(s,p);
		}
		char *get()
		{
			return s;
        
			strcat(s," ");
			strcat(s,s1.s);
			return *this;
		
		}
		
		St operator =(St s1)
		{
			strcpy(s,s1.s);
			return *this;
		}
		int operator <(St s1)
		{
			return strcmp(s,s1.s)<0;
		}
		int operator >(St s1)
		{
			return strcmp(s,s1.s)>0;
		}
		int operator ==(St s1)
		{
			return strcmp(s,s1.s)==0;
		}
        int operator +(St s1)
        {
            return strcmp(s,s1.s)+0;
        }
		
		
};
int main()
{   
    St o1("anh"), o2("yeu em"),o3;
    cout<<o1.get()<<" "<<o2.get();
    // o3=o1+o2;
    // cout<<endl<<o3.get();
	return 1;
}
