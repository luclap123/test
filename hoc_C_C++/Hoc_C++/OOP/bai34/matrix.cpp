#include <iostream>
using namespace std;
class Matrix 
{
    public:
    int m,n;
    double **a;

    friend istream& operator>>(istream&x, Matrix&y);
    friend ostream& operator<<(ostream&x, Matrix y);
    Matrix operator+(Matrix y);
    Matrix operator-(Matrix y);
    Matrix operator-();
};

istream& operator>>(istream&x, Matrix&y)
{
    cout<<"input n : "; x>>y.n;
    cout<<"input m : "; x>>y.m;    
    y.a = new double*[y.n];
    for (int i=0; i<y.n; i++)
    y.a[i]= new double[y.m];
    for (int i=0; i<y.n; i++)
    {
        for (int j=0; j<y.m; j++)
        {
            cout<<"input a["<<i<<"]"<<"["<<j<<"] : ";
            cin>>y.a[i][j];
        }
    }
    return x;
}

ostream& operator<<(ostream&x, Matrix y)
{
    for (int i=0; i<y.n; i++)
    {
        for (int j=0; j<y.m; j++)
        {
            x<<y.a[i][j]<<" ";
        }
        x<<endl;
    }
}

Matrix Matrix::operator+(Matrix y)
{
    Matrix tg;
    if (n==y.n && m==y.m)
    {
        tg.n=n;
        tg.m=m;
        tg.a= new double*[n];
        for (int i=0; i<tg.n; i++)
        {
            tg.a[i]= new double [m];
        }
        for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
        tg.a[i][j] = a[i][j] + y.a[i][j];
    }
    else
    {
        cout<<"two matrices are not the same size ";
        tg.n=tg.m=0;
    }
    return tg;
}

Matrix Matrix::operator-(Matrix y)
{
    Matrix tg;
    if (n==y.n && m==y.m)
    {
        tg.n=n;
        tg.m=m;
        tg.a =new double*[n];
        for (int i=0; i<tg.n; i++)
        tg.a[i]= new double [m];
        for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
        a[i][j]= a[i][j] - y.a[i][j];
    }
    else
    {
        cout<<"tow matrices are not the same size ";
        tg.n=tg.m=0;
    }
    return tg;
}

Matrix Matrix::operator-()
{
    Matrix tg;
    tg.n=n;
    tg.m=m;
    tg.a= new double*[n];
    for (int i=0; i<tg.n; i++)
    tg.a[i]= new double [m];
    for (int i=0; i<n; i++)
    for (int j=0; j<n; j++)
    tg.a[i][j] = -a[i][j];
    return tg;
}