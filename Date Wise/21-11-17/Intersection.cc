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

// int intersiction(Node* &head1,Node* &head2)
// {
//     int l1=length(head1);
//     int l2=length(head2);

//     int d=0;
//     Node* ptr1;
//     Node* ptr2;

//     if(l1>l2)
//     {
//         d=l1-l2;
//         ptr1=head1;
//         ptr2=head2;
//     }
//     else
//     {
//         d=l2-l1;
//         ptr1=head2;
//         ptr2=head1;
//     }
//     while(d)
//     {
//         ptr1=ptr1->Next;
//         if(ptr1==NULL)
//         {
//             return -1;
//         }
//         d--;
//     }

//     while(ptr1!=NULL && ptr2!=NULL)
//     {

//         if(ptr1==ptr2)
//         {
//             return ptr1->Data;
//         }
//         ptr1=ptr1->Next;
//         ptr2=ptr2->Next;
//     }
//     return -1;
// }

Node* merge(Node* &head1,Node* &head2)
{
    Node* p1=head1;
    Node* p2=head2;
    Node* dummyNode=new Node(-1);
    Node* p3=dummyNode;
    while(p1!=NULL && p2!=NULL)
    {
        if(p1->Data<p2->Data)
        {
            p3->Next=p1;
            p1=p1->Next;
            p3=p3->Next;
        }
        else
        {
            p3->Next=p2;
            p2=p2->Next;
            p3=p3->Next;
        }
    }
    while(p1!=NULL)
    {
        p3->Next=p1;
        p1=p1->Next;
        p3=p3->Next;
    }

     while(p2!=NULL)
    {
        p3->Next=p2;
        p2=p2->Next;
        p3=p3->Next;
    }
    return dummyNode->Next; 
}

Node* mergeRecursive(Node* &head1,Node* &head2)
{
    if(head1==NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head1;
    }
    Node* result;
    if(head1->Data<head2->Data)
    {
        result=head1;
        result->Next=mergeRecursive(head1->Next,head2);
    }
    else
    {
        result=head2;
        result->Next=mergeRecursive(head1,head2->Next);
    }
    return result;
}

int main()
{
    Node* head1=NULL;
    InsertAtTail(head1,1);
    InsertAtTail(head1,2);
    InsertAtTail(head1,3);
    InsertAtTail(head1,4);
    InsertAtTail(head1,6);
    int arr[]={5,7,8,9,10};
    Node* head2=NULL;
    for(int i=0;i<5;i++)
    {
        InsertAtTail(head2,arr[i]);
    }
    display(mergeRecursive(head1,head2));
    return 0;
}