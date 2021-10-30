#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

// thông tin sinh viên
struct Student 
{
    int code;
    string name;
};

// một node
struct Node 
{
    Student *data;
    Node *pNext;
};

// danh sách node
struct SingleList
{
    Node *pHead;
};

// khởi tạo list
void Initialize (SingleList *&List)
{
    List = new SingleList;
    List->pHead = NULL;
}

// tạo một sinh viên
Student *input ()
{
    Student *sv = new Student;
    cout<<"input code :";
    cin>>sv->code;
    cin.ignore();
    cout<<"input name :";
    getline(cin, sv->name);
    return sv;
}

// tạo một Node
Node *CreateNode(Student *sv)
{
    Node *pNode = new Node;
    if (pNode != NULL)
    {
        pNode->data = sv;
        pNode->pNext = NULL;
    }
    else
    {
        cout<<"Error";
    }
    return pNode;
}

// chèn vào cuối danh sách liên kết
void InsertLast(SingleList *&List, Student *sv) 
{
    Node *pNode = CreateNode(sv);
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

// duyệt danh sách liên kết
void PrintNode(SingleList *List)
{
    Node *ptm = List->pHead;
    if (ptm == NULL)
    {
        cout<<"ERROR";
        return ;
    }
    while (ptm != NULL)
    {
        Student *sv = ptm->data;
        cout<<sv->code<<"\t"<<sv->name<<endl;
        ptm = ptm->pNext;
    }
}

// sắp xếp tăng dần
void Sort (SingleList *&List)   
{
    for (Node *ptm = List->pHead; ptm != NULL; ptm = ptm->pNext)
    {
        for (Node *ptm2 = ptm->pNext; ptm2 != NULL; ptm2 = ptm2->pNext)
        {
            Student *sv = ptm->data;
            Student *sv2 = ptm2->data;
            if (sv->code > sv2->code)
            {
                int code = sv->code;
                string name = sv->name;

                sv->code = sv2->code;
                sv->name = sv2->name;

                sv2->code = code;
                sv->name = name;
            }
        }

    }
}

// xóa một node
void RemoveNode(SingleList *&List, int codes)
{
    Node *pDel = List->pHead;
    if (pDel == NULL)
    {
        cout<<"the list is empty"<<endl;
        return ;
    }
    else
    {
        Node *pPre = NULL;
        while (pDel != NULL)
        {
            Student *sv = pDel->data;
            if (sv->code == codes)
                break;
            pPre = pDel;
            pDel = pDel->pNext;
        }
        if (pDel == NULL)
        {
            cout<<"not found the code"<<endl;
        }
        else
        {
            // ở đầu
            if (pDel == List->pHead)
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
    Student *a= input();
    InsertLast(List,a);
    Student *b= input();
    InsertLast(List,b);
    Student *c= input();
    InsertLast(List,c);
    PrintNode(List);

    Sort(List);
    cout<<"after sort List"<<endl;
    PrintNode(List);

    int code;
    cout<<"intput code want to delete : ";
    cin>>code;
    RemoveNode(List,code);
    cout<<"after delete code : "<<endl;
    PrintNode(List);

    return 0;
}