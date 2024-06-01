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

int IsPal(Node* A)
{
    Node* Slow=A;
    Node* Fast=A;
    while(Fast->Next!=NULL || Fast!=NULL)
    {
        Fast=Fast->Next->Next;
        Slow=Slow->Next;
    }
    while(Slow->Next!=NULL)
    {
        Slow->Next->Next=Slow;
        Slow=Slow->Next;        
    }
    Node* Head=Slow;
    Node* One=A;
    Node* Two=Head;
    while(One!=Two || (One->Next!=Two && Two->Next!=One))
    {
        if(One->Data!=Two->Data)
        {
            return 1;
        }
        One=One->Next;
        Two=Two->Next;
    }
    return 0;
}

int main()
{
    Node* head=NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,2);
    InsertAtTail(head,1);

    display(head);
    // cout<<search(head,2);
    // deletion(head,3);
    // display(head);
    cout<<
    return 0;
}