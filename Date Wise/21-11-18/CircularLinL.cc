#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertAtHead(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }
    node* Temp=head;
    while(Temp->next!=head)
    {
        Temp=Temp->next;
    }
    Temp->next=n;
    n->next=head;
    head=n;
}

void insertionAtTail(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    node* Temp=head;
    while(Temp->next!=head)
    {
        Temp=Temp->next;
    }
    Temp->next=n;
    n->next=head;
}

void display(node* head)
{
    node* Temp=head;
    do
    {
        cout<<Temp->data<<" ";
        Temp=Temp->next;
    }while(Temp!=head);
}

void deleteAtHead(node* &head,int val)
{
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    node* ToDelete=head;
    temp->next=head->next;
    head=head->next;
    delete ToDelete;
}

void deletion(node* &head,int pos)
{
    if(pos==1)
    {
        deleteAtHead(head,pos);
        return;
    }
    node* temp=head;
    int counter=1;
    while(counter!=pos-1)
    {
        temp=temp->next;
        counter++;
    }
    node* ToDelete=temp->next;
    temp->next=temp->next->next;
    delete ToDelete;
}

int main()
{
    node* head=NULL;
    insertionAtTail(head,1);
    insertionAtTail(head,2);
    insertionAtTail(head,3);
    insertionAtTail(head,4);
    insertionAtTail(head,5);
    insertionAtTail(head,6);
    display(head);
    deletion(head,3);
    display(head);
    return 0;
}