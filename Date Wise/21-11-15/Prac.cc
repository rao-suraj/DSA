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



int main()
{
    node* head=NULL;
    node* n=new node(5);
    head=n;
    cout<<head->data;
    cout<<head->next;
    node* temp=head;
    // cout<<temp->data<<endl;
    // cout<<temp->next<<endl;

    // node* m=new node(6);
    // temp=head;
    // while(temp->next!=0)
    // {
    //     temp=temp->next;
    // }
    // temp->next=m;
    // cout<<temp->data<<endl;
    // cout<<temp->next<<endl;
    // temp=temp->next;
    // cout<<temp->data<<endl;
    // cout<<temp->next<<endl;

    return 0;
}