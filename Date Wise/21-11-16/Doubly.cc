#include<iostream>

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};

using namespace std;

void insertAtHead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    if(head!=NULL)
    {
        head->prev=n;
    }
    head=n;
}
void insertAtTail(node* &head,int val){
    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    node* n=new node(val);
    node* Temp=head;
    while(Temp->next!=NULL)
    {
        Temp=Temp->next;
    }
    Temp->next=n;
    n->prev=Temp;
}


void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void deleteAtHead(node* &head)
{
    node* todelete=head;
    head=head->next;
    head->prev=NULL;

    delete todelete;
}

void deletion(node* &head,int pos)
{
    if(pos==1)
    {
        deleteAtHead(head);
    }
    node* temp=head;
    int count=1;
    while(count!=pos && temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL)
    {
    temp->next->prev=temp->prev;
    }

    delete temp;

}

int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    deletion(head,3);
    cout<<endl;
    display(head);
    
    return 0;
}