#include <iostream>
#include <string>
using namespace std;

struct Book
{
    int code;
    string name;
    int page;
};

struct Node
{
    Book *data;
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

Book *input()
{
    Book *B = new Book;
    cout<<"input code: ";
    cin>>B->code;
    cout<<"input name: ";
    cin.ignore();
    getline(cin, B->name);
    cout<<"input page: ";
    cin>>B->page;
    return B;
}

Node *CreateNode(Book *B)
{
    Node *pNode = new Node;
    if (pNode != NULL)
    {
        pNode->data = B;
        pNode->pNext = NULL;
    }
    else
    {
        cout<<"error:";
    }
    return pNode;
}

void InsertFirst(SingleList *&List, Book *B)
{
    Node *pNode = CreateNode(B);
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

void PrintNode(SingleList *List)
{
    Node *ptm = List->pHead;
    if (ptm == NULL)
    {
        cout<<"NULL";
        return;
    }
    while (ptm != NULL)
    {
        Book *B = ptm->data;
        cout<<B->code<<"\t"<<B->name<<"\t"<<B->page<<endl;
        ptm = ptm->pNext;
    }
}

Node *find_book(SingleList *List, string namea)
{
    Node *ptm = List->pHead;
    while (ptm != NULL)
    {
        Book *B = ptm->data;
        if (B->name == namea)
            break;
        ptm =ptm->pNext;
    }
    return ptm;
}

void sort (SingleList *&List)
{
    for (Node *ptm = List->pHead; ptm != NULL; ptm = ptm->pNext)
    {
        for (Node *ptm2 = ptm->pNext; ptm2 != NULL; ptm2 = ptm2->pNext)
        {
            Book *B1 =  ptm->data;
            Book *B2 = ptm2->data;
            if (B1->page < B2->page)
            {
                int code = B1->code;
                string name = B1->name;
                int page = B1->page;

                B1->code = B2->code;
                B1->name = B2->name;
                B1->page = B2->page;

                B2->code = code;
                B2->name = name;
                B2->page = page;
            }
        }

    }
}
int main()
{
    SingleList *List;
    Initialize(List);
    Book *a = input();
    InsertFirst(List,a);
    Book *b = input();
    InsertFirst(List,b);
    Book *c = input();
    InsertFirst(List,c);
    Book *d = input();
    InsertFirst(List,d);
    PrintNode(List);

    string name;
    cout<<"input name book want to find: ";
    cin>>name;
    Node *Book = find_book(List,name);
    if (Book == NULL)
    {
        cout<<"can not find any thing";
    }
    else
    {
        cout<<"find book "<<d<<endl;
    }

    sort(List);
    cout<<"after sort list \n";
    PrintNode(List);
} 