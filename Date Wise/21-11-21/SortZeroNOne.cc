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

Node* Sap(Node* A)
{
    Node* H_1=NULL;
    Node* H_0=NULL;
    Node* H_End_1=NULL;
    Node* H_End_0=NULL;
    Node* Temp=A;
    while(Temp!=NULL && (H_0==NULL || H_1==NULL))
    {
        if(Temp->Data==1)
        {
            H_1=Temp;
            H_End_1=Temp;
        }
        if(Temp->Data==0)
        {
            H_0=Temp;
            H_End_0=Temp;
        }
        Temp=Temp->Next;
    }
    Temp=A;
    while(Temp!=NULL)
    {
        if(Temp->Data==1)
        {
            if(Temp!=H_1)
            {
                H_End_1->Next=Temp;
                H_End_1=Temp;
                Temp=Temp->Next;
            }
            else
            {
                Temp=Temp->Next;
            }
        }
        else{

            if(Temp!=H_0)
            {
                H_End_0->Next=Temp;
                H_End_0=Temp;
                Temp=Temp->Next;
            }
            else
            {
                Temp=Temp->Next;
            }
        }
    }
    H_End_1->Next=NULL;
    H_End_0->Next=H_1;
    return H_0;
}

Node* Sap2(Node* A)
{
    Node* Temp=A;
   int count0=0;
   int count1=0;
   while(Temp!=NULL)
   {
       if(Temp->Data==1)
       {
           count1++;
       }
       else
       {
           count0++;
       }
       Temp=Temp->Next;
       cout<<"While1";
   }
   Node* head=NULL;
   while(count1--)
   {
        Node* n=new Node(1);
        n->Next=head;
        head=n;
   }
   while(count0--)
   {
       Node* n=new Node(0);
       n->Next=head;
       head=n;
   }
   return head;
}

int main()
{
    Node* head=NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,1);
    InsertAtTail(head,1);
    InsertAtTail(head,1);
    InsertAtTail(head,0);
    InsertAtTail(head,1);
    InsertAtTail(head,0);
    InsertAtTail(head,1);

    display(Sap2(head));
    return 0;
}