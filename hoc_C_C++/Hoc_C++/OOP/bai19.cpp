#include <iostream>
#include <math.h>
using namespace std;
class math   
{
    public :
    static int maxarray(int a[], int n)
    {
        int max=a[0];
        for (int i=0; i<n; i++)
        {
            if (max<a[i])
            max=a[i];
        }
        return max;
    } 

    static double maxarray(double a[], int n)
    {
        double max=a[0];
        for (int i=0; i<n; i++)
        {
            if (max<a[i])
            max=a[i];
        }
        return max;
    }

    static int minarray(int a[], int n)
    {
        int min=a[0];
        for (int i=0; i<n; i++)
        {
            if (min>a[i])
            min=a[i];
        }    
        return min;
    }

    static double minarray(double a[], int n)
    {
        double min=a[0];
        for (int i=0; i<n; i++)
        {
            if (min>a[i])
            min=a[i];
        }    
        return min;
    }
};

int main() 
{
	int a1[] = { 3, 4, 2 };
	double a2[] = { 1.3, 4.2, 6.7 };

	cout<<math::maxarray(a1,sizeof(a1)/sizeof(int))<< endl;
    cout<<math::maxarray(a2,sizeof(a2)/sizeof(double))<< endl;
    cout<<math::minarray(a1,sizeof(a1)/sizeof(int))<< endl;
    cout<<math::minarray(a2,sizeof(a2)/sizeof(double))<< endl;
	return 0;
}