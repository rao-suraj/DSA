#include<bits/stdc++.h>

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

Node* reverseK(Node* &head,int k)
{
    Node* prevptr=NULL;
    Node* currptr=head;
    Node* nextptr;

    int count=0;
    while(currptr!=NULL && count<k)
    {
        nextptr=currptr->Next;
        currptr->Next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL)
    {
    head->Next = reverseK(nextptr,k);
    }
    return prevptr;
}

int main()
{
    Node* head=NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    InsertAtTail(head,5);
    InsertAtTail(head,6);
    int k=2;
    // Node* newHead=reverseK(head,k);
    display(newHead);

    
    return 0;
}