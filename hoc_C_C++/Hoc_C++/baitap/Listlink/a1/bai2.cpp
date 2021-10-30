#include <iostream>
#include <iomanip>

using namespace std;

struct Node 
{
    int data;
    Node *pNext;
};

struct singleList
{
    Node *pHead;
};

void Initialize (singleList &List)
{
    List.pHead = NULL;
}

// tạo một node
Node *CreateNode (int d)
{
    Node *pNode = new Node;
    if (pNode != NULL)
    {
        pNode->data = d;
        pNode->pNext = NULL;
    }
    else
    {
        cout<<"ERROR:";
    }
    return pNode;
}

void PrintNode(singleList List)
{
    Node *ptm = List.pHead;
    if (ptm == NULL)
    {
        cout<<"empty......";
    }
    while (ptm != NULL)
    {
        cout<<ptm->data<<setw(6);
        ptm = ptm->pNext;
    }
}

void InsertFirst (singleList &List, int d)
{
    Node *pNode = CreateNode(d);
    if (List.pHead == NULL)
    {
        List.pHead = pNode;
    }
    else
    {
        pNode->pNext = List.pHead;
        List.pHead = pNode;
    }
}

// xóa toàn bộ phần tử k trong danh sách liên kết
void removeNode(singleList &List, int d)
{
    Node *pPre, *Cur;

    while (List.pHead != NULL && List.pHead->data == d)
    {
        pPre = List.pHead;
        List.pHead = List.pHead->pNext;
        
    }
}


int main ()
{
    singleList List;
    Initialize(List);
    InsertFirst(List,5);
    InsertFirst(List,7);
    InsertFirst(List,9);
    InsertFirst(List,9);

    PrintNode(List);
    cout<<"\ndelete 9 \n";
    removeNode(List,9);
    PrintNode(List);
    return 0;
}