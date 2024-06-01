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

bool DetectCycle(Node* &head){

    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->Next->Next)
    {
        slow=slow->Next;
        fast=fast->Next->Next;

        if(fast==slow)
        {
            return true;
        }
    }
    return false;
}

void MakeCycle(Node* &head,int pos)
{
    Node* temp=head;
    Node* CyclePos;
    int count=1;
    while(temp->Next!=NULL)
    {
        if(count==pos)
        {
            CyclePos=temp;
        }
        temp=temp->Next;
        count++;
    }
    temp->Next=CyclePos;
}

// void RemoveCycle(Node* & head)
// {
//     Node* slow=head;
//     Node* fast=head;
//     do
//     {
//         slow=slow->Next;
//         fast=fast->Next->Next;
//     }while(slow!=fast);

//     slow=head;
//     while(slow->Next!=fast->Next)
//     {
//         slow=slow->Next;
//         fast=fast->Next;
//     }
//     fast->Next=NULL;
// }
void removeLoop(Node* head)
    {
       Node* Fast=head;
       Node* Slow=head;
       do
        {
           Slow=Slow->Next;
           Fast=Fast->Next->Next;
       }while(Slow!=Fast);

       Slow=head;
       while(Fast->Next!=Slow->Next)
       {
           Fast=Fast->Next;
           Slow=Slow->Next;
       }
       Fast->Next=NULL;
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
    // display(head);
    // cout<<search(head,2);
    MakeCycle(head,1);
    // cout<<DetectCycle(head);
    removeLoop(head);
    display(head);
    return 0;
}