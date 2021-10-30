#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

struct Node 
{
    int data;
    Node *pNext;
};

struct SingleList
{
    Node *pHead;
};

void Initialize(SingleList &List)
{
    List.pHead = NULL; // bắt đầu là NULL
}

// hàm tạo danh sách Node (danh sách liên kết đơn)
Node *CreateNode(int d)
{
    Node *pNode = new Node;
    if (pNode != NULL)
    {
        pNode->data = d;
        pNode->pNext = NULL;
    }
    else
    {
        cout<<"ERROR";
    }
    return pNode;
}

// duyệt danh sách liên kết
void PrintNode(SingleList List)
{
    Node *ptm = List.pHead;
    if (ptm == NULL)
    {
        cout<<"link list empty";
        return ;
    }
    while (ptm != NULL)
    {
        cout<<ptm->data<<setw(6);
        ptm = ptm->pNext;
    }
}

// đếm số phần tử trong Node
int SizeofNode(SingleList List)
{
    Node *ptm = List.pHead;
    int size = 0;
    while (ptm != NULL)
    {
        ptm = ptm->pNext;
        size++;
    }
    return size;
}

// chèn Node vào đầu tiên
void insertNode (SingleList &List, int d)
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

// chèn Node vào cuối danh sách liên kết
void insertlast(SingleList &List, int d)
{
    Node *pNode = CreateNode(d);
    if (List.pHead == NULL)
    {
        List.pHead = pNode;
    }
    else
    {
        Node *ptm = List.pHead;
        while (ptm->pNext != NULL)
        {
            ptm = ptm->pNext;
        }
        ptm->pNext = pNode;
    }
}

// chèn vào giữa danh sách liên kết
void insertmid(SingleList &List, int location , int d)
{
    if (location <0 || location >=SizeofNode(List))
    {
        cout<<"illegal";
        return ;
    }
    if (location == 0)
    {
        insertNode(List,d);
    }
    else if(location >=SizeofNode(List)-1)
    {
        insertlast(List,d);
    }
    else
    {
        Node *pNode = CreateNode(d);
        Node *pIns = List.pHead;
        Node *pPre = NULL;
        int i=0;
        while (pIns != NULL)
        {
            if (i==location)
            break;
            pPre = pIns;
            pIns = pIns->pNext;
            i++;
        }
        pNode->pNext = pIns;
        pPre->pNext = pNode;
    }
}

// xóa một phần tử trong danh sách liên kết
void removeNode(SingleList &List, int d)
{
    Node *pDel = List.pHead;
    if (pDel==NULL)
    {
        cout<<"the Node is empty"<<endl;
        return ;
    }
    else
    {
        Node *pPre = NULL;
        while (pDel != NULL)
        {
            if (pDel->data == d)
                break;
            pPre = pDel;
            pDel = pDel->pNext;
        }
        if (pDel == NULL)
        {
            cout<<"not find"<<d;
        }
        else
        {
            if (pDel == List.pHead)
            {
                List.pHead = List.pHead->pNext;
                pDel->pNext = NULL;
                delete pDel;
                pDel = NULL;
            }
            else
            {
                pPre->pNext = pDel->pNext;
                pDel->pNext = NULL;
                delete pDel;
                pDel = NULL;
            }
        }
    }
}

// tìm kiếm trong danh sách liên kết
Node *search(SingleList List, int d)
{
    Node *ptm = List.pHead;
    while(ptm != NULL)
    {
        if (ptm->data == d)
            break;
        ptm = ptm->pNext;
    }
    return ptm;
}

// sắp xếp trên danh sách liên kết
void SortNode(SingleList &List)
{
    for (Node *ptm = List.pHead; ptm != NULL; ptm=ptm->pNext)
    {
        for (Node *ptm2 = ptm->pNext; ptm2 != NULL; ptm2=ptm2->pNext)
        {
            if (ptm2->data <ptm->data)
            {
                int swap = ptm->data;
                ptm->data = ptm2->data;
                ptm2->data = swap;
            }
        }
    }
}

// thu hồi bộ nhớ
void Freememory(SingleList &List)
{
    cout<<"\nstart delete ...."<<endl;
    while (List.pHead != NULL)
    {
        Node *ptm = List.pHead;
        List.pHead = List.pHead->pNext;
        ptm->pNext = NULL;
        cout<<"deleted : "<<ptm->data<<endl;
        delete ptm;
        ptm = NULL;
    }
    cout<<"success delete ...."<<endl;
}

int main ()
{
    SingleList List;
    Initialize(List);

    insertNode(List,8);
    insertlast(List,10);
    insertNode(List,20);
    insertmid(List,1,112);
    insertmid(List,2,118);
    insertlast(List,22);
    insertmid(List,1,12);

    PrintNode(List);

    cout<<"\ndelete 112"<<endl;
    removeNode(List,112);
    PrintNode(List);
    
    cout<<"\ndelete 8"<<endl;
    removeNode(List,8);
    PrintNode(List);
    cout<<"\nnumber of value : "<<SizeofNode(List)<<endl;
    
    int d;
    cout<<"input number find : ";
    cin>>d;
    Node *Find = search(List,d);
    if (Find != NULL)
    {
        cout<<"found "<<d<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }

    SortNode(List);
    cout<<"after sort increase : "<<endl;
    PrintNode(List);

    Freememory(List);
    return 0;
}