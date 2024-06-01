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

void display(Node* head)
{
    Node* Temp=head;
    while(Temp!=0) /*Because we have to run all the values if we take next last value will be remaining */
    {
        cout<<Temp->Data<<" ";
        Temp=Temp->Next;
    }
}

void EvenOdd(Node* &head)
{
    Node* odd=head;
    Node* even=head->Next;
    Node* EvenStart=even;

    while( odd->Next!=NULL && even->Next!=NULL)
    {
        odd->Next=even->Next;
        odd=odd->Next;
        even->Next=odd->Next;
        even=even->Next;
    }
    odd->Next=EvenStart;
    if(odd->Next!=NULL)
    {
        even->Next=NULL;
    }
}

int main()
{
    Node* head=NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    InsertAtTail(head,5);
    display(head);
    EvenOdd(head);
    display(head);
    return 0;
}