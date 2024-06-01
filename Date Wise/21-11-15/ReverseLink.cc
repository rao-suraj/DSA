#include<iostream>

using namespace std;

class Node{
    public:
    int Data;
    Node* Next;

    Node(int val){
        Data=val;
        Next=NULL;
    }
};

void InsertAtTail(Node* &head,int val)
{
    Node* n=new Node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    Node* Temp=head;
    while(Temp->Next !=NULL)
    {
        Temp=Temp->Next;
    }
    Temp->Next=n;
}

Node* ReverseLink(Node* &head)
{
    Node* Pre=NULL;
    Node* Currt=head;
    Node* NextPtr;

    while(Currt!=NULL)
    {
        NextPtr=Currt->Next;
        Currt->Next=Pre;

        Pre=Currt;
        Currt=NextPtr;
    }
    return Pre;
}

void display(Node* head)
{
    Node* Temp=head;
    while(Temp!=0) /*Because we have to run all the values if we take next last value will be remaining */
    {
        cout<<Temp->Data<<" ";
        Temp=Temp->Next;
    }
}

Node* RecurRev(Node* &head)
{
    if(head==NULL || head->Next==NULL)
    {
        return head;
    }
    Node* NewHead = RecurRev(head->Next);
    head->Next->Next=head;
    head->Next=NULL;
    return NewHead;
}

int main()
{
    Node* head=NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    display(head);
    Node* NewHead=RecurRev(head);
    display(NewHead);
    return 0;
}