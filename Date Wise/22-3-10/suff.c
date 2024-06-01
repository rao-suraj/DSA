#include<stdio.h>
#include <math.h>
#define MAX 10

typedef struct{
    int top;
    int item[MAX];
}STACK;

void push(STACK* s,int ele);
int pop(STACK* s);

void main()
{
    STACK s;
    char post[100];
    int i,op1,op2;
    char ch;
    s.top=-1;
    gets(post);
    for(i=0;post[i]!='\0';i++)
    {
        ch=post[i];
    switch(ch)
    {
        case '+':op2=pop(&s);    
                op1=pop(&s);
                printf("%d  %d",op1,op2);
                push(&s,op1+op2);
                break;
        case '-':op2=pop(&s);
                op1=pop(&s);
                push(&s,op1-op2);
                break;
        case '*':op2=pop(&s);
                op1=pop(&s);
                push(&s,op1*op2);
                break;
        case '/':op2=pop(&s);
                op1=pop(&s);
                push(&s,op1/op2);
                break;
        default:push(&s,ch-'0');
    }
    }
    printf("%d",s.item[s.top]);
}

void push(STACK *s, int ele)
{
    if(s->top==MAX-1)
    {
        printf("Stack is full\n");
    }
    else
    {
        s->top=(s->top)+1;
        s->item[s->top]=ele;
    }
}

int pop(STACK *s)
{
    int ele;
    if(s->top==-1)
    {
        printf("Stack is empty\n");
    }
    else {
        ele=s->item[s->top];
        s->top=s->top-1;
        return ele;
    }
}
