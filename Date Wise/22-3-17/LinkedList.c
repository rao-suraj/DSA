#include<stdio.h>
#include<stdlib.h>

struct node
{
    int ele;
    struct node* next;
    struct node* prev;
};

typedef struct node* Node;
Node first=NULL;
Node last,temp;

Node getNode();
void read();
void create();
void display();
void insert_frt();

void main()
{
    int ch;
    while(1)
    {
        printf("Enter ch\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1 :
            create();
            break;
        case 2 :
            display();
            break;
        default:
            printf("Invalid\n");
            break;
        }
    }
}

Node getNode()
{
    temp=(Node) malloc(sizeof(struct node));
    temp->next=NULL;
    return temp;
}

void read()
{
    temp= getNode();
    printf("Enter the ele\n");
    scanf("%d",&temp->ele);
}

void create()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    read();
    if(first==NULL)
    {
        last=first=temp;
    }
    else
    {
        while(last->next!=NULL)
        {
            last=last->next;
        }
        last->next=temp;
        temp->prev=last;
    }
    }
}

void display()
{
    temp=first;
    if(first==NULL)
    {
        printf("Enpty\n");
    }
    else 
    {
        while(temp!=NULL)
        {
            printf("%d\n",temp->ele);
            temp=temp->next;
        }
    }
}

void insert_end()
{
    read();
    if(first==NULL)
    {
        first=temp;
    }
    else
    {
        last=first;
        while(last->next!=NULL)
        {
            last=last->next;
        }
        last->next=temp;
        temp->prev=last;
    }
}

