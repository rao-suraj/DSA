#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
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
    while(Temp->next !=NULL)
    {
        Temp=Temp->next;
    }
    Temp->next=n;
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
        cout<<Temp->data<<" ";
        Temp=Temp->next;
    }
}


int main()
{
    
    return 0;
}