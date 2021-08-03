#include <iostream>
using namespace std;

void input(int **a, int n, int m)
{
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            cout<<"input "<<i<<" "<<j<<" :";
            cin>>a[i][j];
        }
    }
}

void output(int **a, int n, int m)
{
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <m; j++)
        {
           
            cout<<a[i][j]<< " ";
        }
        cout<<endl;
    }
}

void sum(int **a, int n, int m)
{
    
   for (int i = 0; i < n; i++) 
   {
		int sum = 0;
		for (int j = 0; j < m; j++) 
        {
			sum += a[i][j];
		}
		cout << sum << endl;
    }
}

int main ()
{
    int n,m;
    int **a;
    cout<<"input row : ";
    cin>>n;
    cout<<"input col : ";
    cin>>m;

    a=new int*[n];
    for (int i=0; i<n; i++)
    {
        a[i]=new int [m];
    }

    input(a,n,m);
    output(a,n,m);
    sum(a,n,m);

    for (int i=0; i<n; i++)
    {
        delete []a[i];
    }
    delete []a;
}