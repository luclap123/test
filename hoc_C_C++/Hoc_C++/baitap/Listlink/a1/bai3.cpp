#include <iostream>
using namespace std;

// phân số
struct Phanso
{
    float a;
    float b;
};

struct Node
{
    Phanso *data;
    Node *pNext;
};

struct SingleList
{
    Node *pHead;
};

void Initialize(SingleList *&List)
{
    List = new SingleList;
    List->pHead = NULL;
}

Phanso *input()
{
    Phanso *in = new Phanso;
    cout<<"input tu: ";
    cin>>in->a;
    cout<<"input mau: ";
    cin>>in->b;
    return in;
}

Node *CreateNode(Phanso *in)
{
    Node *pNode = new Node;
    if (pNode != NULL)
    {
        pNode->data = in;
        pNode->pNext = NULL;
    }
    else
    {
        cout<<"Warning";
    }
    return pNode;
}

void InsertLast(SingleList *&List, Phanso *in)
{
    Node *pNode = CreateNode(in);
    if (List->pHead == NULL)
    {
        List->pHead = pNode;
    }
    else
    {
        Node *ptm = List->pHead;
        while (ptm->pNext != NULL)
        {
            ptm = ptm->pNext;
        }
        ptm->pNext = pNode;
    }
}

void Print(SingleList *List)
{
    Node *ptm = List->pHead;
    if (ptm == NULL)
    {
        cout<<"Error";
        return ;
    }
    while (ptm != NULL)
    {
        Phanso *in = ptm->data;
        cout<<in->a<<"/"<<in->b<<endl;
        ptm = ptm->pNext;
    }
}

void sum(SingleList *List)
{
    int s1 = 0;
    int s2 = 0;
    int s=0;
    Node *ptm = List->pHead;
    if (ptm == NULL)
    {
        cout<<"ERROR";
        return ;
    }
   
    s= s1 + s2;
}

int main ()
{
    SingleList *List;
    Initialize(List);
    Phanso *a = input();
    InsertLast(List,a); 
    Phanso *b = input();
    InsertLast(List,b); 
    Print(List);
}
