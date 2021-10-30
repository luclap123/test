// bài tập rèn luyện danh sách liên kết đơn, kiểu cơ sở
#include <iostream>
using namespace std;

struct Node
{
    float data;
    Node *pNext;
};

struct SingleList 
{
    Node *pHead;
};

void Initialize (SingleList *&List)
{
    List = new SingleList;
    List->pHead = NULL;
}

// tạo một Node
Node *CreateNode(float d)
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

// duyệt Node
void PrintNode(SingleList *List)
{
    Node *ptm = List->pHead;
    if (ptm == NULL)
    {
        cout<<"empty";
        return;
    }
    while (ptm != NULL)
    {
        cout<<ptm->data<<"\t";
        ptm = ptm->pNext;
    }
}

// đếm số lượng phần tử
int SizeofList(SingleList *List)
{
    Node *ptm = List->pHead;
    int size=0;
    while (ptm != NULL)
    {
        ptm = ptm->pNext;
        size++;
    }
    return size;
}

// chèn phần tử vào đầu danh sách
void InsertFirst(SingleList *&List, float d)
{
    Node *pNode = CreateNode(d);
    if (List->pHead == NULL)
    {
        List->pHead = pNode;
    }
    else
    {
        pNode->pNext = List->pHead;
        List->pHead = pNode;
    }
}

// chèn phần tử vào cuối danh sách
void InsertLast(SingleList *&List, float d)
{
    Node *pNode = CreateNode(d);
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

// chèn phần tử vào cuối danh sách
void InsertMid (SingleList *&List, int pos, float d)
{
    if (pos<0 || pos>SizeofList(List))
    {
        cout<<"Error: Invalid";
    }
    else if (pos == 0)
    {
        InsertFirst(List, d);
    }
    else if (pos == SizeofList(List)-1)
    {
        InsertLast(List,d);
    }
    else
    {
        Node *pNode = CreateNode(d);
        Node *pIns = List->pHead;
        Node *pPre = NULL;
        int i=0;
        while (pIns != NULL)
        {
            if (i==pos)
                break;
            pPre = pIns;
            pIns = pIns->pNext;
            i++;
        }
        pNode->pNext = pIns;
        pPre->pNext = pNode;
    }
}

// tính tổng phần tử trong danh sách liên kết
float sumList (SingleList *List)
{
    Node *ptm = List->pHead;
    float sum=0;
    while (ptm != NULL)
    {
        sum += ptm->data;
        ptm = ptm->pNext;
    }
    return sum;
}

// tìm kiếm
Node *search (SingleList *List, float d)
{
    Node *ptm = List->pHead;
    while (ptm != NULL)
    {
        if (ptm->data == d)
            break;
        ptm = ptm->pNext;
    }
    return ptm;
}

void Sort (SingleList *&List)
{
    for (Node *ptm = List->pHead; ptm != NULL; ptm = ptm->pNext)
    {
        for (Node *ptm2 = ptm->pNext; ptm2 != NULL; ptm2 = ptm2->pNext)
        {
            if (ptm2->data > ptm->data)
            {
                float swap = ptm->data;
                ptm->data = ptm2->data;
                ptm2->data = swap;
            }
        }
    }
}

void remove (SingleList *&List, float d)
{
    Node *pDel = List->pHead;
    if (pDel == NULL)
    {
        cout<<"the list is empty"<<endl;
        return;
    }
    else
    {
        // tìm vị trí
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
            cout<<"not found"<<endl;
        }
        else
        {
            if (pDel == List->pHead) // nếu ở đầu
            {
                List->pHead = List->pHead->pNext;
                pDel->pNext = NULL;
                delete pDel;
                pDel = NULL;
            }
            else
            {
                // ở giữa
                pPre->pNext = pDel->pNext;
                pDel->pNext = NULL;
                delete pDel;
                pDel = NULL;
            }
        }
    }
}

int main ()
{
    SingleList *List;
    Initialize(List);

    InsertFirst(List,1.4);
    InsertFirst(List,8.8);
    InsertLast(List,13.4);
    InsertMid(List,1,94.2);
    InsertFirst(List,9.5);
    InsertMid(List, 3, 5.9);
    InsertLast(List,32.7);

    PrintNode(List);

    cout<<"\nnumber of element : "<<SizeofList(List)<<endl;

    cout<<"sum of array : "<<sumList(List)<<endl;

    float d;
    cout<<"input number need find : ";
    cin>>d;
    Node *found = search(List,d);
    if (found==NULL)
    {
        cout<<"not find the number"<<endl;
    }
    else
    {
        cout<<"found the number "<<d<<endl;
    }

    Sort(List);
    cout<<"after sort the array : "<<endl;
    PrintNode(List);

    cout<<"\ninput remove number : ";
    cin>>d;
    remove(List,d);
    cout<<"after remove the number : "<<endl;
    PrintNode(List);
}
