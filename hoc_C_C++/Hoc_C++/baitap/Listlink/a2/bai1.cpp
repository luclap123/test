#include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node *pNext;
};

struct SingleList
{
    Node *pHead;
    Node *pTail;
};

void Initialize(SingleList &List)
{
    List.pHead = List.pTail = NULL;
}

// duyệt danh sách liên kết
void PrintNode (SingleList List)
{
    Node *ptm = List.pHead;
    if (ptm == NULL)
    {
        cout<<"this list empty"<<endl;
        return ;
    }
    while (ptm != NULL)
    {
        cout<<ptm->data<<"\t";
        ptm = ptm->pNext;
    }
}

// đếm số lượng phần tử
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

// hàm tạo node
Node *CreateNode(int d)
{
    Node *pNode = new Node();
    if (pNode == NULL)
    {
        cout<<"Error:";
    }
    else
    {
        pNode->data = d;
        pNode->pNext = NULL;
    }
}

// hàm chèn vào đầu
void InsertFirst(SingleList &List, int d)
{
    Node *pNode = CreateNode(d);
    if (List.pHead == NULL)
    {
        List.pHead = List.pTail = pNode;
    }
    else
    {
        pNode->pNext = List.pHead;
        List.pHead = pNode;
    }
}

// chèn vào cuối danh sách liên kết
void InsertLast(SingleList &List, int d)
{
    Node *pNode = CreateNode(d);
    if (List.pTail == NULL)
    {
        List.pHead = List.pTail = pNode;
    }
    else
    {
        List.pTail->pNext = pNode;
        List.pTail = pNode;
    }
}

// chèn vào giữa danh sách liên kết
void InsertMid(SingleList &List, int location, int d)
{
    if (location < 0 || location > SizeofNode(List))
    {
        cout<<"your location wrong";
        return;
    }
    else if (location == 0)
    {
        InsertFirst(List,d);
    }
    else if (location == SizeofNode(List)-1)
    {
        InsertLast(List,d);
    }
    else
    {
        Node *pNode = CreateNode(d);
        Node *pIns = List.pHead;
        Node *pPre = NULL;
        int i = 0;
        while (pIns != NULL)
        {
            if (i == location)
                break;
            pPre = pIns;
            pIns = pIns->pNext;
            i++;
        }
        pPre->pNext = pNode;
        pNode->pNext = pIns;
    }

}

// xóa một Node trong danh sách liên kết
void RemoveNode(SingleList &List, int d)
{
    Node *pDel = List.pHead;
    if (pDel == NULL)
    {
        cout<<"Error";
        return;
    }
    else 
    {
        Node *pPre = NULL;
        while (pDel != NULL)
        {
            if (pDel->data ==d)
                break;
            pPre = pDel;
            pDel = pDel->pNext;
        }
        if (pDel == NULL)
        {
            cout<<"can not find "<<d;
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
            else if (pDel->pNext == NULL)
            {
                List.pTail = pPre;
                pPre->pNext = NULL;
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

// hàm tìm kiếm 
Node *find_value(SingleList List, int d)
{
    Node *ptm = List.pHead;
    while (ptm != NULL)
    {
        if (ptm->data == d)
            break;
        ptm = ptm->pNext;
    }
    return ptm;
}

// in ra các số chẵn
void Print_even(SingleList List)
{
    Node *ptm = List.pHead;
    if (ptm == NULL)
    {
        cout<<"ERROR";
        return;
    }
    while (ptm != NULL)
    {
        if (ptm->data % 2 == 0)
        {
            cout<<ptm->data <<"\t";
        }
        ptm = ptm->pNext;
    }
}


// sắp xếp danh sách liên kết
void Sort(SingleList &List)
{
    for (Node *ptm = List.pHead; ptm != NULL; ptm= ptm->pNext)
    {
        for (Node *ptm2 = ptm->pNext; ptm2 != NULL; ptm2= ptm2->pNext)
        {
            if (ptm2->data<ptm->data)
            {
                int tmp = ptm->data;
                ptm->data = ptm2->data;
                ptm2->data = tmp;
            }
        }
    }
}
int main ()
{
    SingleList List;
    Initialize(List);
    InsertFirst(List,10);
    InsertFirst(List,6);
    InsertLast(List,32);
    InsertFirst(List,100);
    InsertFirst(List,74);
    InsertLast(List,354);
    InsertFirst(List,7412);
    InsertMid(List,3,9);
    InsertMid(List,5,12);
    InsertMid(List,1,43);

    cout<<"the list: "<<endl;
    PrintNode(List);
    cout<<"\nsize of list: "<<SizeofNode(List);
    RemoveNode(List,12);
    RemoveNode(List,7412);
    cout<<"\nthe list: "<<endl;
    PrintNode(List);

    cout<<"\nthe even numbers: ";
    Print_even(List);

    cout<<"\nsize of list: "<<SizeofNode(List)<<endl;
    int d;
    cout<<"input value want to find: ";
    cin>>d;
    Node *search = find_value(List,d);
    if (search == NULL)
    {
        cout<<"can not find";
    }
    else
    {
        cout<<"find "<<d;
    }

    Sort(List);
    cout<<"\nafter sort the list: ";
    PrintNode(List);
}