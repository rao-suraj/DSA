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

void insertAtHead(Node* &head,int val)
{
    Node* n= new Node(val);
    n->Next=head;
    head=n;
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

bool search(Node* head,int val)
{
    Node* temp=head;
    while(temp!=0)
    {
        if(temp->Data==val)
        {
            return 1;
        }
        temp=temp->Next;
    }
    return false;
}

void deletion(Node* &head,int val)
{
    Node* Temp=head;
    while(Temp->Next->Data!=val)
    {
        Temp=Temp->Next;
    }
    Node* ToDelete=Temp->Next;
    Temp->Next=Temp->Next->Next;

    delete ToDelete;

}

int main()
{
    Node* head=NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    display(head);
    // cout<<search(head,2);
    deletion(head,3);
    display(head);
    return 0;
}