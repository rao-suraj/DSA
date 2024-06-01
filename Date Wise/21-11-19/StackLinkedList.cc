#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Stack{
    public:
    int data;
    Stack* next;

    Stack(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertEle(Stack* &Top,int val)
{
    Stack* n=new Stack(val);
    n->next=Top;
    Top=n;
}

void display(Stack* Top)
{
    while(Top!=NULL)
    {
        cout<<Top->data<<" ";
        Top=Top->next;
    }
}

void pop(Stack* &Top)
{
    Stack* Temp=Top;
    Top=Top->next;
    delete Temp;
}

int main()
{
    Stack* Top=NULL;
    insertEle(Top,1);
    insertEle(Top,2);
    insertEle(Top,3);
    display(Top);
    pop(Top);
    display(Top);
    return 0;
}