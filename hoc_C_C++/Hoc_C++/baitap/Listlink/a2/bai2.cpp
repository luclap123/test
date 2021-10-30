#include <iostream>
#include <math.h>
using namespace std;
struct PhanSo
{
    double tu;
    double mau;
};

struct Node
{
    PhanSo *data;
    Node *pNext;
};

struct SingleList
{
    Node *pHead;
    Node *pTail;
};

void Initialize (SingleList *&List)
{
    List = new SingleList;
    List->pHead = List->pTail = NULL;
}

Node *CreateNode(double tu, double mau)
{
    Node *pNode = new Node;
    if (pNode == NULL)
    {
        cout<<"error";
        exit(0);
    }
    PhanSo *PS = new PhanSo;
    PS->tu = tu;
    PS->mau = mau;
    pNode->data = PS;
    pNode->pNext = NULL;
    return pNode;
}

void InsertLast(SingleList *&List, double tu, double mau)
{
    Node *pNode = CreateNode(tu, mau);
    if (List->pTail == NULL)
    {
        List->pHead = List->pTail= pNode;
    }
    else
    {
        List->pTail->pNext = pNode;
        List->pTail = pNode;
    }
}

void PrintNode (SingleList *List)
{
    Node *ptm = List->pHead;
    while (ptm != NULL)
    {
        PhanSo *PS = ptm->data;
        cout<<PS->tu<<"/"<<PS->mau<<"+";
        ptm = ptm->pNext;
    }
}

double giaithua(int n)
{
    if (n<=1)
        return 1;
    return n*giaithua(n-1);
}

double sumofList(SingleList *List)
{
    double sum = 0;
    Node *ptm = List->pHead;
    while (ptm != NULL)
    {
        PhanSo *PS = ptm->data;
        sum = sum + (PS->tu*1.0 / PS->mau);
        ptm = ptm->pNext;
    }
    return sum;
}

int main ()
{
    SingleList *List;
    Initialize (List);
    double x,n;
    cout<<"input x: ";
    cin>>x;
    cout<<"input n: ";
    cin>>n;
    for (int i=1; i<=n;i++)
    {
        int tu = pow (x,i);
        int mau = giaithua(i);
        InsertLast(List,tu,mau);
    }
    PrintNode(List);
    double sum = sumofList(List);
    cout<<"\nsum: "<<sum<<endl;
}